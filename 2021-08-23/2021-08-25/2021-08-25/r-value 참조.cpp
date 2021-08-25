
#include <iostream>
	int TestFunc(int nParam)
	{
		int nResult = nParam * 2;
		return nResult;
	}
	int main()
	{

		// r-value는 활용된 직후 소멸함
		int nInput = 0;
		std::cout << "Input number : ";
		std::cin >> nInput;

		// 산술 연산으로 만들어진 임시 객체에 대한 r-value 참조
		int&& rdata = nInput + 5;
		std::cout << rdata << std::endl;

		// 함수 반환으로 만들어진 임시 객체에 대한 r-value 참조
		int&& result = TestFunc(10);

		// 값을 변경할 수 있다.
		result += 10;
		std::cout << result << std::endl;

		return 0;
	}
}
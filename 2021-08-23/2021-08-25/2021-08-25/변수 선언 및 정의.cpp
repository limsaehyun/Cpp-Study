#include <iostream>

int main()
{
	int num = 10;    // C 스타일 선언 및 정의
	int num2(20);    // C++ 스타일 선언 및 정의
	int num3(num2);  // 이것도 가능

	std::cout << "num : " << num << std::endl;
	std::cout << "num2 : " << num2 << std::endl;
	std::cout << "num3 : " << num3 << std::endl;

	return 0;
}
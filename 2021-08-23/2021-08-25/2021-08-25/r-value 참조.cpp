
#include <iostream>
	int TestFunc(int nParam)
	{
		int nResult = nParam * 2;
		return nResult;
	}
	int main()
	{

		// r-value�� Ȱ��� ���� �Ҹ���
		int nInput = 0;
		std::cout << "Input number : ";
		std::cin >> nInput;

		// ��� �������� ������� �ӽ� ��ü�� ���� r-value ����
		int&& rdata = nInput + 5;
		std::cout << rdata << std::endl;

		// �Լ� ��ȯ���� ������� �ӽ� ��ü�� ���� r-value ����
		int&& result = TestFunc(10);

		// ���� ������ �� �ִ�.
		result += 10;
		std::cout << result << std::endl;

		return 0;
	}
}
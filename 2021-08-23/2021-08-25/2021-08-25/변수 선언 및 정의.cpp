#include <iostream>

int main()
{
	int num = 10;    // C ��Ÿ�� ���� �� ����
	int num2(20);    // C++ ��Ÿ�� ���� �� ����
	int num3(num2);  // �̰͵� ����

	std::cout << "num : " << num << std::endl;
	std::cout << "num2 : " << num2 << std::endl;
	std::cout << "num3 : " << num3 << std::endl;

	return 0;
}
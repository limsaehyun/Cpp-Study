#include <iostream>

int main()
{
	// cin�� C++�� ǥ������� ����ϴ� ��ü�Դϴ�.

	// ����
	int num1;
	int num2;
	int sum;
	// �Է¹ޱ�   
	std::cout << "ù ��° ���� �Է�: ";
	std::cin >> num1;
	std::cout << "�� ��° ���� �Է�: ";
	std::cin >> num2;
	// ���� ��� ����  
	sum = num1 + num2;
	// ���  
	std::cout << "�� ������ ��: " << sum << std::endl;
	return 0;
}
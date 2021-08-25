#include <iostream>
int main()
{
	int nList[5] = { 10, 20, 30, 40, 50 };

	// �������� C ��Ÿ�� �ݺ���
	for (int i = 0; i < 5; i++)
		std::cout << nList[i] << " ";

	std::cout << std::endl;

	// ������� C++11 ��Ÿ�� �ݺ���
	// �� ����� ���� n�� �����Ѵ�.
	for (auto n : nList)
		std::cout << n << " ";

	std::cout << std::endl;

	// n�� �� ��ҿ� ���� ������. (n ���� ����)
	for (auto& n : nList)
		std::cout << n << " ";

	std::cout << std::endl;
	return 0;
}
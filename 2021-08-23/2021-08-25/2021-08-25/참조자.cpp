#include <iostream>

int main() {
	//int score = 10;
	//int& rScore = score; // score ������ ���������� ����

	//int score = 92;
	//int& rScore = score;
	//int num = 80;
	//int& rScore = num; // �����߻�! �������踦 ������ �� ����!

	//int score = 92;
	//int& rScore = score;
	//int num = 80;
	//rScore = num;
	//std::cout << rScore << std::endl; // ���� ���� ������ ����

	//int* pData = &3; // �Ұ���
	//int& rData = 3;  // ����� ���� ������ �Ұ���
	//int& rData2;     // ���� ������ �����Ƿ� �Ұ���

	int nData = 10;

	int& ref = nData;

	ref = 20; // �������� ���� �����ϸ� ������ ����ȴ�.

	std::cout << nData << std::endl;

	// Pointer�� ��
	int* pnData = &nData;
	*pnData = 30;
	std::cout << nData << std::endl;

	return 0;
}
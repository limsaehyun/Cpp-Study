#include <iostream>

int main() {
	//int score = 10;
	//int& rScore = score; // score 변수에 대한참조자 선언

	//int score = 92;
	//int& rScore = score;
	//int num = 80;
	//int& rScore = num; // 에러발생! 참조관계를 변경할 수 없다!

	//int score = 92;
	//int& rScore = score;
	//int num = 80;
	//rScore = num;
	//std::cout << rScore << std::endl; // 참조 변수 대입은 가능

	//int* pData = &3; // 불가능
	//int& rData = 3;  // 상수에 대한 참조는 불가능
	//int& rData2;     // 참조 원본이 없으므로 불가능

	int nData = 10;

	int& ref = nData;

	ref = 20; // 참조자의 값을 변경하면 원본도 변경된다.

	std::cout << nData << std::endl;

	// Pointer와 비교
	int* pnData = &nData;
	*pnData = 30;
	std::cout << nData << std::endl;

	return 0;
}
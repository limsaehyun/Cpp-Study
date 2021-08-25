#include <iostream>
int main()
{
	int nList[5] = { 10, 20, 30, 40, 50 };

	// 전형적인 C 스타일 반복문
	for (int i = 0; i < 5; i++)
		std::cout << nList[i] << " ";

	std::cout << std::endl;

	// 범위기반 C++11 스타일 반복문
	// 각 요소의 값을 n에 복사한다.
	for (auto n : nList)
		std::cout << n << " ";

	std::cout << std::endl;

	// n은 각 요소에 대한 참조다. (n 수정 가능)
	for (auto& n : nList)
		std::cout << n << " ";

	std::cout << std::endl;
	return 0;
}
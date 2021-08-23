#include <iostream>

int main()
{
	// cin은 C++의 표준출력을 담당하는 객체입니다.

	// 선언
	int num1;
	int num2;
	int sum;
	// 입력받기   
	std::cout << "첫 번째 숫자 입력: ";
	std::cin >> num1;
	std::cout << "두 번째 숫자 입력: ";
	std::cin >> num2;
	// 계산과 결과 저장  
	sum = num1 + num2;
	// 출력  
	std::cout << "두 숫자의 합: " << sum << std::endl;
	return 0;
}
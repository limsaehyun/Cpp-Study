#include <iostream>

int main() {
	int age;
	char jobs[32];
	std::string name;

	std::cout << "나이를 입력해주세요" << std::endl;
	std::cin >> age;

	std::cout << "직업을 입력해주세요" << std::endl;
	std::cin >> jobs;

	std::cout << "이름을 입력해주세요" << std::endl;
	std::cin >> name;

	std::cout << "나이" << age << "직업" << jobs
		<< "이름" << name << std::endl;

}
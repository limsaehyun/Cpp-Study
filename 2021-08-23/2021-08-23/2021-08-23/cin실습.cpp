#include <iostream>

int main() {
	int age;
	char jobs[32];
	std::string name;

	std::cout << "���̸� �Է����ּ���" << std::endl;
	std::cin >> age;

	std::cout << "������ �Է����ּ���" << std::endl;
	std::cin >> jobs;

	std::cout << "�̸��� �Է����ּ���" << std::endl;
	std::cin >> name;

	std::cout << "����" << age << "����" << jobs
		<< "�̸�" << name << std::endl;

}
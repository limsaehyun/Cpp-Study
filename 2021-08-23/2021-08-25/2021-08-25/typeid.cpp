#include <iostream>
#include <typeinfo>
int main()
{
	int nums[] = { 1, 2, 3 };

	std::cout << typeid(1).name() << std::endl;       // int
	std::cout << typeid(10 + 3.2).name() << std::endl;// double
	std::cout << typeid(nums).name() << std::endl;    // int [3]
	std::cout << typeid(&nums).name() << std::endl;   // int (*)[3]
	std::cout << typeid(&nums[0]).name() << std::endl;// int*

	return 0;
}
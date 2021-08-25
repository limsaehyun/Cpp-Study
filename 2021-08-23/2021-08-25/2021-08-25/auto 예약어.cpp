#include <iostream>
#include <typeinfo>
int main()
{
	// auto 예약어 :: C++에서 초기값의 형식에 맞춰 선언하는 인스턴스의 형식이 자동으로 결정

	auto nData = 10;          // nData 형식은 int
	std::cout << "nData : " << nData << ", "
		<< typeid(nData).name() << std::endl;

	auto strName = "Tom";     // strName 형식은 const char*
	std::cout << "strName : " << strName << ", "
		<< typeid(strName).name() << std::endl;

	auto ch = 'A';             // ch 형식은 char
	std::cout << "ch : " << ch << ", "
		<< typeid(ch).name() << std::endl;

	return 0;
}
#include <iostream>
#include <typeinfo>
int main()
{
	// auto ����� :: C++���� �ʱⰪ�� ���Ŀ� ���� �����ϴ� �ν��Ͻ��� ������ �ڵ����� ����

	auto nData = 10;          // nData ������ int
	std::cout << "nData : " << nData << ", "
		<< typeid(nData).name() << std::endl;

	auto strName = "Tom";     // strName ������ const char*
	std::cout << "strName : " << strName << ", "
		<< typeid(strName).name() << std::endl;

	auto ch = 'A';             // ch ������ char
	std::cout << "ch : " << ch << ", "
		<< typeid(ch).name() << std::endl;

	return 0;
}
#include <iostream>

int main()
{
    bool b0 = 0 == 0;
    bool b1 = 0 < 1;
    bool b2 = 0 > 1;

    //std::cout << "bool ���" << std::endl;
    //std::cout << "b0 : " << b0 << std::endl;
    //std::cout << "b1 : " << b1 << std::endl;
    //std::cout << "b2 : " << b2 << std::endl;
    //std::cout << std::endl;

    //std::cout << "bool ����� true, false�� �ϵ��� ����" << std::endl;
    //std::cout.setf(std::ios_base::boolalpha);
    //std::cout << "b0 : " << b0 << std::endl;
    //std::cout << "b1 : " << b1 << std::endl;
    //std::cout << "b2 : " << b2 << std::endl;
    //std::cout << std::endl;

    //std::cout << "bool�� if" << std::endl;
    //if (b0)
    //    std::cout << "b0" << std::endl;
    //if (b1)
    //    std::cout << "b1" << std::endl;
    //if (b2)
    //    std::cout << "b2" << std::endl;
    //std::cout << std::endl;


    //std::cout << "bool ���� ������ �� ��ȯ" << std::endl;
    //int itrue = true;
    //int ifalse = false;

    //std::cout << itrue << std::endl;
    //std::cout << ifalse << std::endl;
    //std::cout << std::endl;

    std::cout << "�������� bool�� �� ��ȯ" << std::endl;
    bool btrue = 100;
    bool bfalse = 0;

    std::cout << btrue << std::endl;
    std::cout << bfalse << std::endl;
    return 0;
}
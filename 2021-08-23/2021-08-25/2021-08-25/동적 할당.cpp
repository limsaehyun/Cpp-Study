#include <iostream>
int main()
{
    // �ν��ͽ��� �������� �����ϴ� ���
    //int* pData = new int;

    // �ʱⰪ�� ����ϴ� ���
    //int* pNewData = new int(10);

    //*pData = 5;
    //std::cout << *pData << std::endl;
    //std::cout << *pNewData << std::endl;

    //delete pData;
    //delete pNewData

     // ��ü�� �迭 ���·� ���� �����Ѵ�.
    // int* arr = new int[5];

    //for (int i = 0; i < 5; i++)
    //    arr[i] = (i + 1) * 10;

    //for (int i = 0; i < 5; i++)
    //    std::cout << arr[i] << std::endl;

    // �迭 ���·� ������ ����� 
    // �ݵ�� �迭 ���¸� ���� �����Ѵ�!
    // delete[] arr;


    // �ǽ�
    int su;

    std::cout << "������ ������ �Է��ϼ��� > " << std::endl;
    std::cin >> su;

    int* arr = new int[su];

    int num;

    for (int i = 0; i < su; i++) {
        std::cout << "���� �Է� �ϼ��� > " << std::endl;
        std::cin >> num;
        arr[i] = num;
    }

    for (int i = 0; i < su; i++) {
        std::cout << arr[i] << std::endl;
    }


    return 0;
}
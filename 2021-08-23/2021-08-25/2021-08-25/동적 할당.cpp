#include <iostream>
int main()
{
    // 인스터스만 동적으로 생성하는 경우
    //int* pData = new int;

    // 초기값을 기술하는 경우
    //int* pNewData = new int(10);

    //*pData = 5;
    //std::cout << *pData << std::endl;
    //std::cout << *pNewData << std::endl;

    //delete pData;
    //delete pNewData

     // 객체를 배열 형태로 동적 생성한다.
    // int* arr = new int[5];

    //for (int i = 0; i < 5; i++)
    //    arr[i] = (i + 1) * 10;

    //for (int i = 0; i < 5; i++)
    //    std::cout << arr[i] << std::endl;

    // 배열 형태로 생성한 대상은 
    // 반드시 배열 형태를 통해 삭제한다!
    // delete[] arr;


    // 실습
    int su;

    std::cout << "데이터 개수를 입력하세요 > " << std::endl;
    std::cin >> su;

    int* arr = new int[su];

    int num;

    for (int i = 0; i < su; i++) {
        std::cout << "숫자 입력 하세요 > " << std::endl;
        std::cin >> num;
        arr[i] = num;
    }

    for (int i = 0; i < su; i++) {
        std::cout << arr[i] << std::endl;
    }


    return 0;
}
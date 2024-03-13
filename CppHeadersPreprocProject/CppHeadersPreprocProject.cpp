#include <iostream>
#include <cstdint>
#include "Library.h"

//#define MAX_NUM 1000
//#define begin {
//#define end }
//#define MULT(A, B) (A) * (B)

#define OS_LINUX
#define MAX_NUM 100

#ifdef OS_WIN
int16_t a;
#else
int8_t a;
#endif

#if MAX_NUM < 500
int a;
#else
int b;
#endif


int main()
{

    //Node node;
    //node.value = 100;

    /*srand(time(nullptr));

    int size{ 10 };
    int* array = ArrayCreate<int>(size);
    ArrayInit(array, size);
    ArrayPrint(array, size);*/
    

}





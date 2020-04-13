#include "Person.h"
#include <iostream>

int DoubleIt(int x)
{
    return x*2;
}



int main()
{
    int i = 3;

    int const ci = 3;
    i = 4;

    int& ri = i;
    ri = 5;

    int const & cri = i;

    int j = 10;
    int DoubleJ = DoubleIt(j);
    int DoubleTen = DoubleIt(10);

    Person Kate("Kate", "Gregory", 234);
    Kate.SetNumber(235);
    Person const cKate = Kate;
    //cKate.SetNumber(236);
    int KateNumber = cKate.GetNumber();

    int* pI = &i;
    std::cout << pI << std::endl;
    std::cout << &i << std::endl;

    int const * pcI = pI; // pointer to a const
    //*pcI = 4;
    pcI = &j;

    int * const cpI = pI; // const pointer
    *cpI = 4;
    //cpI = &j;

    const int * const crazy = pI; // const pointer to a const
    //*crazy = 4;
    //crazy = &j;

    return 0;
}
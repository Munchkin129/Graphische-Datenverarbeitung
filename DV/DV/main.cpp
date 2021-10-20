#include "CVector.h"
#include <iostream>

int main()
{
    CVector First  = { 1, 2, 3, 4 };
    CVector Second = { 2, 2, 2, 2 };
    CVector Third  = { 9, 8, 7, 6 };
    CVector Cheat  = { 0, 0, 0, 4 };
    CVector Result;
    CVector Normalized;
    Normalized = Cheat.GetNormalized();
    Normalized.Print();
    //Result = First.Cross(Second);
    //double Length = First.GetLength();
    //First.CrossAndSet(Second);
    //Result.Print();
    //First.Print();
    //std::cout << Length << std::endl;

    return 0;
}
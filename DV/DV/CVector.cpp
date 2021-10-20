#include "CVector.h"
#include <iostream>

CVector::CVector()
    : m_A { 0 }
{
}

CVector::CVector(float _Variable1, float _Variable2, float _Variable3, float _Variable4)
    : m_A { _Variable1 , _Variable2 , _Variable3 , _Variable4 }
{
}

CVector::~CVector()
{
}

float& CVector::operator[](int _Index)
{
    return m_A[_Index];
}
#include "CVector.h"
#include <iostream>
#include <math.h>

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

CVector CVector::operator+(CVector& _Other) const
{
    CVector temp;
    temp.m_A[0] = m_A[0] + _Other.m_A[0];
    temp.m_A[1] = m_A[1] + _Other.m_A[1];
    temp.m_A[2] = m_A[2] + _Other.m_A[2];
    temp.m_A[3] = m_A[3] + _Other.m_A[3];
    return temp;
}

CVector& CVector::operator+=(CVector& _Other)
{
    m_A[0] += _Other.m_A[0];
    m_A[1] += _Other.m_A[1];
    m_A[2] += _Other.m_A[2];
    m_A[3] += _Other.m_A[3];
    return *this;
}

CVector CVector::operator-(CVector& _Other) const
{
    CVector temp;
    temp.m_A[0] = m_A[0] + _Other.m_A[0];
    temp.m_A[1] = m_A[1] + _Other.m_A[1];
    temp.m_A[2] = m_A[2] + _Other.m_A[2];
    temp.m_A[3] = m_A[3] + _Other.m_A[3];
    return temp;
}

CVector& CVector::operator-=(CVector& _Other)
{
    m_A[0] += _Other.m_A[0];
    m_A[1] += _Other.m_A[1];
    m_A[2] += _Other.m_A[2];
    m_A[3] += _Other.m_A[3];
    return *this;
}

CVector CVector::operator*(float _Other) const
{
    CVector temp;
    temp.m_A[0] = m_A[0] * _Other;
    temp.m_A[1] = m_A[1] * _Other;
    temp.m_A[2] = m_A[2] * _Other;
    temp.m_A[3] = m_A[3] * _Other;
    return temp;
}

CVector& CVector::operator*=(float _Other)
{
    m_A[0] *= _Other;
    m_A[1] *= _Other;
    m_A[2] *= _Other;
    m_A[3] *= _Other;
    return *this;
}

float CVector::Dot(CVector& _Other) const
{
    float temp = 0.0f;
    temp = m_A[0] * _Other.m_A[0]
         + m_A[1] * _Other.m_A[1]
         + m_A[2] * _Other.m_A[2]
         + m_A[3] * _Other.m_A[3];
    return temp;
}

CVector CVector::Cross(CVector& _Other) const
{
    CVector tmp;
    tmp.m_A[0] = m_A[1] * _Other.m_A[2] - m_A[2] * _Other.m_A[1];
    tmp.m_A[1] = m_A[2] * _Other.m_A[3] - m_A[3] * _Other.m_A[2];
    tmp.m_A[2] = m_A[3] * _Other.m_A[0] - m_A[0] * _Other.m_A[3];
    tmp.m_A[3] = m_A[0] * _Other.m_A[1] - m_A[1] * _Other.m_A[0];
    return tmp;
}

CVector& CVector::CrossAndSet(CVector& _Other)
{
    CVector tmp;

    tmp.m_A[0] = m_A[1] * _Other.m_A[2] - m_A[2] * _Other.m_A[1];
    tmp.m_A[1] = m_A[2] * _Other.m_A[3] - m_A[3] * _Other.m_A[2];
    tmp.m_A[2] = m_A[3] * _Other.m_A[0] - m_A[0] * _Other.m_A[3];
    tmp.m_A[3] = m_A[0] * _Other.m_A[1] - m_A[1] * _Other.m_A[0];

    m_A[0] = tmp.m_A[0];
    m_A[1] = tmp.m_A[1];
    m_A[2] = tmp.m_A[2];
    m_A[3] = tmp.m_A[3];

    return *this;
}

double CVector::GetLength() const
{
    return sqrt(m_A[0]* m_A[0] + m_A[1] * m_A[1] + m_A[2] * m_A[2] + m_A[3] * m_A[3]);
}

CVector CVector::GetNormalized() const // TODO fix this!
{
    CVector tmp;
    double _Length = this->GetLength();
    tmp *= 1 / _Length;
    return tmp;
}

void CVector::Print()
{
    std::cout << m_A[0] << " " << m_A[1] << " " << m_A[2] << " " << m_A[3] << std::endl;
}

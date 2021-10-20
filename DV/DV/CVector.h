#pragma once
class CVector
{
public:
    CVector();
    CVector(float _Variable1, float _Variable2, float _Variable3, float _Variable4);
    ~CVector();

    float&   operator [] (int _Index); // Get
    CVector  operator +  (CVector& _Other) const; // Add | const bedeutet, Objekt die die Funktion aufruft 
    CVector& operator += (CVector& _Other); // AddAndSet

private:
    float m_A[4];
};


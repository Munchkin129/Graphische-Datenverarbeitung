#pragma once
class CVector
{
public:
    CVector();
    CVector(float _Variable1, float _Variable2, float _Variable3, float _Variable4);
    ~CVector();

    float&   operator [] (int _Index); // Get
    CVector  operator +  (CVector& _Other) const; // Add | const bedeutet, Objekt die die Funktion aufruft wird nicht verändert
    CVector& operator += (CVector& _Other); // AddAndSet | Wir haben eine Rückgabe damit wir schachteln können
    CVector  operator -  (CVector& _Other) const; // Sub | const bedeutet, Objekt die die Funktion aufruft wird nicht verändert
    CVector& operator -= (CVector& _Other); // SubAndSet | Wir haben eine Rückgabe damit wir schachteln können
    CVector  operator *  (float _Other) const; // Mul | const bedeutet, Objekt die die Funktion aufruft wird nicht verändert
    CVector& operator *= (float _Other); // MulAndSet | Wir haben eine Rückgabe damit wir schachteln können
    float    Dot(CVector& _Other) const;
    CVector  Cross(CVector& _Other) const;
    CVector& CrossAndSet(CVector& _Other);
    double   GetLength() const;
    CVector  GetNormalized() const;

    void Print();

private:
    float m_A[4];
};


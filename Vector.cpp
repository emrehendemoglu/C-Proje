/**
* @file proje2
* @description karmaşık sayılar uzayında tanımlı olan vektör
ve matris üzerinde bir takım lineer cebir işlemleri gerçekleştirme.
* @assignment proje2
* @date Kodu oluşturduğunuz 1.01.2024
* @author Emre Hendemoğlu - emre.hendemoglu@stu.fsm.edu.tr
*/
#include "Vector.h"
#include <iostream>
#include "Complex.h"

// Parametreli kurucu fonksiyon: Vector nesnesini, bir Complex vektörüyle başlatır.
Vector::Vector(const std::vector<Complex> &elems) : elements(elems) {}

// Vektör toplama işlemi için overloading
Vector Vector::operator+(const Vector &other) const
{
    std::vector<Complex> result; //  ifadesi, bir std::vector nesnesi oluşturur ve bu vektör kompleks sayıları içerir demektir.
    for (size_t i = 0; i < elements.size(); ++i)
    {
        result.push_back(elements[i] + other.elements[i]);
    }
    return Vector(result);
}

// Vektör çıkarma işlemi için overloading
Vector Vector::operator-(const Vector &other) const
{
    std::vector<Complex> result;
    for (size_t i = 0; i < elements.size(); ++i)
    {
        // İlgili indeksteki elemanları çıkar ve sonucu yeni vektöre ekle
        result.push_back(elements[i] - other.elements[i]);
    }
    return Vector(result);
}

// Vektör iç ürün (dot product) işlemi için overloading
Complex Vector::operator*(const Vector &other) const
{
    // İki vektörün iç çarpımını hesaplamak için bir karmaşık sayı kullanılır
    Complex result(0, 0);
    for (size_t i = 0; i < elements.size(); ++i)
    {
        // İlgili indeksteki elemanları çarp ve sonucu toplamıza ekle
        result = result + (elements[i] * other.elements[i]);
    }
    return result;
}

// Atama operatörü: Vector nesnesine başka bir Vector nesnesini atar
Vector &Vector::operator=(const Vector &other)
{
    if (this != &other)
    {
        // Diğer vektörün elemanlarını bu vektöre atar
        elements = other.elements;
    }
    return *this;
}

// Toplama atama operatörü
Vector &Vector::operator+=(const Vector &other)
{
    for (size_t i = 0; i < elements.size(); ++i)
    {
        elements[i] += other.elements[i];
    }
    return *this;
}

// Çıkarma atama operatörü
Vector &Vector::operator-=(const Vector &other)
{
    for (size_t i = 0; i < elements.size(); ++i)
    {
        elements[i] -= other.elements[i];
    }
    return *this;
}

// Çarpma atama operatörü
Vector &Vector::operator*=(const Vector &other)
{
    for (size_t i = 0; i < elements.size(); ++i)
    {
        elements[i] *= other.elements[i];
    }
    return *this;
}

// Vektörü ekrana yazdıran fonksiyon
void Vector::print() const
{
    // Vektördeki her elemanı sırasıyla ekrana yazdırır
    for (const auto &elem : elements)
    {
        elem.print();
    }
    std::cout << std::endl;
}

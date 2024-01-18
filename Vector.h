/**
* @file proje2
* @description karmaşık sayılar uzayında tanımlı olan vektör
ve matris üzerinde bir takım lineer cebir işlemleri gerçekleştirme.
* @assignment proje2
* @date Kodu oluşturduğunuz 1.01.2024
* @author Emre Hendemoğlu - emre.hendemoglu@stu.fsm.edu.tr
*/
#ifndef VECTOR_H
#define VECTOR_H

#include "Complex.h"

#include <vector>
#include <iostream>

class Vector
{
private:
    std::vector<Complex> elements; // Vektör elemanlarını saklamak için Complex vektörü

public:
    // Parametreli kurucu fonksiyon: Vector nesnesini, bir Complex vektörüyle başlatır.
    Vector(const std::vector<Complex> &elems);

    // Vektör toplama işlemi için overloading
    Vector operator+(const Vector &other) const;

    // Vektör çıkarma işlemi için overloading
    Vector operator-(const Vector &other) const;

    // Vektör iç çarpım (dot product) işlemi için overloading
    Complex operator*(const Vector &other) const;

    // Atama operatörü: Vector nesnesine başka bir Vector nesnesini atar
    Vector &operator=(const Vector &other);

    // Toplama atama operatörü
    Vector &operator+=(const Vector &other);

    // Çıkarma atama operatörü
    Vector &operator-=(const Vector &other);

    // Çarpma atama operatörü
    Vector &operator*=(const Vector &other);

     // Vektörü ekrana yazdıran fonksiyon
    void print() const;
};
#endif
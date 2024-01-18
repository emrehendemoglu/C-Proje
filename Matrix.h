/**
* @file proje2
* @description karmaşık sayılar uzayında tanımlı olan vektör
ve matris üzerinde bir takım lineer cebir işlemleri gerçekleştirme.
* @assignment proje2
* @date Kodu oluşturduğunuz 1.01.2024
* @author Emre Hendemoğlu - emre.hendemoglu@stu.fsm.edu.tr
*/


#ifndef MATRIX_H
#define MATRIX_H

#include "Complex.h"
#include <vector>
#include <iostream>

class Matrix
{
private:
    size_t row;
    size_t col;
    std::vector<std::vector<Complex>> elements;

public:
    Matrix(size_t r, size_t c, const std::vector<std::vector<Complex>> &elems);

    Matrix operator+(const Matrix &other) const; // Toplama işlemi için overloading
    Matrix operator-(const Matrix &other) const; // Çıkarma işlemi için overloading
    Matrix operator*(const Matrix &other) const; // Çarpma işlemi için overloading
    Matrix &operator=(const Matrix &other);      // Atama operatörü
   

    void transpose();            // Transpoz işlemi
    Complex determinant() const; // Determinant hesaplama
    void print() const;          // Matrisi ekrana yazdırma

    Matrix &operator+=(const Matrix &other);
    Matrix &operator-=(const Matrix &other);
    Matrix &operator*=(const Matrix &other);

};

#endif // MATRIX_H

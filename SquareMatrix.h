/**
* @file proje2
* @description karmaşık sayılar uzayında tanımlı olan vektör
ve matris üzerinde bir takım lineer cebir işlemleri gerçekleştirme.
* @assignment proje2
* @date Kodu oluşturduğunuz 1.01.2024
* @author Emre Hendemoğlu - emre.hendemoglu@stu.fsm.edu.tr
*/
#ifndef SQUAREMATRIX_H
#define SQUAREMATRIX_H

#include "Matrix.h"
#include <iostream>

class SquareMatrix : public Matrix // Kare matris sınıfı, temel olarak genişletilmiş Matrix sınıfıdır.
{
public:
    // Kare matris için kurucu fonksiyon
    SquareMatrix(size_t size, const std::vector<std::vector<Complex>> &elems);
};

#endif

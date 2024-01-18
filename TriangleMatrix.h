/**
* @file proje2
* @description karmaşık sayılar uzayında tanımlı olan vektör
ve matris üzerinde bir takım lineer cebir işlemleri gerçekleştirme.
* @assignment proje2
* @date Kodu oluşturduğunuz 1.01.2024
* @author Emre Hendemoğlu - emre.hendemoglu@stu.fsm.edu.tr
*/
#ifndef TRIANGLEMATRIX_H
#define TRIANGLEMATRIX_H

#include "Matrix.h"
#include <iostream>

class TriangleMatrix : public Matrix // TriangleMatrix sınıfı, Matrix sınıfından türetilmiştir ve üçgen matrisleri temsil eder.
{
public:
    // Parametreli kurucu fonksiyon, belirtilen boyut ve elemanlarla bir üçgen matris oluşturur.
    TriangleMatrix(size_t size, const std::vector<std::vector<Complex>> &elems);
};

#endif

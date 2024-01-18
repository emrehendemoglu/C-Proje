/**
* @file proje1
* @description karmaşık sayılar uzayında tanımlı olan vektör
ve matris üzerinde bir takım lineer cebir işlemleri gerçekleştirme.
* @assignment proje2
* @date Kodu oluşturduğunuz 1.01.2024
* @author Emre Hendemoğlu - emre.hendemoglu@stu.fsm.edu.tr
*/
#include "SquareMatrix.h"
#include <iostream>

SquareMatrix::SquareMatrix(size_t size, const std::vector<std::vector<Complex>> &elems)// Kare matris sınıfının kurucu fonksiyonu
    : Matrix(size, size, elems) {}

/**
* @file proje2
* @description karmaşık sayılar uzayında tanımlı olan vektör
ve matris üzerinde bir takım lineer cebir işlemleri gerçekleştirme.
* @assignment proje2
* @date Kodu oluşturduğunuz 1.01.2024
* @author Emre Hendemoğlu - emre.hendemoglu@stu.fsm.edu.tr
*/
#include "TriangleMatrix.h"
#include <iostream>

// Üçgen matris sınıfının kurucu fonksiyonu
TriangleMatrix::TriangleMatrix(size_t size, const std::vector<std::vector<Complex>>& elems)
    : Matrix(size, size, elems) {}

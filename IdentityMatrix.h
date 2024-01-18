/**
* @file proje2
* @description karmaşık sayılar uzayında tanımlı olan vektör
ve matris üzerinde bir takım lineer cebir işlemleri gerçekleştirme.
* @assignment proje2
* @date Kodu oluşturduğunuz 1.01.2024
* @author Emre Hendemoğlu - emre.hendemoglu@stu.fsm.edu.tr
*/
#ifndef IDENTITYMATRIX_H
#define IDENTITYMATRIX_H

#include "SquareMatrix.h"
#include <iostream>

// IdentityMatrix sınıfı, SquareMatrix sınıfından türetilmiştir.
class IdentityMatrix : public SquareMatrix
{
public:
    IdentityMatrix(size_t size);// Parametre olarak alınan boyuta sahip bir birim matris oluşturan kurucu fonksiyon
};

#endif

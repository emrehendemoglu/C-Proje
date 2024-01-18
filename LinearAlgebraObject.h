/**
* @file proje2
* @description karmaşık sayılar uzayında tanımlı olan vektör
ve matris üzerinde bir takım lineer cebir işlemleri gerçekleştirme.
* @assignment proje2
* @date Kodu oluşturduğunuz 1.01.2024
* @author Emre Hendemoğlu - emre.hendemoglu@stu.fsm.edu.tr
*/
#ifndef LINEARALGEBRAOBJECT_H
#define LINEARALGEBRAOBJECT_H

#include "Vector.h"
#include "Matrix.h"
#include "SquareMatrix.h"
#include <iostream>

class LinearAlgebraObject// LinearAlgebraObject, vektör ve matris sınıflarının temel sınıfıdır
{
public:
    virtual void print() const = 0;  // Saf sanal fonksiyon: Nesnenin içeriğini ekrana yazdırır
    virtual ~LinearAlgebraObject() = default; // Sanal yıkıcı fonksiyon
}; 

#endif

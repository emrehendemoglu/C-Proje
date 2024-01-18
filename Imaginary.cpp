/**
* @file proje2
* @description karmaşık sayılar uzayında tanımlı olan vektör
ve matris üzerinde bir takım lineer cebir işlemleri gerçekleştirme.
* @assignment proje2
* @date Kodu oluşturduğunuz 1.01.2024
* @author Emre Hendemoğlu - emre.hendemoglu@stu.fsm.edu.tr
*/
#include "Imaginary.h"

Imaginary::Imaginary(double _im) : im(_im) {} // Imaginary sınıfının parametreli kurucu fonksiyonu

double Imaginary::getImaginary() const// Sanal kısmı döndüren get fonksiyonu
{
    return im;
}

void Imaginary::setImaginary(double _im)// Sanal kısmı ayarlayan set fonksiyonu
{
    im = _im;
}

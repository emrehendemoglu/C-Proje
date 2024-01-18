/**
* @file proje2
* @description karmaşık sayılar uzayında tanımlı olan vektör
ve matris üzerinde bir takım lineer cebir işlemleri gerçekleştirme.
* @assignment proje2
* @date Kodu oluşturduğunuz 1.01.2024
* @author Emre Hendemoğlu - emre.hendemoglu@stu.fsm.edu.tr
*/
#ifndef IMAGINARY_H
#define IMAGINARY_H

class Imaginary// Imaginary sınıfı, karmaşık sayıların sanal kısmını temsil eder
{
private:
    double im;// Sanal kısım 


public:
// Parametreli kurucu fonksiyon, varsayılan değeri 0.0'dır
    Imaginary(double _im = 0);

    double getImaginary() const; // Sanal kısmı döndüren get fonksiyonu
    void setImaginary(double _im);// Sanal kısmı ayarlayan set fonksiyonu
};

#endif

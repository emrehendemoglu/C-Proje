/**
* @file proje2
* @description karmaşık sayılar uzayında tanımlı olan vektör
ve matris üzerinde bir takım lineer cebir işlemleri gerçekleştirme.
* @assignment proje2
* @date Kodu oluşturduğunuz 1.01.2024
* @author Emre Hendemoğlu - emre.hendemoglu@stu.fsm.edu.tr
*/

#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>
#include <stdexcept>

class Complex {
private:
    double real; // Gerçel kısım
    double Imaginary; // Sanal kısım 

public:
    Complex(); // Default constructor
    Complex(double re, double imag); // Parametreli kurucu fonksiyon

    
    double getImaginary() const; // Sanal kısmı döndüren get fonksiyonu
    double getReal() const; // Gerçel kısmı döndüren get fonksiyonu
    
    void setImaginary(double imag); // Sanal kısmı ayarlayan set fonksiyonu
    void setReal(double re); // Gerçel kısmı ayarlayan set fonksiyonu

    
    Complex operator*(const Complex &other) const;
    Complex operator+(const Complex &other) const;
    Complex operator-(const Complex &other) const;
    Complex operator/(const Complex &other) const;
   
   

    bool operator==(const Complex &other) const;  // Eşitlik karşılaştırma operatörü

    void print() const; // Karmaşık sayıyı "a + bi" biçiminde yazdıran fonksiyon


    // Aşağıdaki operatörler Complex sınıfına eklenmiştir
    
    Complex& operator-=(const Complex &other);// Çıkarma atama operatörü7
    Complex& operator+=(const Complex &other); // Toplama atama operatörü
    Complex& operator*=(const Complex &other);// Çarpma atama operatörü
    Complex& operator/=(const Complex &other);//Bölme atama operatörü
};
 
#endif // COMPLEX_H

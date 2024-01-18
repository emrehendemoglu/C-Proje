/**
* @file proje2
* @description karmaşık sayılar uzayında tanımlı olan vektör
ve matris üzerinde bir takım lineer cebir işlemleri gerçekleştirme.
* @assignment proje2
* @date Kodu oluşturduğunuz 1.01.2024
* @author Emre Hendemoğlu - emre.hendemoglu@stu.fsm.edu.tr
*/
#include "Complex.h"
#include <iostream>
#include <stdexcept>

// Default constructor: Gerçel ve sanal kısımları sıfıra ayarlar.
Complex::Complex() : Imaginary(0.0), real(0.0) {}

// Parametreli kurucu fonksiyon: Gerçel ve sanal kısımları verilen değerlere ayarlar.
Complex::Complex(double re, double imag) : Imaginary(imag), real(re) {}


//Sanal kısmı döndüren get fonksiyonu
double Complex::getImaginary() const
{
    return Imaginary;
}
// Gerçel kısmı döndüren get fonksiyonu
double Complex::getReal() const
{
    return real;
}


// Sanal kısmı ayarlayan set fonksiyonu
void Complex::setImaginary(double imag)
{
    Imaginary = imag;
}
// Gerçel kısmı ayarlayan set fonksiyonu
void Complex::setReal(double re)
{
    real = re;
}

// Toplama işlemi için overloading
Complex Complex::operator+(const Complex &other) const
{
    return Complex(getReal() + other.getReal(), getImaginary() + other.getImaginary());
}

// Çarpma işlemi için overloading
Complex Complex::operator*(const Complex &other) const
{
    double realResult = getReal() * other.getReal() - getImaginary() * other.getImaginary();
    double imagResult = getReal() * other.getImaginary() + getImaginary() * other.getReal();
    return Complex(realResult, imagResult);
}
// Çıkarma işlemi için overloading
Complex Complex::operator-(const Complex &other) const
{
    return Complex(getReal() - other.getReal(), getImaginary() - other.getImaginary());
}

// Bölme işlemi için overloading
Complex Complex::operator/(const Complex &other) const
{
    double divisor = other.getReal() * other.getReal() + other.getImaginary() * other.getImaginary();
    if (divisor == 0.0)
    {
        throw std::invalid_argument("Sifira bölme tanimsizdir.");
    }

    double realResult = (getReal() * other.getReal() + getImaginary() * other.getImaginary()) / divisor;
    double imagResult = (getImaginary() * other.getReal() - getReal() * other.getImaginary()) / divisor;
    return Complex(realResult, imagResult);
}

// Eşitlik karşılaştırma operatörü
bool Complex::operator==(const Complex &other) const
{
    return (getReal() == other.getReal()) && (getImaginary() == other.getImaginary());
}

// Karmaşık sayıyı "a + bi" biçiminde yazdıran fonksiyon
void Complex::print() const
{
    std::cout << getReal() << " + " << getImaginary() << "i" << std::endl;
}


// Çıkarma işlemi için atama operatörü overloading
Complex& Complex::operator-=(const Complex &other) {
    real -= other.real;
    Imaginary -= other.Imaginary;
    return *this;
}
// Toplama işlemi için atama operatörü overloading
Complex& Complex::operator+=(const Complex &other) {
    real += other.real;
    Imaginary += other.Imaginary;
    return *this;
}

// Çarpma işlemi için atama operatörü overloading
Complex& Complex::operator*=(const Complex &other) {
    double tempReal = real * other.real - Imaginary * other.Imaginary;
    double tempImag = real * other.Imaginary + Imaginary * other.real;
    real = tempReal;
    Imaginary = tempImag;
    return *this;
}
// Bölme işlemi için atama operatörü overloading
Complex& Complex::operator/=(const Complex &other) {
    double divisor = other.real * other.real + other.Imaginary * other.Imaginary;

    double tempReal = (real * other.real + Imaginary * other.Imaginary) / divisor;
    double tempImag = (Imaginary * other.real - real * other.Imaginary) / divisor;

    real = tempReal;
    Imaginary = tempImag;

    return *this;
}


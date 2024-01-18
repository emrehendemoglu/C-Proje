/**
* @file proje2
* @description karmaşık sayılar uzayında tanımlı olan vektör
ve matris üzerinde bir takım lineer cebir işlemleri gerçekleştirme.
* @assignment proje2
* @date Kodu oluşturduğunuz 1.01.2024
* @author Emre Hendemoğlu - emre.hendemoglu@stu.fsm.edu.tr
*/
#include <iostream>
#include "Vector.h"
#include "Complex.h"
#include "Matrix.h"
#include "SquareMatrix.h"
#include "IdentityMatrix.h"
#include "TriangleMatrix.h"

// Ana fonksiyon
int main()
{

    // Karmaşık sayı işlemleri
    Complex c1(6, 1);
    Complex c2(5, 8);
    Complex c3 = c1 + c2; // Toplama
    Complex c4 = c1 - c2; // Çıkarma
    Complex c5 = c1 * c2; // Çarpma
    Complex c6 = c1 / c2; // Bölme

    std::cout << "---------------- Complex Operations ----------------" << std::endl;
    std::cout<<"c1 ve c2 complexlerim : "<<std::endl;
    c1.print(); 
    c2.print();
    std::cout<<std::endl;

    std::cout<<"c1 ve c2lerimle +,-,*,/ overloading testlerim : "<<std::endl;
    c3.print();
    c4.print();
    c5.print();
    c6.print();
    std::cout<<std::endl;
    std::cout << "Complex Operations" << std::endl;

    std::cout<<"+= operatoru test : "<<std::endl;
     Complex c7;
     c7+=c2 ; 
     c7.print();
     std::cout<<std::endl;

     std::cout<<"-= operatoru test : "<<std::endl;
    Complex c8;
    c8-=c2 ;
    c8.print();
    std::cout<<std::endl;

    std::cout<<"*= operatoru test : "<<std::endl;
    Complex c9;
    c9*=c2;
    c9.print();
    std::cout<<std::endl;

    std::cout<<"/= operatoru test :"<<std::endl;
    Complex c10;
    c10/=c2;
    c10.print();
    std::cout<<std::endl;

    // Vektör işlemleri
    std::vector<Complex> v1_elems = {Complex(3, 2), Complex(6, 1)};
    std::vector<Complex> v2_elems = {Complex(4, 5), Complex(5, 8)};
    Vector v1(v1_elems);
    Vector v2(v2_elems);
    Vector v3 = v1 + v2;  // Vektör Toplama
    Vector v4 = v1 - v2;  // Vektör Çıkarma
    Complex v5 = v1 * v2; // Vektör İç Çarpım

    std::cout << "---------------- Vector Operations ----------------" << std::endl;
    v3.print();
    v4.print();
    v5.print();
    std::cout << std::endl;

    // Matris işlemleri
    std::vector<std::vector<Complex>> m1_elems = {{Complex(5, 5), Complex(6, 14)},
                                                  {Complex(1, 16), Complex(8, 18)}};
    std::vector<std::vector<Complex>> m2_elems = {{Complex(7, 11), Complex(11, 2)},
                                                  {Complex(3, 1), Complex(5, 16)}};
    Matrix m1(2, 2, m1_elems);
    Matrix m2(2, 2, m2_elems);
    Matrix m3 = m1 + m2; // Matris Toplama
    Matrix m4 = m1 - m2; // Matris Çıkarma
    Matrix m5 = m1 * m2; // Matris Çarpma

    std::cout << "---------------- Matrix Operations ----------------" << std::endl;
    m3.print();
    m4.print();
    m5.print();
    std::cout << std::endl;

    // Kare Matris işlemleri
    SquareMatrix squareMatrix(3, {{Complex(3, 0), Complex(5, 0), Complex(7, 0)},
                                  {Complex(9, 0), Complex(1, 0), Complex(3, 0)},
                                  {Complex(5, 0), Complex(7, 0), Complex(9, 0)}});

    std::cout << "---------------- Square Matrix ----------------" << std::endl;
    squareMatrix.print();
    std::cout << std::endl;

    // Birim Matris işlemleri
    IdentityMatrix identityMatrix(4);

    std::cout << "---------------- Identity Matrix ----------------" << std::endl;
    identityMatrix.print();
    std::cout << std::endl;

    // Üçgen Matris işlemleri
    TriangleMatrix triangleMatrix(3, {{Complex(1, 0), Complex(3, 0), Complex(5, 0)},
                                      {Complex(0, 0), Complex(7, 0), Complex(9, 0)},
                                      {Complex(0, 0), Complex(0, 0), Complex(1, 0)}});

    std::cout << "---------------- Triangle Matrix ----------------" << std::endl;
    triangleMatrix.print();

    return 0;
}

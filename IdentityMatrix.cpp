/**
* @file proje2
* @description karmaşık sayılar uzayında tanımlı olan vektör
ve matris üzerinde bir takım lineer cebir işlemleri gerçekleştirme.
* @assignment proje2
* @date Kodu oluşturduğunuz 1.01.2024
* @author Emre Hendemoğlu - emre.hendemoglu@stu.fsm.edu.tr
*/
#include "IdentityMatrix.h"

// Global fonksiyon olarak tanımlanan, birim matrisi oluşturan fonksiyon
std::vector<std::vector<Complex>> generateIdentityMatrix(size_t size)
{
    // Boyutu 'size' olan birim matrisi oluştur
    std::vector<std::vector<Complex>> identityMatrix(size, std::vector<Complex>(size, Complex(0, 0)));

    // Ana köşedeki elemanları 1'e ayarla
    for (size_t i = 0; i < size; ++i)
    {
        identityMatrix[i][i] = Complex(1, 0);
    }

    return identityMatrix;
}
// IdentityMatrix sınıfının kurucu fonksiyonu
IdentityMatrix::IdentityMatrix(size_t size) : SquareMatrix(size, generateIdentityMatrix(size)) {}

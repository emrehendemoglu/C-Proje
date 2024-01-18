/**
* @file proje2
* @description karmaşık sayılar uzayında tanımlı olan vektör
ve matris üzerinde bir takım lineer cebir işlemleri gerçekleştirme.
* @assignment proje2
* @date Kodu oluşturduğunuz 1.01.2024
* @author Emre Hendemoğlu - emre.hendemoglu@stu.fsm.edu.tr
*/
#include "Matrix.h"
#include <iostream>

// Matrix sınıfının kurucu fonksiyonu
Matrix::Matrix(size_t r, size_t c, const std::vector<std::vector<Complex>> &elems)
    : row(r), col(c), elements(elems) {}

// İki matrisin toplamını hesaplayan fonksiyon
Matrix Matrix::operator+(const Matrix &other) const
{
    std::vector<std::vector<Complex>> result;
    for (size_t i = 0; i < row; ++i)
    {
        std::vector<Complex> rowResult;
        for (size_t j = 0; j < col; ++j)
        {
            rowResult.push_back(elements[i][j] + other.elements[i][j]);
        }
        result.push_back(rowResult);
    }
    return Matrix(row, col, result);
}

Matrix& Matrix::operator+=(const Matrix &other) {
    if (row == other.row && col == other.col) {
        for (size_t i = 0; i < row; ++i) {
            for (size_t j = 0; j < col; ++j) {
                elements[i][j] += other.elements[i][j];
            }
        }
    } else {
        std::cerr << "Matris boyutlari eşleşmiyor!" << std::endl;
    }
    return *this;
}

Matrix& Matrix::operator*=(const Matrix &other) {
    if (col == other.row) {
        std::vector<std::vector<Complex>> result(row, std::vector<Complex>(other.col, Complex(0, 0)));
        for (size_t i = 0; i < row; ++i) {
            for (size_t j = 0; j < other.col; ++j) {
                for (size_t k = 0; k < col; ++k) {
                    result[i][j] = result[i][j] + (elements[i][k] * other.elements[k][j]);
                }
            }
        }
        col = other.col;
        elements = result;
    } else {
        std::cerr << "Matris boyutlari çarpma için uygun değil!" << std::endl;
    }
    return *this;
}



// İki matrisin farkını hesaplayan fonksiyon
Matrix Matrix::operator-(const Matrix &other) const
{
    std::vector<std::vector<Complex>> result;
    for (size_t i = 0; i < row; ++i)
    {
        std::vector<Complex> rowResult;
        for (size_t j = 0; j < col; ++j)
        {
            rowResult.push_back(elements[i][j] - other.elements[i][j]);
        }
        result.push_back(rowResult);
    }
    return Matrix(row, col, result);
}

// İki matrisin çarpımını hesaplayan fonksiyon
Matrix Matrix::operator*(const Matrix &other) const
{
    std::vector<std::vector<Complex>> result(row, std::vector<Complex>(other.col, Complex(0, 0)));
    for (size_t i = 0; i < row; ++i)
    {
        for (size_t j = 0; j < other.col; ++j)
        {
            for (size_t k = 0; k < col; ++k)
            {
                result[i][j] = result[i][j] + (elements[i][k] * other.elements[k][j]);
            }
        }
    }
    return Matrix(row, other.col, result);
}

// Matris atama operatörü
Matrix &Matrix::operator=(const Matrix &other)
{
    if (this != &other)
    {
        row = other.row;
        col = other.col;
        elements = other.elements;
    }
    return *this;
}


// Matrisin transpozunu alan fonksiyon
void Matrix::transpose()
{
    std::vector<std::vector<Complex>> result(col, std::vector<Complex>(row));
    for (size_t i = 0; i < row; ++i)
    {
        for (size_t j = 0; j < col; ++j)
        {
            result[j][i] = elements[i][j];
        }
    }
    elements = result;
    std::swap(row, col);
}

// Matrisin determinantını hesaplayan fonksiyon
Complex Matrix::determinant() const
{
    // Kare matrisler için determinant hesaplama implementasyonu
    // (Not: Bu implementasyon, matrisin 2x2 olduğunu varsayar)
    if (row == 2 && col == 2)
    {
        return elements[0][0] * elements[1][1] - elements[0][1] * elements[1][0];
    }
    else
    {
        // Daha büyük matrisler için bu kısmı genişletebilirsiniz
        std::cerr << "Daha büyük matrisler için determinant hesaplama uygulanmamiştir." << std::endl;
        return Complex(0, 0);
    }
}



void Matrix::print() const
{
     for (const auto &row : elements)
    {
        for (const auto &elem : row)
        {
            elem.print();
            std::cout << " ";
        }
        std::cout << std::endl;
    }
}
    

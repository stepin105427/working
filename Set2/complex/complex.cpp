#include<iostream>
#include "Complex.h"
using namespace std;
Complex::Complex():m_real{0},m_imag{0} {}
Complex::Complex(int a,int b):m_real{a},m_imag{b} {}
Complex::Complex(int c):m_real{c} {}
Complex Complex::operator+(const Complex &ref) {

    int t1 = m_imag + ref.m_imag;
    int t2 = m_real+ref.m_real;
    return Complex(t1, t2);
}
Complex Complex::operator-(const Complex &ref) {
    int t1 = m_imag - ref.m_imag;
    int t2 = m_real - ref.m_real;
    return Complex(t1, t2);
}
Complex Complex::operator*(const Complex &ref) {
    int t1 = m_imag * ref.m_imag;
    int t2 = m_real * ref.m_real;
    return Complex(t1, t2);
}
Complex& Complex:: operator++() {
    ++m_imag; // TODO: mm > 60
    return *this;}
Complex Complex:: operator++(int dummy) {
    Complex orig(*this);
    ++m_real; // TODO: mm > 60
    return orig;
  }
bool Complex::operator==(const Complex &ref) {
    return m_real == ref.m_real && m_imag == ref.m_imag;
}
void Complex::display() {
    cout<<m_real<<":"<<m_imag<<"\n";
}
int Complex::real()
{
    return m_real;
}
int Complex::imag()
{
    return m_imag;
}







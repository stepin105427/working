#include<iostream>
#include "Fraction.h"

Fraction::Fraction():m_numerator(0),m_denominator(0) {}
Fraction::Fraction(int a,int b):m_numerator(a),m_denominator(b) {}
Fraction::Fraction(int d):m_numerator(d) {}
Fraction Fraction::operator+(const Fraction &ref) {

    int f2 = m_denominator + ref.m_denominator;
    int f1 = m_numerator+ref.m_numerator;
    return Fraction(f1, f2);
}
Fraction Fraction::operator-(const Fraction &ref) {
    int f2 = m_denominator - ref.m_denominator;
    int f1 = m_numerator - ref.m_numerator;
    return Fraction(f1, f2);
}
Fraction Fraction::operator*(const Fraction &ref) {
    int f2 = m_denominator * ref.m_denominator;
    int f1 = m_numerator * ref.m_numerator;
    return Fraction(f1, f2);
}
Fraction& Fraction:: operator++() {
    ++m_denominator; // TODO: mm > 60
    return *this;}
Fraction Fraction:: operator++(int dummy) {
    Fraction orig(*this);
    ++m_numerator; // TODO: mm > 60
    return orig;
  }
bool Fraction::operator==(const Fraction &ref) {
    return m_numerator == ref.m_numerator && m_denominator == ref.m_denominator;
}
 bool Fraction::operator< (const Fraction &ref){}
 bool Fraction::operator> (const Fraction &ref){}

void Fraction::display() {
    std::cout<<m_numerator<<":"<<m_denominator<<"\n";
}
int Fraction::getnume()
{
    return m_numerator;
}
int Fraction::getdeno()
{
    return m_denominator;
}

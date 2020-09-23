#include<iostream>
#include "currency.h"
using namespace std;
Currency::Currency():m_rupees{0},m_paise{0} {}
Currency::Currency(int a,int b):m_rupees{a},m_paise{b} {}
Currency::Currency(int c):m_rupees{c} {}
Currency Currency::operator+(const Currency &ref)
{
    int t1 = m_rupees + ref.m_paise;
    int t2 = m_rupees+ref.m_paise;
    return Currency(t1,t2);
}
Currency Currency::operator-(const Currency &ref)
{
    int t1 = m_rupees-ref.m_paise;
    int t2 = m_rupees-ref.m_paise;
    return Currency(t1,t2);
}
Currency Currency::operator*(const Currency &ref)
{
    int t1 = m_rupees*ref.m_paise;
    int t2 = m_rupees*ref.m_paise;
    return Currency(t1,t2);
}
Currency& Currency:: operator++()
{
    ++m_paise;
    return *this;
}
Currency Currency:: operator++(int dummy)
{
    Currency orig(*this);
    ++m_rupees;
    return orig;
}
bool Currency::operator==(const Currency &ref)
{
    return m_rupees == ref.m_rupees && m_paise == ref.m_paise;
}
bool Currency::operator< (const Currency &ref)
{
    return true;
}
bool Currency::operator> (const Currency &ref)
{
    return true;
}
void Currency::display()
{
    cout<<m_rupees<<"."<<m_paise<<"\n";
}
int Currency::rupees()
{
    return m_rupees;
}
int Currency::paise()
{
    return m_paise;
}










#include<iostream>
#include"Color.h"
using namespace std;
Color::Color():m_r{0},m_g{0},m_b{0} {}
Color::Color(int r, int g, int b):m_r{r},m_g{g},m_b{b} {}
Color::Color(int r):m_r{r},m_g{0},m_b{0} {}
Color::Color(color_t){}
int Color::invert()
{
    m_r-=255;
    m_g-=255;
    m_b-=255;
    return m_r;
}
void Color::display()
{
    cout<<m_r<<endl;
    cout<<m_g<<endl;
    cout<<m_b<<endl;
}


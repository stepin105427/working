#include<iostream>
#include "Box.h"
using namespace std;
Box::Box():m_length{0},m_breadth{0},m_height{0} {}
Box::Box(int l, int b, int h):m_length{l},m_breadth{b},m_height{h} {}
Box::Box(int l):m_length{l},m_breadth{0},m_height{0} {}
Box::Box(const Box &a):m_length{a.m_length},m_breadth{a.m_breadth},m_height{a.m_height} {}
int Box::length(int l)
{
    return m_length;
}
void Box::height(int h)
{
    cout<<m_height<<endl;
}
void Box::breadth(int b)
{
    cout<<m_breadth<<endl;
}
void Box::display()
{
    cout<<m_length<<endl;
    cout<<m_height<<endl;
    cout<<m_breadth<<endl;
}
int Box::volume()
{
    int vol=m_length*m_breadth*m_height;
    return vol;
}

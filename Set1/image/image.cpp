#include<iostream>
#include"Image.h"
using namespace std;
Image::Image():m_x{0},m_y{0},m_width{0},m_height{0} {}
Image::Image(int x, int y,int w, int h):m_x{x},m_y{y},m_width{w},m_height{h} {}
Image::Image(const Image &a):m_x{a.m_x},m_y{a.m_y},m_width{a.m_width},m_height{a.m_height} {}
int Image::move1(int ax,int ay)
{
    m_x=ax;
    m_y=ay;
    return (m_x,m_y);
}
void Image::scale(int bx,int by)
{
    m_width*=bx;
    m_height*=by;
}
void Image::resize1(int cx,int cy)
{
    m_x+=cx;
    m_y+=cy;
}
void Image::display()
{
    cout<<m_x<<endl;
    cout<<m_y<<endl;
    cout<<m_width<<endl;
    cout<<m_height<<endl;

}

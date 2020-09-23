#include<iostream>
#include"Point.h"
using namespace std;
Point::Point():m_x{0},m_y{0}{}
Point::Point(int x, int y):m_x{x},m_y{y}{}
Point::Point(const Point &z):m_x{z.m_x},m_y{z.m_y}{}
void Point::distanceFromOrigin()
{
    //s=(√((m_x)*2)+((m_y)*2));
    //cout<<s<<endl;
}
void Point::quadrant()
{
    if(m_x>0 && m_y>0)
        cout<<q0<<endl;
    else if(m_x>0 && m_y<0)
        cout<<q3<<endl;
    else if(m_x<0 && m_y<0)
        cout<<q2<<endl;
    else if(m_x>0 && m_y<0)
        cout<<q1<<endl;
}
int Point::isOrigin()
{
    if(m_x==0 && m_y==0)
        cout<<"origin"<<endl;
    else
        return 0;
}
void Point::isOnXAxis()
{
    if((m_x>0 || m_x<0) && m_y==0)
        cout<<"on x axis"<<endl;
    else
        cout<<"not on x axis"<<endl;
}
void Point::isOnYAxis()
{
    if((m_y>0 || m_y<0) && m_x==0)
        cout<<"on y axis"<<endl;
    else
        cout<<"not on y axis"<<endl;
}
void Point::display()
{
    cout<<m_x<<endl;
    cout<<m_y<<endl;
}


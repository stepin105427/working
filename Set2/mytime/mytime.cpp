#include<iostream>
#include "mytime.h"

Time::Time():m_hours(0),m_minutes(0) {}
Time::Time(int a,int b,int c):m_hours(a),m_minutes(b),m_seconds(c) {}
Time::Time(int d,int e):m_hours(d),m_minutes(e) {}
Time Time::operator+(const Time &ref) {

    int tmins = m_minutes + ref.m_minutes;
    int thrs = m_hours+ref.m_hours;
    return Time(thrs, tmins);
}
Time Time::operator-(const Time &ref) {
    int tmins = m_minutes - ref.m_minutes;
    int thrs = m_hours - ref.m_hours;
    return Time(thrs, tmins);
}
Time Time::operator*(const Time &ref) {
    int tmins = m_minutes * ref.m_minutes;
    int thrs = m_hours * ref.m_hours;
    return Time(thrs, tmins);
}
Time& Time:: operator++() {
    ++m_minutes; // TODO: mm > 60
    return *this;}
Time Time:: operator++(int dummy) {
    Time orig(*this);
    ++m_hours; // TODO: mm > 60
    return orig;
  }
  Time& Time:: operator+=(const Time &ref)
{
     m_minutes += ref. m_minutes;
    m_hours += ref.m_hours;  //TODO: mm > 60
    return *this;
  }
bool Time::operator==(const Time &ref) {
    return m_hours == ref.m_hours && m_minutes == ref.m_minutes;
}
void Time::display() {
    std::cout<<m_hours<<":"<<m_minutes<<"\n";
}
int Time::hrs()
{
    return m_hours;
}
int Time::minu()
{
    return m_minutes;
}
int Time::sec()
{
    return m_seconds;
}

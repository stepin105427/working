#include<iostream>
#include"customer.h"
Customer::Customer():m_custid{0},m_phone{0},m_type{0},m_custname{0},m_balance{0} {}
Customer::Customer(int id, int num, string ty, string nam, int balance):m_custid{id},m_phone{num},m_type{ty},m_custname{nam},m_balance{balance} {}
Customer::Customer(const Customer &a):m_custid{a.m_custid},m_phone{a.m_phone},m_type{a.m_type},m_custname{a.m_custname},m_balance{a.m_balance} {}
int Customer::credit(int amount)
{
    m_balance+=amount;
    return m_balance;
}
int Customer::makecall()
{
    return m_phone;
}
int Customer::getbalance()
{
    return m_balance;
}
void Customer::display()
{
    cout<<m_custid<<endl;
    cout<<m_phone<<endl;
    cout<<m_type<<endl;
    cout<<m_custname<<endl;
    cout<<m_balance<<endl;
}

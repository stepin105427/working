#include<string>
using namespace std;
class Customer
{
private:
    int m_custid;
    int m_phone;
    string m_type;
    string m_custname;
    double m_balance;
public:
    Customer();
    Customer(int,int,string,string,int);
    Customer(int,int,int);
    Customer(const Customer &);
    int credit(int);
    int makecall();
    int getbalance();
    void display();
};

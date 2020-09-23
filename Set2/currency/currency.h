class Currency
{
private:
    int m_rupees;
    int m_paise;
public:
    Currency();
    Currency(int,int);
    Currency(int);
    Currency operator+(const Currency &ref);
    Currency operator-(const Currency &ref);
    Currency operator*(const Currency &ref);
    Currency& operator++();
    Currency operator++(int dummy);
    bool operator< (const Currency &ref);
    bool operator> (const Currency &ref);
    bool operator==(const Currency &ref);
    void display();
    int rupees();
    int paise();
};


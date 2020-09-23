class Complex {
    int m_real;
    int m_imag;
public:
    Complex();
    Complex(int,int);
    Complex(int );
    Complex operator+(const Complex &ref);
    Complex operator-(const Complex &ref);
    Complex operator*(const Complex &ref);
    Complex& operator++();
    Complex operator++(int dummy);
    bool operator==(const Complex &ref);
    void display();
    int real();
    int imag();
};


class Fraction {
private:
    int m_numerator;
    int m_denominator;
public:
    Fraction();
    Fraction(int,int);
    Fraction(int );
    Fraction operator+(const Fraction &ref);
    Fraction operator-(const Fraction &ref);
    Fraction operator*(const Fraction &ref);
    Fraction& operator++();
    Fraction operator++(int dummy);
    bool operator< (const Fraction &ref);
    bool operator> (const Fraction &ref);
    bool operator==(const Fraction &ref);
    void Simplify();
    void isSimplify();
    void display();
    int getnume();
    int getdeno();
};


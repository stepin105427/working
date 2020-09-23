class Time {
private:
    int m_hours;
    int m_minutes;
    int m_seconds;
public:
    Time();
    Time(int,int,int);
    Time(int,int );
    Time operator+(const Time &ref);
    Time operator-(const Time &ref);
    Time operator*(const Time &ref);
    Time& operator++();
    Time operator++(int dummy);
    bool operator< (const Time &ref);
    bool operator> (const Time &ref);
    Time& operator+=(const Time &ref) ;
    bool operator==(const Time &ref);
    void Simplify();
    void isSimplify();
    void display();
    int hrs();
    int minu();
    int sec();

};

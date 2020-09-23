enum
{
    q0=1,q1,q2,q3
};
class Point
{
    int m_x;
    int m_y;
public:
    Point();
    Point(int, int);
    Point(const Point &);
    void distanceFromOrigin();
    void quadrant();
    int isOrigin();
    void isOnXAxis();
    void isOnYAxis();
    void display();
};


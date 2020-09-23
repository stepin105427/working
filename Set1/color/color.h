enum color_t
{
    m_r,m_g=125,m_b
};

class Color
{
private:
    int m_r;
    int m_g;
    int m_b;
public:
    Color();
    Color(int,int,int);
    Color(int);
    Color(color_t);
    int invert();
    void display();
};

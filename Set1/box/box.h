class Box
{
private:
    int m_length;
    int m_breadth;
    int m_height;
public:
    Box();
    Box(int,int,int);
    Box(int);
    Box(const Box &);
    int length(int);
    void breadth(int);
    void height(int);
    void display();
    int volume();
};


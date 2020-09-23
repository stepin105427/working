class Image
{
private:
    int m_x;
    int m_y;
    int m_width;
    int m_height;
public:
    Image();
    Image(int,int,int,int);
    Image(const Image &);
    int move1(int,int);
    void scale(int,int);
    void resize1(int,int);
    void display();
};

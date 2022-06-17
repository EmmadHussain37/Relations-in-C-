#include <iostream>
using namespace std;

// base class
class shape
{
    protected:
    int width;
    int height;

    public:

    void setwidth(int w)
    {
        width = w;
    }

    void setheight(int h)
    {
        height = h;
    }
};

// derived class

class rectangle : public shape
{
public:
    int area()
    {
        return height * width;
    }
};

    int main()
{
    shape s;
    s.setheight(500);
    s.setwidth(100);
    rectangle r;
    r.area();

    cout << "total area : " << r.area();

    return 0;
}
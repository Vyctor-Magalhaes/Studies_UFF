#include <iostream>

class Cwidth
{
    public:
        Cwidth(int w);

    protected:
        int width;
};
Cwidth::Cwidth(int w)
{
    width = w;
}

class Cheight
{
    public:
        Cheight(int h);
    protected:
        int height;
};

Cheight::Cheight(int h)
{
    height = h;
}

class CArea : public Cwidth, public Cheight
{
     public:
         CArea(int w, int h);
        int get_area()
        {
        std::cout << "Area = " << width * height << std::endl;
        return (width * height);
        };
    int get_custo(int area)
        {
        std::cout << "Custo = " << area * 24 << std::endl;
        return (area * 24);
        };
};

CArea::CArea(int w, int h) : Cwidth(w), Cheight(h)
{
}

int main(){

    int t1;
    CArea test(5,7);
    t1 = test.get_area();
    test.get_custo(t1);
}
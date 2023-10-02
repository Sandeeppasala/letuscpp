// Online C++ compiler to run C++ program online
#include <iostream>

class circle
{
    private:
        int radius;
        float x,y;
        
    public:
        circle()
        {
        }
        
        circle(int rr, float xx, float yy)
        {
            radius = rr;
            x = xx;
            y = yy;
        }
        
        circle operator= (circle& c)
        {
            std::cout << std::endl << "Assignment operator invoked";
            radius = c.radius;
            x = c.x;
            y = c.y;
            return circle(radius, x, y);
        }
        
        circle (circle &c)
        {
            std::cout << std::endl << "Copy Constructor invoked";
            radius = c.radius;
            x = c.x;
            y = c.y;
        }10111
        
        void showdata ()
        {
            std::cout << std::endl << "Radius =" << radius;
            std::cout << std::endl << "X Cordinate = "<< x;
            std::cout << std::endl << "Y Cordinate = "<< y;
        }
};

int main() {
    // Write C++ code here
    circle c1(10, 2.5, 2.5);
    circle c2, c4;
    c4 = c1;
    c2 = c1;
    circle c3 = c1;

    c1.showdata();
    c2.showdata();
    c3.showdata();
    c4.showdata();
    return 0;
}

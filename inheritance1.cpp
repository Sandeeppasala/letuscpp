// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class index
{
    protected:
    int count;
    
    public:
    index()
    {
         cout << "Default Constructor invoked" <<  endl;
        count =0;
    }
    
    index(int c)
    {
         cout << "Argument Constructor invoked"<<endl;
        count = c;
    }
    
    void display()
    {
         cout<<  endl<<"count="<<count;
    }
    
    void operator ++ (int)
    {
        count++;
    }
};

class index1 : public index
{
    public:
        void operator -- (int)
        {
            count--;
        }
};

int main()
{
    index1 i;
    i++;
    i++;
    i.display();
    i--;
    i.display();
    
    return 0;
}


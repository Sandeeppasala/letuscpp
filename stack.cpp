// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
const int MAX = 25;

class stack
{
    protected:
    int s[MAX];
    int top;
    
    public:
    
    stack()
    {
        cout << endl << "stack constructor";
        top = -1;
        cout << endl << "return from  constructor";
    }
    
    void push(int num)
    {
        top++;
        s[top] = num;
    }
    
    int pop ()
    {
        int num;
        num = s[top];
        top--;
        return num;
    }
};

class stack1 : public stack
{
    public:
    void push(int num)
    {
        if(top == MAX-1)
        {
            cout << endl<< "Stack is full";
        }
        else
        {
            stack:push(num);
        }
    }
    
    int pop()
    {
        int n;
        
        if(top == -1)
        {
            cout << endl <<"Stack empty";
            return 0;
        }
        else
        {
            n = stack::pop();
            return n;
        }
    }
};

int main()
{
    int n;
    cout << endl << "Main";
    stack1 stk;
    cout << endl << "Line 72";
    stk.push(10);
    stk.push(20);
    stk.push(30);
    
    n = stk.pop();
    cout << endl << n;
    
    n = stk.pop();
    cout << endl << n;
    return 0;
}


#include<iostream>
using namespace std;
class Rectangle
{
    int l,b;
    public:
    Rectangle(int m,int n)
    {
        l=m;
        b=n;
    }
    void showData()
    {
        cout<<"length is"<<l<<endl;
        cout<<"breadth is"<<b<<endl;
    }
    void area()
    {
        int A=l*b;
        cout<<"area is"<<A;
    }
};
int main()
{
    Rectangle a(2,3);
    a.showData();
    a.area();

    return 0;
}
#include<iostream>
using namespace std;
class mouse
{
  private:
  int length,breadth;
 public:
void area()
{
    int a=length*breadth;
    cout<<"area is "<<a;
}
void setdiamention(int a,int b)
{
    length=a;
    breadth=b;
}

};
int main(){
    int x,y;
    cin>>x;
    cin>>y;
 mouse m;
   m.setdiamention(x,y);
   m.area();

   return 0;

    
    
    
}
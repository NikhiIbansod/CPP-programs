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
   
 mouse m;
   m.setdiamention(3,4);
   m.area();

   return 0;

    
    
    
}
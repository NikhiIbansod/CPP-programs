#include<iostream>
using namespace std; 
int initializer(void) 
{ 
    return 50; 
} 
   
int main() 
{ 
    static int i = initializer(); 
    cout<<i; 
    getchar(); 
    return 0; 
} 
#include<iostream>
void swap(int&x,int&y,int&z)
{
    int a;
    a=x;
    x=y;
    y=z;
    z=a;
}
int main()
{
    int b=10;
    int c=16;
    int d=9;
    std::cout<<"before swapping\n"<<b<<c<<d;
    swap(b,c,d);
    std::cout<<"\nafter swapping\n"<<b<<c<<d;
    return 0; 
}

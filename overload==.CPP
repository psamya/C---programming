#include<iostream>
class equality
{
   public:
    int x;
    void getdata()
    {
        std::cout<<"enter the value of x:";
        std::cin>>x;
    }
};
class equ:public equality
{
   public:
   int y;
   void getdata1()
   {
    std::cout<<"enter the value of y:";
    std::cin>>y;
   }
};
class c:public  equ
{
    public:
    void operator==()
    {
        if(x==y)
        std::cout<<"the numbers are equal"<<std::endl;
        else
        std::cout<<"the numbers are not equal"<<std::endl;
    }
};
int main()
{
    c C;
     C.getdata();
     C.getdata1();
     C.operator==();
     return 0;
}
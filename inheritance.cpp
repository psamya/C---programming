#include<iostream>
class A
{
    public:
    int a;
  void display()
  {
    std::cout<<"enter the value of a:";
    std::cin>>a;
  }
};
class B
{
    public:
    int b;
    void getdata()
    {   std::cout<<"enter the value of b:";

        std::cin>>b;
    }

};
class C:public A,public B
{
    public:
    int c;
    void add()
    {
        c=a+b;
        std::cout<<"the sum is:"<<c;
    }
};
class D:public C
{
    public:
    void square()
    {
      int d=0;
      d=a*a;
      std::cout<<"\nthe square is:"<<d;
    }
};
class E:public D
{
    public:
    void cube()
    {
        int e=0;
        e=b*b*b;
        std::cout<<"\nthe cube is:"<<e;
    }
};
int main()
{
    E e;
    e.display();
    e.getdata();
    e.add();
    e.square();
    e.cube();
    return 0;
}
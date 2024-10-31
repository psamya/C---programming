#include<iostream>
class equality
{
   private:
    int x,y;
    public:
    void getdata()
    {
        std::cout<<"enter the value of x:";
        std::cin>>x;
    }
    void getdata1()
    {
        std::cout<<"enter the value of  y:";
        std::cin>>y;
    }
    void calculation()
    const
    {
         if(x==y)
        std::cout<<"the numbers are equal"<<std::endl;
        else
        std::cout<<"the numbers are not equal"<<std::endl;
    }
    bool operator==( const equality& e)
    const
    {
      return  (x==e.x)&&(y==e.y);
       
    }
};
int main()
{
    equality C,e;
     e.getdata();
     C.getdata1();
     if(e==C)
     std::cout<<"the both numbers are equal"<<std::endl;
     else
     std::cout<<"the both numbers are not equal"<<std::endl;
     return 0;

}
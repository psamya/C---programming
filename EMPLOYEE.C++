#include<iostream>
#include<conio.h>

class employee
{ 
    
    int id;
    float salary;
    int exp;
    int age;
    int year;
    public:
    void getdata()
    {
       
        std::cout<<"enter age of employee:";
        std::cin>>age;
        std::cout<<"enter employee id:";
        std::cin>>id;
        std::cout <<"enter employee salary:";
        std::cin>>salary;
        std::cout<<"number of year of experience of employee is:";
        std::cin>>year;
    }
        void bonus()
        int main()
       if (exp>10 years)
       {   bonus =(20/100)*salary;
           std::cout<<"Bonus ="<<bonus;
       }
        else 
        ( exp<10 years)
       {   bonus = (10/100)*salary;
           std::cout<<"Bonus="<<bonus;
       }
        void display()
        {
            
            std::cout<<"age="<<age;
            std::cout<<"id="<<id;
            std::cout<<"salary="<<salary;
            std::cout<<"experience="<<year;
            std::cout<<"bonus:"<<bonus;
        }
};
    int main() 
    {
        employee e;
        e. getdata();
        e. bonus();
        e. display();
        getch();
        return 0;
    }

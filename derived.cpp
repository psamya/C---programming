#include<iostream>
class base
{
    public:
    int rollno;
    char name[25];
    char gender[25];
    virtual void getdata()
    {
        std::cout<<"enter the name";
        std::cin>>name;
        std::cout<<"enter the roll number";
        std::cin>>rollno;
        std::cout<<"enter the gender";
        std::cin>>gender;
    }
    virtual void display()
    {
        std::cout<<"***the details are given below***";
        std::cout<<"name:"<<name;
        std::cout<<"roll number"<<rollno;
        std::cout<<"gender"<<gender;
    }
};
class derived:public base
{
    public:
    int h;//h is for height
    int w;//w is for weight
    void getdata()
    {
        std::cout<<"enter the height and weight:::";
        std::cin>>h>>w;
        //std::cout<<"enter the weight";
       // std::cin>>w;
    }
    void display()
    {
        std::cout<<"***the physical fit information***" ;
        std::cout<<"height and weight::"<<h<<"  "<<w;
        //std::cout<<"weight"<<w;
    }
};
int main()
{
    base s;
    base*p;
    p=&s;
    p->getdata();
    p->display();
    derived d;
    p=&d;
    p->getdata();
    p->display();
    return 0;
}
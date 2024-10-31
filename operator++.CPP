#include<iostream>
class test
{
    private: 
    int num;
    public:
    test()
    {
        num=8;
    }
    void operator++()
    {
        num =num+1;
    }
    void print()
    {
        std::cout<<"the counter is="<<num;
    }
};
int main()
{
    test T;
    ++T;
    T.print();
    return 0;
}
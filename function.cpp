#include<iostream>
using namespace std;
void factorial()
{
    int n;
    int fact=1;
    cout<<"Enter the number : ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        fact*=i;
    }
    cout<<"The factorial of given number is:"<<fact<<" ";
    cout<<endl;
}
    int main()
    {
        factorial();
        return 0;
    }
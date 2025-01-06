#include<iostream>
using namespace std;
 void function()
 {
    int n;
    int digit=0;
    cout<<"Enter the number: ";
    cin>>n;
    while(n>0)
    {
        int ldigit = n % 10;
        n/=10;
        digit+=ldigit;
    }
    cout<<"The sum of digits of the number given is: "<<digit;
    cout<<endl;
 }
 int main()
 {
    function();
    return 0;
 }
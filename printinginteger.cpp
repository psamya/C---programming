#include<iostream>
int main()
{
    int arr[15],sum=0,average;
     std::cout<<"the integers are:";
    for(int i=1;i<16;i++)
    {
    std:: cin>>arr[i];
    }
    for(int i=1;i<16;i++)
    {
        sum+=arr[i];
    }
    average=sum/16;
    std::cout<<"sum="<<sum;
    std::cout<<"average="<<average;
    return 0;
}
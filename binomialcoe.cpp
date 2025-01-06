#include<iostream>
using namespace std;
int factorial(int n)
{
    int fact=1;
    for (int i =1;i<=n;i++)
    {
        fact*=i;
    }
    return fact;
}
int nCr(int n,int r)
{
    int factn=factorial(n);
    int factr=factorial(r);
    int factc=factorial(n-r);
    return factn/(factr*factc);
}
int main()
{
    int n=8,r=2;
  cout<<nCr(n,r)<<endl;
  return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int n;
    int s=1;
    cout<<"Enter the number of rows: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i+1;j++)
        {
           cout<<s<<" ";
           s=s+1;
        }
        cout<<endl;
    }
}
#include<iostream>
using namespace std;
int linearsearch(int arr[],int sz,int target)
{ 
    for(int i=0;i<sz;i++)
  {
    if(arr[i]==target)
    {
        return i;//target found 
    }
  }
    return -1;//target not found
}
int main()
{
    int arr[]={4,5,6,47,7,78,9,16,1};
    int sz =9;
    int target = 9;
    cout<<linearsearch(arr,sz,target)<<endl;
    return 0;
}
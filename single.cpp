#include<iostream>
#include<vector>
using namespace std;
int singlenumber(vector<int>& vec)
{
    int ans=0;
    for(int i:vec)
    {
        ans^=i;
       // cout<<ans;
    }
    return ans;
}
int main()
{  vector<int> vec={9,1,2,1,2};
   int result= singlenumber(vec);
   cout<<"the single number is:"<<result<<endl;
   return 0;
   
}
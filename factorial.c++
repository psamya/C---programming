#include<iostream>
using namespace std;
int main()
{
   double number , fact=1, i=1;
   cout<<"enter the number";
   cin>>number;
   do{
    fact*=i;
    i++;
   }
   while(i<number);
   cout<<"factorial="<<fact;
    return 0;

}
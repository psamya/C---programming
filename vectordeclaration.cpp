#include<iostream>
#include<vector>
using namespace std;
int main ()
{
    // declaration of vector. vector is like an array.
   // vector<int> vec(5,0);// vector declared here.
   vector<int>vec={'a','b','c','d','e'};//vector declaration for character.
   cout<<"size="<<vec.size()<<endl;//to find the size of vector we use vector function called size.
   cout<<"capacity="<<vec.capacity()<<endl;//to find the capacity of a vector.
   vec.push_back(9);//to add some value push_back is used.
   cout<<"after push back the size="<<vec.size()<<endl;
   vec.pop_back();//to delete last element. 
    //for printing the value of each vector we use for each loop.
    //cout<<vec.front(); is used to print the first value of vector.
    //cout<<vec.back();is used to print the last value of vector.
    //cout<<vec.at(i);is to print the specific value of vector.
    for(int i:vec)//if we want to print the value of char here the data type will be int.
    {
        cout<<i<<endl;
    }
    return 0;
}
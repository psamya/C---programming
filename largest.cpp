#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vec;
    int a;
    for (int i = 1; i <= 5; i++)
    {
        
        cin >> a;
        vec.push_back(a);
    }
    cout<<vec.push_back(a)<<endl;
    return 0;
}
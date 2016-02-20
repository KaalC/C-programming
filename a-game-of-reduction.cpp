#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void find_subset(int , int );

int main() {
    int long test_case;
    cin>>test_case;
    for(long int temp_loop=0 ; temp_loop<test_case ; temp_loop++)
    {
        long int alice, total;
        cin>>total>>alice;
        if(temp_loop != 0)
            cout<<"\n";
        find_subset(total,alice);
    }
    return 0;
}

void find_subset(int total, int alice)
{
    int arr[alice];
    for(int temp_loop=0 ; temp_loop<alice ; temp_loop++)
    {
        cin>>arr[temp_loop];
    }
    long double result=0;
    if(total % 2 == 0)
    {
        int temp_c = total - alice - 1;
        if(temp_c != 0)
            result += pow(2,temp_c);
    }
    else
    {
        int temp_c = total - alice;
        result += pow(2,temp_c) - 1;
    }
    cout<<(result%1000000007);
}

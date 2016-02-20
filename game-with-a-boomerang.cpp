#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;


void declare_winner(long int );

int main(){
    long int test_case;
    cin >> test_case;
    for(long int loop_on_test = 0 ; loop_on_test < test_case ; loop_on_test++){
        long int num_can;
        cin >> num_can;
        if(loop_on_test != 0)
            cout<<"\n";
        declare_winner(num_can);
    }
    return 0;
}

void declare_winner(long int n_c)
{
    int c_out[n_c+1], c_num[n_c+1];
    for(long int temp_loop=1 ; temp_loop <= n_c ; temp_loop++)
    {
        c_out[temp_loop] = 0;
        c_num[temp_loop] = temp_loop;
    }
    long int temp_count = 1;
    long int c_r = n_c;


    while(c_r != 1)
    {
        if(c_r%2 == 0)
        {
            int co = temp_count;
            long int mean = c_r / 2;
            for(int temp_loop = 0 ; temp_loop < mean ; temp_loop++)
            {
                if(co == c_r)
                    co = 1;
                else
                    co++;
            }
            c_out[co] = 1;
            if(c_r != 2)
            {
                if(temp_count == c_r)
                    temp_count = 1;
                else
                    temp_count++;
            }
        }
        else
        {
            c_out[temp_count] = 1;
        }

        int check=0;
        for(int temp_loop=1 ; temp_loop <= c_r ; temp_loop++)
        {
            if(c_out[temp_loop] == 1)
            {
                check = temp_loop;
                c_out[temp_loop] = 0;
                break;
            }
        }
        for(int temp_loop=check ; temp_loop < c_r ; temp_loop++)
        {
            c_num[temp_loop] = c_num[temp_loop+1];
        }
        c_r--;
    }
    cout<<c_num[1];
}

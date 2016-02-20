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


void find_min_new_guard_r(int , int []);

int main(){
    int test_case;
    cin >> test_case;
    for(int loop_on_test = 0 ; loop_on_test < test_case ; loop_on_test++){
        int no_of_city;
        cin >> no_of_city;
        int c_g_status[100];
        for(int temp_loop = 0 ; temp_loop < no_of_city ; temp_loop++){
           cin >> c_g_status[temp_loop];
        }
        if(loop_on_test != 0)
            cout<<"\n";
        find_min_new_guard_r(no_of_city,c_g_status);
    }
    return 0;
}

void find_min_new_guard_r(int c_n, int cur_g_s[]) {
    /*
    cout<<c_n<<"\n";
    for(int temp_loop = 0 ; temp_loop < c_n ; temp_loop++)
        cout<<cur_g_s[temp_loop];
    */
    int min_g_r=0, g_pre_present=0;
    if(cur_g_s[0] == 1)
            g_pre_present = 1;
    else
            g_pre_present = 0;
    for(int temp_loop = 1 ; temp_loop < c_n ; temp_loop++)
    {
        if(cur_g_s[temp_loop] == 1)
        {
            g_pre_present = 1;
        }
        else
        {
            if(g_pre_present == 0)
            {
                min_g_r++;
                g_pre_present = 1;
            }
            else
                g_pre_present = 0;
        }
    }
    cout<<min_g_r;
}

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


int main(){
    long int t;
    cin >> t;

    double note_c_1=0;
    int temp_num;
    for(long int temp_loop=1 ; temp_loop<=t ; temp_loop++)
    {
        if(temp_loop%2 == 0)
        {
            temp_num = temp_loop / 2 + 1;
            note_c_1 += temp_num;
        }
        else
        {
            temp_num = (temp_loop+1) / 2;
            note_c_1 += temp_num;
        }
    }
    cout<<note_c_1;
    return 0;
}

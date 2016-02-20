#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void find_solution(long int ,long int ,long int ,long int ,int );


int main() {
    long int initial_m, bug_time, extra_m, machine_clone;
    int test_case;
    cin>>test_case;
    for(int temp_loop = 0 ; temp_loop < test_case ; temp_loop++)
    {
        cin>>initial_m>>bug_time>>extra_m>>machine_clone;
        if(temp_loop != 0)
            cout<<"\n";
        find_solution(initial_m,bug_time,extra_m,machine_clone,temp_loop+1);
    }
    return 0;
}

void find_solution(long int ini_m, long int bug_t, long int extra_m, long int machine_c, int test_c)
{
    long int container_1 = ini_m, container_2 = 0, counter = bug_t;
    while(machine_c != 0)
    {
        counter--;
        if(container_1 >= container_2)
        {
            container_2 += container_1;
        }
        else
        {
            container_1 += container_2;
        }
        if(counter == 0)
        {
            if(container_1 >= container_2)
                container_2 += extra_m;
            else
                container_1 += extra_m;
            counter = machine_c - bug_t;
        }
        machine_c--;
    }
    cout<<"Case "<<test_c<<": ";
    int  gcd;
    for(int temp_loop=1 ; temp_loop <= container_1 && temp_loop <= container_2 ; temp_loop++)
    {
        if(container_1%temp_loop == 0 && container_2%temp_loop == 0 )
        {
            gcd = temp_loop;
        }
    }
    cout<<gcd;
}

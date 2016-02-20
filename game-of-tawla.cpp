#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int test_case;
    int first_face, second_face;
    cin>>test_case;
    for(int temp_loop=1 ; temp_loop <= test_case ; temp_loop++)
    {
        cin>>first_face>>second_face;
        if(temp_loop != 1)
            cout<<"\n";
        cout<<"Case "<<temp_loop<<": ";
        switch(first_face)
        {
            case 1:
                switch(second_face)
                {
                    case 1:
                        cout<<"Habb Yakk";
                        break;
                    case 2:
                        cout<<"Doh Yakk";
                        break;
                    case 3:
                        cout<<"Seh Yakk";
                        break;
                    case 4:
                        cout<<"Ghar Yakk";
                        break;
                    case 5:
                        cout<<"Bang Yakk";
                        break;
                    case 6:
                        cout<<"Sheesh Yakk";
                }
                break;
            case 2:
                switch(second_face)
                {
                    case 1:
                        cout<<"Doh Yakk";
                        break;
                    case 2:
                        cout<<"Dobara";
                        break;
                    case 3:
                        cout<<"Seh Doh";
                        break;
                    case 4:
                        cout<<"Ghar Doh";
                        break;
                    case 5:
                        cout<<"Bang Doh";
                        break;
                    case 6:
                        cout<<"Sheesh Doh";
                }
                break;
            case 3:
                switch(second_face)
                {
                    case 1:
                        cout<<"Seh Yakk";
                        break;
                    case 2:
                        cout<<"Seh Doh";
                        break;
                    case 3:
                        cout<<"Dousa";
                        break;
                    case 4:
                        cout<<"Ghar Seh";
                        break;
                    case 5:
                        cout<<"Bang Seh";
                        break;
                    case 6:
                        cout<<"Sheesh Seh";
                }
                break;
            case 4:
                switch(second_face)
                {
                    case 1:
                        cout<<"Ghar Yakk";
                        break;
                    case 2:
                        cout<<"Ghar Doh";
                        break;
                    case 3:
                        cout<<"Ghar Seh";
                        break;
                    case 4:
                        cout<<"Dorgy";
                        break;
                    case 5:
                        cout<<"Bang Ghar";
                        break;
                    case 6:
                        cout<<"Sheesh Ghar";
                }
                break;
            case 5:
                switch(second_face)
                {
                    case 1:
                        cout<<"Bang Yakk";
                        break;
                    case 2:
                        cout<<"Bang Doh";
                        break;
                    case 3:
                        cout<<"Bang Seh";
                        break;
                    case 4:
                        cout<<"Bang Ghar";
                        break;
                    case 5:
                        cout<<"Dabash";
                        break;
                    case 6:
                        cout<<"Sheesh Beesh";
                }
                break;
            case 6:
                switch(second_face)
                {
                    case 1:
                        cout<<"Sheesh Yakk";
                        break;
                    case 2:
                        cout<<"Sheesh Doh";
                        break;
                    case 3:
                        cout<<"Sheesh Seh";
                        break;
                    case 4:
                        cout<<"Sheesh Ghar";
                        break;
                    case 5:
                        cout<<"Sheesh Beesh";
                        break;
                    case 6:
                        cout<<"Dosh";
                }
        }
    }
    return 0;
}

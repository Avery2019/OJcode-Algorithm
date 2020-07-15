#include<bits/stdc++.h>
#define PI 3.1415927
using namespace std;
int main()
{
    double r;
    while(cin>>r){
         double res=0;
         res=4.0/3.0*PI*r*r*r;
         printf("%.3lf\n",res);
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n){
        if(n==0)
            break;
        double a[n];
        int ne=0,zero=0,po=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]<0)
                ne++;
            else if(a[i]>0)
                po++;
            else
                zero++;
        }
        printf("%d %d %d\n",ne,zero,po);
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n){
        long long ans=1;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x%2!=0)
                ans*=x;
        }
        printf("%ld\n",ans);
    }
    return 0;
}

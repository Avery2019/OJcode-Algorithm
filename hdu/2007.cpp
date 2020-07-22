#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
    while(cin>>m>>n){
        int x=0,y=0;
        if(m>n){
            int t=m;
            m=n;
            n=t;
        }
        for(int i=m;i<=n;i++){
            if(i%2==0)
                x+=i*i;
            else
                y+=i*i*i;
        }
        printf("%d %d\n",x,y);
    }
    return 0;
}

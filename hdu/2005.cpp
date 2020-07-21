#include<bits/stdc++.h>
using namespace std;

int main()
{
    int value[2][12]={{0,31,28,31,30,31,30,31,31,30,31,30},
                    {0,31,29,31,30,31,30,31,31,30,31,30},};

    int year,mon,date;
    while(scanf("%d/%d/%d",&year,&mon,&date) !=EOF ){
        int sum=0;
        int tag;
        if((year%4==0&&year%100!=0)||year%400==0)
        tag=1;
        else
        tag=0;

        for(int i=1;i<mon;i++){
            sum=sum+value[tag][i];
        }
        sum=sum+date;
        printf("%d\n",sum);
    }
    return 0;
}

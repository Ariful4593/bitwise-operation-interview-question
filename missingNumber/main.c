#include<stdio.h>
int main()
{
    int ara[] = {1,2,4,1,2,5};
    int i,j,k,n=6,count,tild=0;
    for(i = 0; i < n; i++){
        for(j = i+1; j < n; j++){
            if(ara[i] == ara[j]){
                for(k = j; k < n; k++){
                    ara[k] = ara[k+1];
                }
                n--;
                j--;
            }
        }
    }
    for(i = 0; i < n;i++){
        printf("%d\n",ara[i]);
    }
}

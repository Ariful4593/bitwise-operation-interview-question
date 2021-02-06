#include<stdio.h>
int main()
{
    int arr[] = {1,2,3,4,6};
    int n = (sizeof(arr)/sizeof(arr[0]));
    int x1=0,x2=0,i,f;
    for(i = 0; i < n; i++){
        x1 = x1 ^ i;
    }
    for(i = 1; i < n+1; i++){
        x2 = x2 ^ i;
    }
    f = x1 ^ x2;
    printf("%d\n", f);
}

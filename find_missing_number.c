#include<stdio.h>
int main()
{
    int number[10], n, sumOfNumber, sumOfArray = 0;
    printf("Enter size of array: ");
    scanf("%d", &n);
    for(int i = 0; i < n-1; i++){
        scanf("%d", &number[i]);
    }
    for(int j = 0; j < n-1; j++){
        printf("%d ", number[j]);
    }
    printf("\n");
    sumOfNumber = (n*(n+1)/2);
    for(int k = 0; k < n-1; k++){
        sumOfArray = sumOfArray + number[k];
    }
    printf("Missing number is %d\n", sumOfNumber - sumOfArray);
}

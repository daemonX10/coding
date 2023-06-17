#include<stdio.h>
int main(){
    int n, i;
    double sum=0;
    double factorial=1;
    printf("enter the value of n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        factorial*=i;
        sum+=1.0/factorial;
    }
    printf("Sum of the series:%.2lf \n",sum);
    return 0;
}
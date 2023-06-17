#include<stdio.h>

int largestElementIndex(int array[],int size){
    int max = -1;
    int second_max = -1;
    for (int i = 0; i < size; i++)
    {
        if (array[i] > max)
        {
            second_max = max;
            max = array[i];
        }
        else if (array[i] > second_max && array[i] != max)
        {
            second_max = array[i];
        }
    }
    return second_max;
}
int main(){
    int size;
    printf("enter the size \n");
    scanf("%d",&size);
    int array[size];
    printf("enter the array ");
    for(int i=0;i<size;i++){
        printf("enter the element",i+1);
        scanf("%d",&array[i]);
    }
    printf("entered array is");
    for(int i=0;i<size;i++){
        printf(" %d",array[i]);
    }

    int indexOfSecondLargest=largestElementIndex(array,size);
    printf("\n second largest element is \n");
    printf("%d",indexOfSecondLargest);
}

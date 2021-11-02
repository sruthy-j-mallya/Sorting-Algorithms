#include<stdio.h>
#include<stdlib.h>
void insertion_sort(int list[20],int list_count){
    for(int i=1;i<)
}
void main(){

    //Declaration of variables    
    int n,numbers[20],i,j,temp;

    //Read input array from user
    printf("No of elements \n");
    scanf("%d",&n);
    printf("elements \n");
    for(i=0;i<n;i++){
        scanf("%d",&numbers[i]);
    }

    //Call insertionsort function
    insertion_sort(numbers);
    
    //Print the sorted Array
    for(i=0;i<n;i++){
        printf("%d ",numbers[i]);
    }

}
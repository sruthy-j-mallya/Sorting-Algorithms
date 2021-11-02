#include<stdio.h>
#include<stdlib.h>
void insertion_sort(int list[20],int list_count){
    int i,j,temp;
    for(i=1;i<list_count;i++){
        temp = list[i];
        j = i-1;
        while(j>=0 && list[j]>temp){
            list[j+1] = list[j];
            j--;
        }
        list[j+1] = temp;
    }
}
void main(){

    //Declaration of variables    
    int n,numbers[20],i;

    //Read input array from user
    printf("No of elements \n");
    scanf("%d",&n);
    printf("elements \n");
    for(i=0;i<n;i++){
        scanf("%d",&numbers[i]);
    }

    //Call insertionsort function
    insertion_sort(numbers,n);
    
    //Print the sorted Array
    for(i=0;i<n;i++){
        printf("%d ",numbers[i]);
    }

}
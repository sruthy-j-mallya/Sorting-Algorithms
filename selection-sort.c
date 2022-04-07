#include<stdio.h>
#include<stdlib.h>
void selection_sort(int list[20],int list_count){
    int min, pos;
    for(int i=0;i<list_count;i++){
      min = list[i];
      pos = i;
      for(int j=i+1;j<list_count;j++){
        if(list[j] < min){
          min = list[i];
          pos = j;
        }
      }
      if(pos != i){
        //swap elements
      }
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

    //Call selection_sort function
    selection_sort(numbers,n);
    
    //Print the sorted Array
    for(i=0;i<n;i++){
        printf("%d ",numbers[i]);
    }

}

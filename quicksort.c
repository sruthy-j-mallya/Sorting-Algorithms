#include <stdio.h>
int partition(int arr[], int left, int right){
    int i = left + 1; int j = right;
    int temp;
    int pivot = arr[left];
    while(i < j){
        while(arr[i] < pivot){
            i++;
        }
        while(arr[j] > pivot){
            j--;
        }
        if(i < j){
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    
    temp = arr[j];
    arr[j] = arr[left];
    arr[left] = temp;
    
    return j;
}
void quicksort(int arr[], int left, int right){
    if(left < right){
        int j = partition(arr,left,right);
        quicksort(arr,left,j-1);
        quicksort(arr,j+1,right);
    }
}
int main()
{
    int n, list[20];
    printf("Enter no of elements: \n");
    scanf("%d",&n);
    printf("Enter elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&list[i]);
    }
    quicksort(list,0,n-1);
    printf("Sorted List:\n");
    for(int i=0;i<n;i++){
        printf("%d\t",list[i]);
    }
    
}

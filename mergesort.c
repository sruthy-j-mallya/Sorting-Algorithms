#include<stdio.h>
#include<stdlib.h>
void merge(int list[],int lb,int mid,int ub){
    int dup_list[20];
    int i = lb;
    int j = mid + 1;
    int k = lb;
    while(i<=mid && j<=ub){
        if(list[i]<list[j]){
            dup_list[k] = list[i];
            i++;
        }
        else{
            dup_list[k] = list[j];
            j++;
        }
        k++;
    }
    if(i>mid){
        while(j<=ub){
            dup_list[k] = list[j];
            j++;k++;
        }
    }
    else{
        while(i<=mid){
            dup_list[k] = list[i];
            i++;k++;
        }
    }
    for(k=lb;k<=ub;k++){
        list[k] = dup_list[k];
    }
}
void mergesort(int list[20],int lb,int ub){
    int mid;
    if(lb<ub){
        mid = (lb+ub)/2;
        mergesort(list,lb,mid);
        mergesort(list,mid+1,ub);
        merge(list,lb,mid,ub);
    }
}
void main(){
    int n,numbers[20];
    printf("No of elements \n");
    scanf("%d",&n);
    printf("elements \n");
    for(int i=0;i<n;i++){
        scanf("%d",&numbers[i]);
    }
    mergesort(numbers,0,n-1);
    for(int i=0;i<n;i++){
        printf("%d ",numbers[i]);
    }
}
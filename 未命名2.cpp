#include<stdio.h>

void bubbleSort(int arr[],int n)
{
	int i,j,temp;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
 } 
 void printArray(int arr[],int size){
 	for(int i=0;i<size;i++)
 	printf("%d ",arr[i]);
 	printf("\n");
 }
 int main(){
 	int n;
 	printf("请输入要排序的数的个数:");
 	scanf("%d",&n);
 	int arr[n];
 	printf("请输入%d个正整数:",n);
 	for(int i=0;i<n;i++)
 	scanf("%d",&arr[i]);
 	bubbleSort(arr,n);
 	printf("从小到大排序的结果:");
 	printArray(arr,n);
 	
 	return 0;
 }


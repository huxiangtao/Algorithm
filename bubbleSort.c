#include<stdio.h>

void bubbleSort(int *,int);
int main(void) {
	int arr[] = {5,7,2,1,4};	
	int length = sizeof(arr)/sizeof(int);
  bubbleSort(arr,length);
	for(int i = 0;i< length;i++ ) {
		printf("%d ",arr[i]);
	}
	return 0;
}

void bubbleSort(int * arr,int len) {
	int i,j,temp;
	
	for(i = len-1; i > 0; i--) {
		for(j = 0; j < i; j++) {
			 if(arr[j] > arr[j+1]) {
					temp = arr[j];
					arr[j] = arr[j+1];
					arr[j+1] = temp;
			 }
		}
	}
}

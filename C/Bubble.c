#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int temp;
	int a[10] = {5,1,2,4,0,10,9,7,6,3};
	
	for(int i = 0; i < 10; i++) {
			for(int j = i+1; j < 10; j++) {
					if(a[i] > a[j]) {
						temp = a[i];
						a[i] = a[j];
						a[j] = temp;
					}
			}
	}

	for(int i = 0; i < 10; i++) {
			printf("%d ",a[i]);
	}
	return 0;
}

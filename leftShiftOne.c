#include<stdio.h>
#include<string.h>
void leftShiftOne(char *,int);
void LeftRotateString(char *,int,int);
void showString(char *,int);

int main(void) {

	char * s = "abcdef";
	int len = strlen(s);
	printf("%d",len);	
	showString(s,len);
	leftShiftOne(s,len);
	showString(s,len);		
	return 0;
}

void leftShiftOne(char * arr,int n) {
	char temp = arr[0];
	for(int i = 1; i < n; i++) {
			arr[i-1] = arr[i];	
	}
	arr[n-1] = temp;
}

void LeftRotateString(char * arr,int n,int m) {
	while(m--) {
		leftShiftOne(arr,n);
	}	
}

void showString(char * arr,int n) {
	for(int i = 0; i < n; i++) {
		printf("%c ",arr[i]);
	}
}

//i   j=1; j<=i; i++
//1   1
//2   12
//3   123
//4   1234
//5   12345
//
//i=1; i<=5; i++


#include<stdio.h>
int main(){
	int j,i;
	
	for (i=1; i<=5; i++) {
		for (j=1; j<=i; j++) {
			printf("%d",i);
		}
		printf("\n");
	}
	
	return 0;
}

//     j=5
//i=1  54321
//i=2  5432
//     543
//     54
//     5

#include<stdio.h>
int main(){
	int j,i;
	
	for (i=1; i<=5; i++) {
		for (j=5; j<=i; j--) {
			printf("%d",j);
		}
		printf("\n");
	}
	
	return 0;
}

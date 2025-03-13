//    
//i    j=1 j<=i i--
//1    5
//2    54
//3    543
//4    5432
//5    54321
//
//i=1; i<=5 1--

#include<stdio.h>
int main(){
	int j,i;
	
	for (i=5; i>=1; i--) {
		for (j=5; j>=i; j--) {
			printf("%d",i);
		}
		printf("\n");
	}
	
	return 0;
}

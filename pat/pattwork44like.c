// i   j=i; j<=5; j++
// 5   5
// 4   45
// 3   345
// 2   2345
// 1   12345
// 
// i=5; i>=1; i--
 
#include<stdio.h>
int main(){
	int j,i;
	
	for (i=5; i>=1; i--) {
		for (j=i; j<=5; j++) {
			printf("%d",j);
		}
		printf("\n");
	}
	
	return 0;
}

// 
// i	j=i; j>=1; j--	
// 1   1
// 2   21
// 3   321
// 4   4321
// 5   54321
// 
// i=1; i<=5; i++
 
#include<stdio.h>
int main(){
	int j,i;
	
	for (i=1; i<=5; i++) {
		for (j=i; j>=1; j--) {
			printf("%d",j);
		}
		printf("\n");
	}
	
	
	return 0;
}

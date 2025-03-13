//i	j=i j>=1 i--
//5   54321
//4   4321
//3   321
//2   21
//1   1
//  
//i=5; i>=1; 1--

#include<stdio.h>
int main(){
	int j,i;
	
	for (i=5; i>=1; i--) {
		for (j=i; j>=1; j--) {
			printf("%d",j);
		}
		printf("\n");
	}
	
	
	
	return 0;
}

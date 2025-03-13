//
//i     j=i; j<=5; j++
//1     12345
//2     2345
//3     345
//4     45
//5     5
//
//i=1; i<=5; i++


#include<stdio.h>
int main(){
	int j,i;
	
	for (i=1; i<=5; i++) {
		for (j=i; j<=5; j++) {
			printf("%d",j);
		}
		printf("\n");
	}
	
	
	
	return 0;
}

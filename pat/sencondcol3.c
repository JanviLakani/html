
//
//i	j=45; j<=i; j++
//45    45
//46    4546
//47    454647
//48    45464748
//49    4546474849
//
//i=45; i<=49; i++ 


#include<stdio.h>
int main(){
	int j,i;
	
	for (i=45; i<=49; i++) {
		for (j=45; j<=i; j++) {
			printf("%d",j);
		}
		printf("\n");
	}
	
	
	
	return 0;
}

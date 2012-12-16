#include <stdio.h>
#include <stdlib.h>

long int c( int n, int k) {
if(k == 0 || k == n)
return 1;
else
return c(n-1,k-1)+ c(n-1,k) ;
}


int main(){
	int a,b;
	scanf("%d %d",&a,&b);
printf("c(%d,%d) = %ld\n",a,b, c(a, b));
}


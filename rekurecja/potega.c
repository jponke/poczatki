#include <stdio.h>
#include <stdlib.h>

long int n_k( int n, int k) {
if(k == 0)
return 1;
else
return n*n_k(n, k-1);
}


int main(){
	int a,b;
	scanf("%d,%d",&a,&b);
printf("%d^%d = %ld\n",a,b, n_k(a, b));
}

// n^k= n*n^(k-1)
//n^0 =1
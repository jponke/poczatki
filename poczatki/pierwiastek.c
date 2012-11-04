#include<stdio.h>
#include<math.h>

void podaj_liczbe(const char *prompt, double *x);

int main() { 
  double a, b; 
	

	podaj_liczbe("podaj liczbeliczba calkowita, Sir: ", &a);
	if (a >=0){
	b=sqrt(a);
	printf("pierwiastek z %lf to %lf\n", a,b);
	}else {
	  printf("! blad\n");
	}
  return 0;
}



void podaj_liczbe(const char * prompt, double *x){
	puts(prompt);
	scanf("%lf", x);
}


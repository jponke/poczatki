#include<stdio.h>
#include<math.h>

void oblicz_pierwiastki(double a, double b, double c, double *x1, double *x2, double *x3); 
int main() {  


  double a, b, c, x1, x2, x3; 
  scanf("%lf %lf %lf", &a, &b, &c); 
  oblicz_pierwiastki(a, b, c, &x1, &x2, &x3); 
  printf("x1 = %lf, x2 = %lf, x3 = %lf\n",x1, x2, x3); 
        	
  return 0; 
} 
void oblicz_pierwiastki(double a, double b, double c, double *x1, double *x2, double *x3)
{
  double delta; 
     
  delta=b*b-4*a*c; 
  if (delta > 0) {     
    *x1=(-b+sqrt(delta))/2; 
    *x2=(-b-sqrt(delta))/2;
  } else if (delta==0) {
    *x3=-b/2*a;
  } else {
    printf("nie ma pierwiastka\n");
  }

}





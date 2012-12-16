#include<stdio.h>
#include<math.h>
double przeciwprostokatna(double z,double a, double b);
int main(){

  przeciwprostokatna(double z,double a, double b);
  
}

double przeciwprostokatna(double z,double a, double b){
   
printf("podaj 2 przyprotokatne");
  scanf("%lf",a);
  scanf("%lf",b);
  z=sqrt((a*a)+(b*b));
  printf("przeciwprostokatna= %lf ",z);
return 0;
}

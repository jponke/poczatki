#include<stdio.h>
#include<math.h>

int main(){
  double x,y,z;
  printf("podaj dwie liczby");
  scanf("%lf",&x);
  scanf("%lf",&y);
  z=sqrt((x*x)+(y*y));
  printf("przeciwprostokatna rowna sie: %lf\n",z);

}

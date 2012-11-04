/*przeliczanie ze stopni na radiany */


#include<stdio.h>
#include<math.h>

int main(){
  double deg, rad;
  printf("podaj kat w stopniach: ");
  scanf("%lf", &deg);
  rad=M_PI_2*deg/90;
  printf("%lf deg = %lf rad\n",deg,rad);
  return 0;
}

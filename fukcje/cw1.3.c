#include<stdio.h>
#include<math.h>
double z;
double przeciw(double x,double y);
int main(){
  double x,y;
   printf("podaj dwie liczby\n");
   scanf("%lf %lf",&x,&y);
   przeciw(x,y);
   printf("przeciwprostokatna rowna sie: %lf\n",z);

}
double przeciw(double x,double y){
  
  z=sqrt((x*x)+(y*y));
return z ;
}

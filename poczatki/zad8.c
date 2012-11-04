#include<stdio.h>
#include"helper.h"
int max3(int a, int b, int c);
int min3(int a, int b, int c);
int main(){
  int a, b, c,suma,iloczyn,max ,min;

  printf("podaj 3 liczby: ");
  scanf("%d %d %d",&a , &b, &c);
  printf("wczytano trzy liczby: %d,%d,%d\n" ,a,b,c);

  suma = a+b+c;
  printf("suma podanych liczb to: %d\n",suma);

  iloczyn = a*b*c; 
  printf("iloczyn podanych liczb to: %d\n", iloczyn);

  max=max3(a,b,c);
 printf("max podanych liczb to: %d\n", max);
  min=min3(a,b,c);
 printf("min podanych liczb to: %d\n", min);
return 0;

}
int max3(int a, int b ,int c){
    unsigned int m = a;
    if (m < b) m = b;
    if (m < c) m = c;
    return m;
  }
int min3(int a, int b, int c){
    unsigned int m = a;
    if (m > b) m = b;
    if (m > c) m = c;
    return m;
  }

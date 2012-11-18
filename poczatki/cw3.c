#include <stdio.h>

int tab[5];
int x;
int main(){
  printf("podaj 6 liczb: \n");
  for (int i=0; i<6; i++){  
scanf("%d",&tab[i]);
  }
  printf("\n");
  for (int i=0; i<6; i++){
  printf("%d\n",tab[i]);
  }
  printf("\n\n");
  x=tab[0];

  for(int i=1; i<=5; i++){
    if(x<tab[i]){
      x=tab[i];
      
    }
}
  printf("najwieksza jest liczby: %d\n",x);
}

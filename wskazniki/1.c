#include <stdio.h>

int main () {
  int ref[] = {8, 4, 0, 2};

  int *wsk=ref;
  //char *a = "ala ma kota";
  //char b[] = "ola ma psa";
  //a[0] = 'A';
  //printf("%s\n",a);
  //b[0] = 'O';
  //printf("%s\n",b);
  int indeks;
printf("ref = %d\n", *(ref));
printf("ref+1 = %d\n", *(ref+1));
printf("*++wsk = %d\n", *++wsk);
  for (indeks = 0, wsk = ref; indeks < 4; indeks++, wsk++)
    printf("%d %d\n", ref[indeks], *wsk);
}
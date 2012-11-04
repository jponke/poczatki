#include<stdio.h>


void wczytaj_liczbe(const char *prompt, int *k);

int main() { 
	int a; 
	
	wczytaj_liczbe("liczba calkowita, Sir: ", &a);
	printf("podales liczbe calkowita: %d\n", a);

  return 0;
}



void wczytaj_liczbe(const char * prompt, int *k){
	puts(prompt);
	scanf("%d", k);
}


/* Program ten dla dwóch liczb wczytanych z klawiatury
   wypisuje, która z nich jest większa. */
#include<stdio.h>
#include "helper.h"



int main()
{
  int licz1, licz2, wieksza ;
  podaj_liczbe("podaj pierwsza liczbe: ", &licz1);
  podaj_liczbe("podaj druga liczbe: ", &licz2);

 
   if (licz1 > licz2)
     wieksza = licz1;
     else
       wieksza = licz2;
       printf("Wieksza jest liczba: %d\n", wieksza);
   
     
   return 0;
}

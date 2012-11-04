#include<stdio.h>
void podaj(const char *prompt, char *a);
int main()
{
  char a;
  podaj("podaj:   ", &a);

  char suit = 'a';
  switch(a) {
  case 'GDA':
    puts("Ziamonds");
    break;
  case 'C':
    puts("Clubs");
    break;
  case 'H':
    puts("hearts");
    break;
  default:
  puts("Spades");
  }
  return 0;
    }

void podaj (const char *prompt, char *a){
  puts(prompt);
  scanf("%s", a);
}

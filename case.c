/*"Copyright [2016] <pesic>"*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void konvert_cf() {
  float celsius;
  float fahrenheit;
  printf("\nUnesite temperaturu u Celzijusima: ");
  scanf("%f", &celsius);
  fahrenheit = (1.8 * celsius) + 32;
  printf("Temperatura u Farenhaitima je: %f\n", fahrenheit);
}
void konvert_fc() {
  float celsius;
  float fahrenheit;
  printf("\nUnesite temperaturu u Farenhaitima: ");
  scanf("%f", &fahrenheit);
  celsius = (5.0/9.0) * (fahrenheit-32);
  printf("Temperatura u Celsiusima je: %f\n", celsius);
}
void tabela() {
  float celsius;
  float fahrenheit;
  printf("\nCelzijusi Farenhaiti\n");
  printf("--------------------");
  celsius = 0;
  while (celsius <= 100) {
    fahrenheit = (1.8 * celsius) + 32;
    printf("\n%6.2f%11.2f", celsius, fahrenheit);
    celsius = celsius + 5; }
    printf("\n--------------------\n");
}
void konvert_again1() {
  char answer;
  printf("\nDa li zelite da konvertujete ponovo ? [D/N]\n");
  while (scanf(" %c", &answer) == 1 && answer == 'D' || answer == 'd') {
  konvert_cf();
  printf("\nDa li zelite da konvertujete ponovo? [D/N]\n");
  }
}
void konvert_again2() {
  char answer;
  printf("\nDa li zelite da konvertujete ponovo ? [D/N]\n");
  while (scanf(" %c", &answer) == 1 && answer == 'D' || answer == 'd') {
  konvert_fc();
  printf("\nDa li zelite da konvertujete ponovo? [D/N]\n");
  }
}
int prikazi_menu(int *izbor) {
  printf("\nSta zelite da konvertujete?:");
  printf("\n****************************");
  printf("\n1. Iz Celzijusa u Farenhaite\n");
  printf("2. Iz Farenhaita u Celzijuse\n");
  printf("3. Tablica konvertovanja\n");
  printf("4. Istorijat konvertovanja\n");
  printf("5. Izlaz\n");
  printf("Unesite vas izbor: ");
  scanf("%d", &*izbor);
  return *izbor;
}
struct istorija {
  char tip_konvertovanja;
  float celsius;
  float fahrenheit;
};
struct istorija memorija[5];

void memorisi(float celsius,float fahrenheit, struct istorija memorija[], int izbor) {
  int i,n;
  if (izbor == 4) {
    for ( i = 0; i < n; i++) {
      konvert_cf();
      memorija [i].celsius = celsius;
      memorija [i].celsius = celsius;
      memorija [i].celsius = celsius;
      memorija [i].celsius = celsius;
      memorija [i].celsius = celsius;
}
}
}
void istorijat (int izbor, struct istorija memorija[], int i) {
  if (izbor == 4) {
    printf("%.2lf\n", memorija[i].celsius[i]);
    printf("%.2lf\n", memorija[i].celsius[i]);
    printf("%.2lf\n", memorija[i].celsius[i]);
}
}
int main() {

  int izbor;
  while (izbor != 5) {
  prikazi_menu(&izbor);
  switch (izbor) {
  case 1:
    konvert_cf();
    konvert_again1();
    break;
  case 2:
    konvert_fc();
    konvert_again2();
    break;
  case 3:
    tabela();
    break;
  case 4:
    printf("\nIstorijat konvertovanja\n");
    istorijat(izbor,memorija, i);
  case 5:
    printf("Hvala na koristenju programa.\n");
    break;
  default:
    printf("Pogresan unos, pokusajte ponovo.\n");
    return 0;
    }
  }
}

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
  printf("Celzijusi Farenhaiti\n");
  printf("--------------------");
  celsius = 0;
  while (celsius <= 100) {
    fahrenheit = (1.8 * celsius) + 32;
    printf("\n%6.2f%11.2f", celsius, fahrenheit);
    celsius = celsius + 5; }
}
int prikazi_menu(int *izbor) {
  printf("\nSta zelite da konvertujete?:");
  printf("\n----------------------------");
  printf("\n1. Iz Celzijusa u Farenhaite\n");
  printf("2. Iz Farenhaita u Celzijuse\n");
  printf("3. Tablica konvertovanja\n");
  printf("4. Istorijat konvertovanja\n");
  printf("5. Izlaz\n");
  printf("Unesite vas izbor: ");
  scanf("%d", &*izbor);
  return *izbor;
}

int main() {

  int izbor;
  while (izbor != 5) {
  prikazi_menu(&izbor);
  switch (izbor) {
  case 1:
    konvert_cf();
    break;
  case 2:
    konvert_fc();
    break;
  case 3:
    tabela();
    break;
  case 4:
    printf("Istorijat konvertovanja\n");
  case 5:
    printf("Hvala na koristenju programa.\n");
    break;
  default:
    printf("Pogresan unos, pokusajte ponovo.\n");
    }
  }
}

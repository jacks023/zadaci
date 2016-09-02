/*"Copyright [2016] <pesic>"*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void konvert_cf(float celsius, float fahrenheit) {
  printf("\nUnesite temperaturu u Celzijusima: ");
  scanf("%f", &celsius);
  fahrenheit = (1.8 * celsius) + 32;
  printf("Temperatura u Farenhaitima je: %f\n", fahrenheit);
}
void konvert_fc(float celsius, float fahrenheit) {
  printf("\nUnesite temperaturu u Farenhaitima: ");
  scanf("%f", &fahrenheit);
  celsius = (5.0/9.0) * (fahrenheit-32);
  printf("Temperatura u Celsiusima je: %f\n", celsius);
}

int main(void) {
  int izbor = 0;
  float celsius, fahrenheit;

  while (izbor !='3') {
    printf("Sta zelite da konvertujete?:\n");
    printf("\n----------------------------");
    printf("\n1. Iz Celzijusa u Farenhaite\n");
    printf("2. Iz Farenhaita u Celzijuse\n");
    printf("3. Tablica konvertovanja\n");
    printf("4. Izlaz\n");
    printf("Unesite vas izbor: ");

    izbor = getchar();

    switch (izbor) {
      case '1':
        konvert_cf(celsius, fahrenheit);
      break;
      case '2':
        konvert_fc(celsius, fahrenheit);
      break;
      case '3':
        printf("Celzijusi Farenhaiti\n");
        celsius = 0;
        while (celsius <= 100) {
          printf("%.2f      %.2f\t\n", celsius, fahrenheit);
          celsius = celsius + 5;
          fahrenheit = (1.8 * celsius) + 32; }
      case '4':
        printf("Hvala na koristenju programa.\n");
      break;
      default:
        printf("Pogresan unos, pokusajte ponovo.\n");
      }
    (void)getchar();
  }
  return 0;
}

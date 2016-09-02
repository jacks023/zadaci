#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(void) {
char izbor;
float celsius, fahrenheit;

while(izbor !='3') {
printf("Sta zelite da konvertujete?:\n");
printf("\n----------------------------");
printf("\n1. Iz Celzijusa u Farenhaite\n");
printf("2. Iz Farenhaita u Celzijuse\n");
printf("3. Izlaz\n");
printf("Unesite vas izbor: ");

scanf("%c", &izbor);
izbor = getchar();

switch (izbor) {
case '1':
printf("\nUnesite temperaturu u Celzijusima: ");
scanf("%f", &celsius);
fahrenheit = (1.8 * celsius) + 32;
printf("Temperatura u Farenhaitima je: %f\n", fahrenheit);
break;

case '2':
printf("\nUnesite temperaturu u Farenhaitima: ");
scanf("%f", &fahrenheit);
celsius = (5.0/9.0) * (fahrenheit-32);
printf("Temperatura u Celsiusima je: %f\n", celsius);
break;

case '3':

printf("Hvala na koristenju programa.\n");
break;
default:
printf("Pogresan unos, pokusajte ponovo.\n");
return main();
}

(void)getchar();
}
return 0;
}

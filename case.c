#include <stdio.h>
#include <string.h>
int main(){

char unos;
float celsius,fahrenheit;

printf("Sta zelite da konvertujete?:\n");
printf("a) Iz Celzijusa u Farenhaite\n");
printf("b) Iz Farenhaita u Celzijuse\n");

scanf("%c",&unos);

switch (unos)
{
case 'a':

printf("\nUnesite temperaturu u Celzijusima: ");
scanf("%f",&celsius);

fahrenheit = (1.8 * celsius) + 32;
printf("Temperatura u Farenhaitima je: %f\n",fahrenheit);
break;
case 'b':
{

printf("\nUnesite temperaturu u Farenhaitima: ");
scanf("%f",&fahrenheit);

celsius = (5.0/9.0) * (fahrenheit-32);
printf("Temperatura u Celsiusima je: %f\n",celsius);
break;
}
default:
printf("Pogresan unos\n");
break;
}
return 0;
}


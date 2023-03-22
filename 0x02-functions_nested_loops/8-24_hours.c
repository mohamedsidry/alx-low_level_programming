#include "main.h"
#include "_putchar.c"


/**
* jack_bauer - prints time from 00:00 to 23:00
* _putchar - take char input and print it .
* No return value
*
*/

void jack_bauer(void)
{
int h = 0;
int min;
while (h < 24)
{
min = 0;
while (min < 60)
{
_putchar((h / 10) + '0');
_putchar((h % 10) + '0');
_putchar(':');
_putchar((min / 10) + '0');
_putchar((min % 10) + '0');
_putchar('\n');
min++;
}
h++;
}
}

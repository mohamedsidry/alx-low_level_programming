#include "main.h"



/**
*
*
*
*/

void puts2(char *str)
{
  int len = 0;
  int temp;

  while(str[len])

    {
      temp = (int)str[len];
      if(temp % 2 == 0)
	{
	  _putchar(temp);
	}
      
      len++;
    }
  _putchar('\n');
}

#include "main.h"



/**
*
*
*
*
*/


char *rot13(char *str)
{
  int len_src = 0;
  int len_a = 0;
  char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
  char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";


  for (len_src = 0 ; str[len_src] != '\0' ; len_src++)

    {
      for (len_a = 0 ; a[len_a] != '\0' ; len_a++)
	{
	  if(str[len_src] == a[len_a])
	    {
	      str[len_src] = b[len_a];
	      break;
	    }
	}
    }

  /**
  
  while(str[len_src] != '0')
    {
      while (a[len_a] != '\0')
	{
	  if(str[len_src] == a[len_a])
	    {
	      str[len_src] = b[len_a];
	      break;
	    }
	  len_a++;
	}
      
      len_src++;
    }
  */
  return (str);
}

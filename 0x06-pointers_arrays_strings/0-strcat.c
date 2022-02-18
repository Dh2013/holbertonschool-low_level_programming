#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

  char * strncat(char *dest,char *src,)
           {
               size_t dest_len = strlen(dest);
               size_t i;

               for (i = 0 ; src[i] != '\0' ; i++)
                   dest[dest_len + i] = src[i];
               dest[dest_len + i] = '\0';

               return (dest);
           }

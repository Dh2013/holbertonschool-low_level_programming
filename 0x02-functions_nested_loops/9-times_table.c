#include "main.h"
#include<stdio.h>
void times_table(void) 
{
int i,j,n;

for(i = 0;i <= 9;i++)
{ 
for(j=0;j <= 9;j++)
{
n= (i * j);
if(j== 9)
{
	printf("%d\n", n);
}
else
{
	printf("%d, ", n);
}
}
}
}

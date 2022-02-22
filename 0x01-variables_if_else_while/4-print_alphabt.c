#include <stdio.h>
int main() {
    char c;
    for (c = 'A'; c <= 'Z'; ++c)
    {
	    if (c!='e' && c!='q'){

        putchar(c);
	    }
    } 
    putchar('\n');
    return 0;
}

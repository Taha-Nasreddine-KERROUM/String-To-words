#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void backslash_n ( char *s ) {
    char *p = s;
    int i = 0;
    while(*p) {
        while ( *p == ' ' ) ++p;
        if ( *p )
            printf("\n word %d: ", i++);
        while ( *p && (*p != ' ' ) ) putchar(*p++);
    }
}

int main()
{
    char s[100], c;
    printf(" enter a string: ");
    gets(s);
    backslash_n(s);
    return 0;
}

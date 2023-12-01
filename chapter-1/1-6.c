#include <stdio.h>

main(void)
{
    int c;

    c = (getchar() != EOF);
    putchar(c);
    
    return 0;
}
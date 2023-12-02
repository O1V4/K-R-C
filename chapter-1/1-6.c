#include <stdio.h>

main(void)
{
    int c;

    c = (getchar() != EOF);
    printf("%d\n", c);
    
}
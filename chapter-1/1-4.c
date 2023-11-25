#include <stdio.h>

main()
{
    float fahr, cel;
    int lower, upper, step;

    upper = 300;
    step = 20;
    cel = 0;

    while (cel <= upper)
    {
        fahr = (9.0/5.0) * cel + 32.0;
        printf("%3.0f %6.0f\n", cel, fahr);
        cel = cel + step;
    }    

}
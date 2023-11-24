#include <stdio.h>

main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;
    fahr = lower;

    printf("This is the temperature conversion program.\nFrom 20 to 300 fahrenheit are converted to celsius (the supreme unit of temperature):\n");
    while (fahr <= upper) {
        celsius = (5.0/9.0)*(fahr-32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}
#include <stdio.h>

void main(void){
    int cel;

    printf("Celsius\t Fahrenheit\n");
    for (cel = 300; cel >= 0; cel = cel -20){
        printf("%3d\t%6.1f\n", cel, (9.0/5.0)*cel+32);
    }
}
#include <stdio.h>,<math.h>

int main ()
{
    float cels;
    float faren;
    printf("hey, gimme your digits (temerature in celsius) and i'll convert it into farenheit (the devils metric) \n");
    scanf("%f", &cels);

    faren = ((cels * 9)/5) + 32;

    printf("your temperature in the stupid metric (farenheit) is: %.2f", faren);
    return 0
}
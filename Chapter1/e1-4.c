#include<stdio.h>

main()
{
        float fahr, celsius;
        float lower, upper, step;

        lower = 0;
        upper = 300;
        step = 20;

        celsius = lower;
        printf("-------------\n");
        printf("Celsius|Fahr|\n");
        printf("-------------\n");
        while(celsius <= upper)
        {
                fahr = (9.0/5.0)*celsius + 32.0;
                printf("|%6.0f|%4.1f|\n", celsius, fahr);
                celsius = celsius + step;
        }
        printf("-------------\n");
}


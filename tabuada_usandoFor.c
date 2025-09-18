#include <stdio.h>

int main()
{

    for (int i = 1; i <= 10; i++) { // loop interno
    
        for (int j = 1; j <= 10; j++) // loop externo
        {
            printf("%d\n", i * j);
        }

        printf("\n");
    }

    return 0;
}
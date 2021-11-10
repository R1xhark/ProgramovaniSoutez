#include<stdio.h>
#include <time.h>



int units(int* val, int unit_size)
{
    int num = *val / unit_size;
    *val %= unit_size;
    return num;
}

int main()
{
    printf("Zadejte castku: ");

    float amount;
    scanf("%f",&amount);
    int x = (int)(amount * 100.0 + 0.5);

    printf("pocet 1BB Bankovek: %d\n", units(&x, 1 * 100) );
    printf("pocet 4BB Bankovek: %d\n", units(&x, 4 * 100) );
    printf("pocet 13BB bankovek: %d\n", units(&x, 13 * 100) );
    printf("pocet 74BB bankovek: %d\n", units(&x, 74 * 100) );
    printf("Pocet 301BB bankovek: %d\n", units(&x, 301 * 100) );
    printf("Vytvoril Richard Dubny 2.A pro soutez v programovani");
    return 0;
}



  

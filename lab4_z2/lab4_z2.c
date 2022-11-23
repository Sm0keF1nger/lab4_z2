#include <stdio.h>

int main()
{
    int i;
    i = 20;
    double sum;
    sum = 1;
    
    for (i = 20; i <= 80; i += 5) {
        sum *= i;
    }
    printf_s("20*25*30*35...*75*80 = %.lf\n", sum);
    

    
    while (i < 81) {
        sum *= i;
        i += 5;
    }
    printf_s("20*25*30*35...*75*80 = %.lf\n", sum);
    
    
    i = 20;
    sum = 1;
    do {
        sum *= i;
        i += 5;
    } while (i < 81);
    printf_s("20*25*30*35...*75*80 = %.lf\n", sum);
}




#include <stdio.h>
#include <stdlib.h>


void p(){}

int main()
{
    p();
    int i;
    for (i = 0;
    i < 25; i++) {
    printf("%0*d\n",i,
    0);p();p();p();p();
    }
}

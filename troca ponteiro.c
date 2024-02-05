#include <stdio.h>

void trocar(int *x, int *y, int *z){
   int ax = *x;
    *x = *y;
    *y = *z;
    *z = ax;
}

int main() {
 int a, b, c;
    
    a = 1;
    b = 2;
    c = 3;

    trocar(&a,&b,&c);

    printf("Numeros Trocados a = %d, b = %d, c = %d", a, b, c);
    
    return 0;
}

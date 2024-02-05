#include <stdio.h>
#include <string.h>

void inverso(char str[]) {
    int len = strlen(str) ;
    char tmp;
    for (int i = len / 2; i >= 0; i--) {
        tmp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = tmp;
    }
}

int main(void) {
    char str[100];
    
    printf("Digite um numero: \n");
    scanf("%s", str);
    inverso(str);
    printf("%s", str);
}
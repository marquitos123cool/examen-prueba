#include <stdio.h>

extern int strlen_asm(const char*);

int main(){

    char text[256];

    printf("Ingrese una cadena de texto: ");

    fgets(text, sizeof(text), stdin);

    int length = strlen_asm(text);

    printf("Longitud de la cadena: %d\n", length);

    return 0;
}
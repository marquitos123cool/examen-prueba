#include <stdio.h>

extern int sum(int a, int b);
extern int res(int a, int b);
extern int mtp(int a, int b);

int main(void){

    int num1, num2;

    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);

    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);

    printf("ADD: %d\n", sum(num1, num2));
    printf("SUB: %d\n", res(num1, num2));
    printf("MUL: %d\n", mtp(num1, num2));

    return 0;
}
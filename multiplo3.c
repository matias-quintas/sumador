#include <stdio.h>
#define p printf
#define s scanf

int main(void)
{
    int num;
    p("Ingrese un numero: ");
    s("%d", &num);
    if(!(num%3)){
        p("El numero es multiplo de 3");
    }else{
        p("El numero no es multiplo de 3");
    }
}
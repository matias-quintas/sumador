#include <stdio.h>
#define p printf
#define s scanf

int main(void)
{
    int info1, info2;
    int num1, num2, resultado;

    info1 = 1&&2; // Da 1 como valor true ya que el unico false seria 0
    info2 == 120 || 0; // da true porque almenos 120 es 1 o true
    p("ingresa un numero: ");
    s("%d", &num1);
    p("ingresa un numero: ");
    s("%d", &num2);

    if (num1>num2)p("El numero %d es el mayor", num1);else p("El numero %d es el mayor", num2);
    
    
    // ingresar un numero en el teclado y checkear si es multiplo de 3
    // ver si un num es año bisiesto
    // ingresar una edad por teclado y ver si es mayor de edad y ver si es un numero creible
    return 0;
}
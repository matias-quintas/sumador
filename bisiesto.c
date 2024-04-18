#include <stdio.h>
#define p printf
#define s scanf

int main(void)
{
    int num;
    p("Ingrese un año: ");
    s("%d", &num);
    if(!(num%4)){
        p("El año es bisiesto");
    }else{
        p("El numero no es bisiesto");
    }
}
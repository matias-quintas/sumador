#include <stdio.h>
#define p printf
#define s scanf

int main(void)
{
    int edad;
    p("Ingrese una edad: ");
    s("%d", &edad);
    if((edad>0) && (edad<110)){
        if(edad>18){
                p("Es mayor de edad");
        }else{
            p("No es mayor de edad");
        }
    }else{
        p("Ingrese una fecha valida");
    } 
}
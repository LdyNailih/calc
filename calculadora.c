#include <stdio.h>

int main()
{

char operacion;
float op1,op2, resultado;

printf("calculadora \n" );
printf("Escriba operacion \n");
scanf("%f%c%f",&op1,&operacion,&op2);

switch(operacion){

    case '+': resultado=op1+op2; break;
    case '-': resultado=op1-op2: break;
    case '*': resultado=op1*op2; break;
    case '/': resultado=op1/op2; break;
}

printf("=%f \n", resultado);
system("PAUSE");
return 0;

}


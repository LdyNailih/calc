#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct trans {
    int len;
    char datos[2000];



};

void proceso (char *aci, struct trans *tx_in, struct trans *tx_out, struct trans *tx_sa )

{

int op1,op2;
int res=0;
char sim;

sscanf(tx_in -> datos,"%1c%3d%3d", &sim, &op2, &op1);

//printf(" operador: %c ",sim);
//printf(" numero: %d ",op1);
//printf(" numeros: %d ",op2);

//memset(res,0,4);

switch(sim){

    case '+':res=op1+op2; break;

    case '-':res=op2-op1; break;

    case '*':res=op1*op2; break;

    case '/':res=op2/op1; break;

    case 'h':sprintf(aci,"cal00001");

// aci="cal00001";// printf( "ESTO ES : %s \n ",aci); 
    
}

tx_out->len=sprintf(tx_out->datos,"%4d",res);





// tx_in :  tiene la tx de entrada
// aca se hace el proceso de la ts 
//  en tx_out  se debe dejar la tx de salida.
}

#include <stdio.h>
#include <string.h>

struct trans {
    int len;
    char datos[2000];



};

void proceso (char *aci, struct trans *tx_in, struct trans *tx_out, struct trans *tx_sa )

{

int op1,op2,res;
char sim;

sscanf(tx_in -> datos"%1c%3d%3d", &sim, &op2, &op1);

switch(sim){

    case '+':res=op1+op2; break;

    case '-':res=op1-op2; break;

    case '*':res=op1*op2; break;

    case '/':res=op1/op2; break;

}

tx_out->len=sprintf(tx_out->datos,"%4d",res);





// tx_in :  tiene la tx de entrada
// aca se hace el proceso de la ts 
//  en tx_out  se debe dejar la tx de salida.
}

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int ent,prim,seg,ter,cuar,primcuenta,segcuenta,tercuenta,fincuenta;

    printf("Ingrese un entero de 4 cifras: ");
    scanf("%d",&ent);
    prim=ent/1000;
    seg=(ent%1000)/100;
    ter=((ent%1000)%100)/10;
    cuar=((ent%1000)%100)%10;

    primcuenta=prim+seg+ter+cuar;
    segcuenta=primcuenta/10;
    tercuenta=primcuenta%10;
    fincuenta=segcuenta+tercuenta;
    printf("%d",fincuenta);

    return 0;
}

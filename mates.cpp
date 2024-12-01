#include <stdlib.h>
#include <stdio.h>

void main_menu(int x){
    printf("##############################");
    printf("\t\t\t 1.SUMAR \n");
    printf("\t\t\t 2.RESTAR \n");
    printf("\t\t\t 3.MULTIPLICAR \n");
    printf("\t\t\t 4.DIVIDIR \n");
    printf("##############################");

    printf("ELIJA UNA OPCION: ");scamf("%d",&x);
    return x;
}

int main(){

    int sel;
    mai_menu(&sel);

    return 0;
}
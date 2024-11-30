#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

struct perfil{

    int cedula;
    string name, l_name, direccion;
}

void datos();

int main(){

    datos();

    return 0;
}

void datos(){

    char seguir='S';
    struct perfil pj;

    do{

        printf("CEDULA: "); scanf("%d",&pj.cedula);
        fflush(stdin);
        printf("NOMBRE: "); getline(cin,pj.nombre);
        printf("APELLIDO: "); getline(cin,pj.l_name);
        printf("DIRECCION: "); getline(cin,pj.direccion);

        printf("SEGUIR AGRAGANDO GENTE?: "); scanf("%c",&seguir);
    }while(seguir=='S')
}
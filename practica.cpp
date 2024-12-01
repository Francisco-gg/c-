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

    ofstream ofdatos;
    ofdatos.open("INFO.txt",ios::app);

    do{
        printf("CEDULA: "); scanf("%d",&pj.cedula);
        fflush(stdin);
        printf("NOMBRE: "); getline(cin,pj.name);
        printf("APELLIDO: "); getline(cin,pj.l_name);
        printf("DIRECCION: "); getline(cin,pj.direccion);

        ofdatos<<"CEDULA: "<<pj.cedula<<endl;
        ofdatos<<"NOMBRE: "<<pj.name<<endl;
        ofdatos<<"APELLIDO: "<<pj.l_name<<endl;
        ofdatos<<"DIRECCION: "<<pj.direccion;

        printf("SEGUIR AGREGANDO GENTE?: "); scanf("%c",&seguir);
        seguir=toupper(seguir);
    }while(seguir=='S');
    ofdatos.close();
}
#include <stdio.h>
#include <stdlib.h>

struct personaje1{

    const char* name="Mago";
    int hp=100;
    float resistance=0.07;
    int attack=10;
}Mago;

struct personaje2{

    const char* name="Luchador";
    int hp=150;
    float resistance=0.12;
    int attack=15;
}Luchador;

int main(){

    int rounds=1, winner;
    
    do{

        printf("\nRound %d:\n", rounds);
        printf("%s HP: %d",Mago.name, Mago.hp);
        printf("\n%s HP: %d \n",Luchador.name, Luchador.hp);
        getchar();
        printf("%s ataca a %s \n", Mago.name, Luchador.name);

        Luchador.hp-= Mago.attack * (1-Luchador.resistance);

        if(Luchador.hp<0){
            Luchador.hp=0;
            winner=1;
        } 

        if (Luchador.hp<112)
        {
            Luchador.resistance=0.15;
        }
    
        printf("%s HP: %d \n", Luchador.name, Luchador.hp);
        getchar();
        printf("%s ataca a %s \n", Luchador.name, Mago.name);

        Mago.hp-= Luchador.attack * (1-Mago.resistance);

        if(Mago.hp<0){
            Mago.hp=0;
            winner=2;
        }

        if(Mago.hp<75)
        {
            Mago.attack=15;
            Mago.resistance=0.1;
        }

        if (Mago.hp<50)
        {
            Mago.attack=20;
            Mago.resistance=0.05;
        }
        
        printf("%s HP: %d \n", Mago.name, Mago.hp);
        getchar();
        rounds++;

    }while (Mago.hp>0 && Luchador.hp>0);
    
    switch (winner)
    {
    case 1:
        printf("El ganador es: %s", Mago.name);
        break;
    case 2:
        printf("El ganador es: %s", Luchador.name);
        break;
    default:
        break;
    }

    return 0;
}
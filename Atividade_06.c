#include <stdio.h>

// sem usar ponteiros
/* Enunciado:
Elabore um programa que receba um nome completo 
por exemplo "Joaquim Pedro Alves" e retorne configurado 
para uma referência conforme apresentado abaixo:
ALVES J. P.
*/
int main(){

    char nome[50];
    char sobrenome[50], j;
    int i=0;


    printf("Informe apenas o primeiro nome:\n");
    scanf(" %[^\n]s",&nome);

    while(i<strlen(nome)){

        if(nome[i] == ' '){
            j = nome[i+1];
        }
        i++;
    }

    printf("Agora Informe o sobrenome: ");
    scanf(" %[^\n]s",&sobrenome);

    printf("+-------------------------------+\n");
    printf("|            RETORNA            |\n");
    printf("|   Referencia: %s, %c. %c.     |\n", sobrenome,nome[0],j);
    printf("+-------------------------------+");

    
    return 0;
}
/*
Aluno: Oziel da Silva Freitas
Atividade: Simulação de Desativação de Bomba
*/

#include <stdio.h>
#include <unistd.h> // Biblioteca usada para a função sleep()

int main()
{
    int iContador;

    printf("=== Sistema de Desativacao de Bomba ===\n\n");

    // Laço for usado para fazer a contagem regressiva de 10 até 0
    for (iContador = 10; iContador >= 0; iContador--)
    {
        printf("Tempo restante: %d\n", iContador);

        // Pausa de 1 segundo entre cada número
        sleep(1);
    }

    printf("\nBomba desativada com sucesso!\n");

    return 0;
}
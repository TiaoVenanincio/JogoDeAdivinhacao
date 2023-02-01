#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
#include <string.h>

//Protótipos das funções
int gerar_matriz(int matriz[5][5]);
void imprimir_matriz(int matriz[5][5]);
void transpoe_matriz(int matriz[5][5], int transposta[5][5]);
int resultado(char linha[2]);

int main(){

    // Admite o uso de acentuação e caracteres da língua portuguesa
    setlocale(LC_ALL, "Portuguese");

    // Instruções de jogo
    printf("\n");
    printf("Olá! Seja bem-vinde.\n");
    printf("Posso tentar adivinhar o número que você escolher?\n");
    printf("Abaixo estão as instruções do jogo: \n\n");

    printf("    1. Observe a distribuição dos números;\n");
    printf("    2. Escolha um número e informe a linha em que ele se encontra;\n");
    printf("    3. Observe a redistribuição dos números;\n");
    printf("    4. Informe a linha em que ele se encontra agora;\n\n");

    printf("Pronto para começar? Pressione ENTER.");

    // Reconhece a tecla Enter
    char c;
    do{
        c = getch();
    }while(c != 13);


    system("cls");

    int matriz[5][5];
    matriz <- gerar_matriz(matriz);
    imprimir_matriz(matriz);

    int I;
    printf("Insira a linha em que está o número escolhido: ");
    scanf("%d",&I);

    system("cls");

    int transposta[5][5];
    transpoe_matriz(matriz, transposta);
    imprimir_matriz(transposta);

    int J;
    printf("Insira a linha em que está o número escolhido: ");
    scanf("%d",&J);
    printf("\n");

    system("cls");

    printf("\nO número escolhido é.... %d !\n", matriz[I-1][J-1]);
    printf("Se eu acertei, você me deve um açaí, viu??\n\n");

    system("pause");

    return 1;
}


//FUNÇÃO PARA GERAR A MATRIZ 5X5
int gerar_matriz(int matriz[5][5]){
    int elemento=1;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            matriz[i][j] = elemento;
            elemento++;
        }
    }
    return matriz[5][5];
}

void imprimir_matriz(int matriz[5][5]){
    int contador=0;
    for(int i=0;i<5;i++){
        if(i==0)
            printf("\n1.  ");
        else if(i==1)
            printf("\n2.  ");
        else if(i==2)
            printf("\n3.  ");
        else if(i==3)
            printf("\n4.  ");
        else if(i==4)
            printf("\n5.  ");

        for(int j=0;j<5;j++){
            printf("%d  ",matriz[i][j]);
        }
    }
    printf("\n\n");
}

void transpoe_matriz(int matriz[5][5], int transposta[5][5]) {

    for (int i=0; i<5; i++) {
        for (int j=0; j<5; j++) {
            transposta[i][j] = matriz[j][i];
        }
    }

 }

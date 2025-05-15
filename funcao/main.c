#include <stdio.h>

int ler_valor_valido(int opcao1, int opcao2, char* texto_opcao1, char* texto_opcao2){
    int opcao_valida;

    do{
        printf("Escolha uma opcao:\n%d - %s\n%d - %s\n", opcao1, texto_opcao1, opcao2, texto_opcao2);
        scanf("%d", &opcao_valida);
    }
    while (opcao_valida != opcao1 && opcao_valida != opcao2);

    return opcao_valida;
}

int main(int argc, char* argv[]){

    int opcao, resposta;

    opcao = ler_valor_valido(1, 0, "Iniciar quiz", "Sair");

    if (opcao == 1){
        do{
        printf("Qual a capital do Brasil?\n1 - Rio de Janeiro\n2 - Brasilia\n");
        scanf("%d", &resposta);
    } 
    while(resposta !=  1 && resposta != 2);

    if(resposta == 2){
        printf("Voce acertou!!\n");
    }
    else {
        printf("Pode melhorar!\n");
    }
}
    
    
    return 0;
}
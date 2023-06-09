#include "sbb.c"

int main(){

    NO *arvore;
    inicializa(&arvore);

    int valor, resposta = 0;

    while(1){
        printf("\n------ ÁRVORE SBB------\n1 - Inserir valor\n2 - Imprimir árvore\n3 - Altura Horizontal\n4 - Altura Vertical\n5 - Pesquisar valor\n0 - Sair\n\n");
        scanf("%d", &resposta);
        if(resposta == 0)
            break;
        else if(resposta == 1){
            printf("Digite o valor:\n");
            scanf("%d", &valor);
            Insere(valor, &arvore);
        }else if(resposta == 2){
            imprime(arvore); 
        }else if(resposta == 3){
            printf("\nA altura Horizontal da árvore é: %d\n", alturaH(arvore)); 
        }else if(resposta == 4){
            printf("\nA altura Vertical da árvore é: %d\n", alturaV(arvore)); 
        }else if(resposta == 5){
            printf("\nDigite o valor para pesquisar:\n"); 
            scanf("%d", &valor);
            pesquisa(valor, &arvore);
        }
        else
            printf("Opção inválida\n");
    }

    return 0;
}
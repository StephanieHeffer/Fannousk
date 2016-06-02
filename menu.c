#include<stdio.h>

int main()
{
/* Menu: Cachorro Quente: código 1 - R$1,5
         hamburguer: código 2 - R$2,00
         cheeseburguer: código 3 - R$2,5
         eggcheeseburguer: código 4- R$3,0
         Refrigerante: código 5 - R$1,5 */

    int hotdog, hamburguer, cheeseburguer, eggburguer, refri, op;
    float thot, tham, tcheese, tegg, trefri, totalzao;

    hotdog=0;
    hamburguer=0;
    cheeseburguer=0;
    eggburguer=0;
    refri=0;
    thot=0;
    tham=0;
    tcheese=0;
    tegg=0;
    trefri=0;
    totalzao=0;

    do{
     printf("\tMenu\n");
     printf("Código 1: Cachorro Quente - R$1,50");
     printf("\nCódigo 2: Hamburguer - R$2,00");
     printf("\nCódigo 3: Cheeseburguer - R$2,50");
     printf("\nCódigo 4: Eggcheeseburguer - R$3,00");
     printf("\nCódigo 5: Refrigerante - R$1,50");
     printf("\nCódigo 0: Fechar o pedido");
     printf("\nPedido: ");
     scanf("%d", &op);

     if (op==0){
        printf("\tCalculando o Total");
    }else if (op==1){
        printf("Cachorro Quente\n");
        hotdog=(hotdog+1);
        thot=(1.50*hotdog);
    }else if (op==2){
        printf("Hamburguer\n");
        hamburguer=(hamburguer+1);
        tham=(2.00*hamburguer);
    } else if (op==3){
        printf("Cheeseburguer\n");
        cheeseburguer=(cheeseburguer+1);
        tcheese=(2.50*cheeseburguer);
    } else if (op==4){
        printf("Eggcheeseburguer\n");
        eggburguer=(eggburguer+1);
        tegg=(3.00*eggburguer);
    } else if (op==5){
        printf("Refrigerante\n");
        refri=(refri+1);
        trefri=(1.50*refri);
    } else{
        printf("\tOpção Inválida\n");
    }
    }
    while (op!=0);
        printf("\n\tDescrição do Pedido");
        if(hotdog!=0){
        printf("\n%d Cachorro Quente: R$%.2f", hotdog, thot);
        } if(hamburguer!=0){
        printf("\n%d Hamburguer: R$%.2f", hamburguer, tham);
        } if(cheeseburguer!=0){
        printf("\n%d Cheeseburguer: R$%.2f", cheeseburguer, tcheese);
        } if(eggburguer!=0){
        printf("\n%d Eggcheeseburguer: R$%.2f", eggburguer, tegg);
        } if(refri!=0){
        printf("\n%d Refrigerante: R$%.2f", refri, trefri);
        }
    totalzao= (thot + tham + tcheese + tegg + trefri);
    printf("\nTotal a pagar: R$%.2f", totalzao);
    printf("\nAcabou!!Felicidades!! Volte Sempre!! =D\n");
return(0);
}

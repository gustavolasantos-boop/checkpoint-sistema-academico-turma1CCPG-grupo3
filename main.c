#include <stdio.h> 

void menu(void){   
    printf("==============================\n");
    printf("SISTEMA EQUIPE XYZ\n");
    printf("==============================\n");
    printf("1 - Inserir notas\n");
    printf("2 - Calcular media\n");
    printf("3 - Verificar situacao\n");
    printf("4 - Exibir resultado\n");
    printf("5 - Calcular derivada\n");
    printf("6 - Sair\n");
    printf("Escolha uma opcao: ");

}

int main(){
    int opcao;
    float nota_1, nota_2, media;


    
    menu();
    scanf("%d", &opcao);
    switch(opcao){
    case 1: 
    printf("--- CALCULADORA DE MEDIA ---\n");
    printf("Digite sua primeira nota: ");
    scanf("%f", &nota_1);
    printf("Digite sua segunda nota: ");
    scanf("%f", &nota_2);
    if(nota_1 < 11 && nota_1 >= 0 && nota_2 < 11 && nota_2 >= 0){
        media = (nota_1 + nota_2)/2;
       printf("A media do aluno e: %.2f. O calculo para o valor da media e (%.2f+ %.2f)/2", media, nota_1, nota_2);

    }else{
        printf("Notas fora do limite apresentadas!");
    }
    break;
    
    case 2:
    media= (nota_1 + nota_2) /2;
    printf(" media calculada:%.2\n", media);
    break;

    

    
     

    }
    return 0;
}

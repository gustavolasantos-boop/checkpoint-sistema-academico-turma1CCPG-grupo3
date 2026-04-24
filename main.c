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
    float nota_1 = 0, nota_2 = 0, media = 0;
    int continuar = 1;
    int notas_inseridas = 0;
    int media_calculada = 0;

while(continuar){
    menu();
    if(scanf("%d", &opcao)!= 1){
        printf("Entrada invalida! Por favor, digite um numero.\n");
        return 1;

    };


    switch(opcao){

    case 1: 
    printf("Digite sua primeira nota: ");
    scanf("%f", &nota_1);

    printf("Digite sua segunda nota: ");
    scanf("%f", &nota_2);

    if(nota_1 < 11 && nota_1 >= 0 && nota_2 < 11 && nota_2 >= 0){
        printf("Notas inseridas com sucesso!\n");
        notas_inseridas = 1;
        media_calculada = 0;

    }else{
        printf("Notas fora do limite apresentadas!");
        notas_inseridas = 0;
    }
    break;
    
    case 2:
    if(notas_inseridas == 0){
        printf("Por favor, insira as notas primeiro!\n");
    }else{
        media = (nota_1 + nota_2) / 2;
        media_calculada = 1;
        printf("Media calculada: %.2f\n", media);
    }
    break;

    case 3:
    if(media_calculada == 0){
        printf("Por favor, calcule a media primeiro!\n");
    }else if(media >= 6){
        printf("Aprovado\n");
    }else{
        printf("Reprovado\n");
    }
    break;
     
    case 4:
    if(media_calculada == 0){
        printf("Por favor, calcule a media primeiro!\n");
    }else{
        printf("Nota1: %.2f\n", nota_1);
        printf("Nota2: %.2f\n", nota_2);
        printf("Media: %.2f\n", media);
    }
    break;


    case 5:{
    float a, b, c;

    printf("Digite o valor de a: ");
    scanf("%f", &a);

    printf("Digite o valor de b: ");
    scanf("%f", &b);

    printf("Digite o valor de c: ");
    scanf("%f", &c);

    printf("f'(x) = %.2fx + %.2f\n", 2*a, b);

    break;
}

    case 6:
    printf("Saindo...\n");
    continuar = 0;
    break;

    default:
    printf("Opcao invalida!\n");
    
    }
}
    
    return 0;
}

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
    setlocale(LC_ALL,"");
    int operador, telefone, nascimento, cpf, dataE, pagamento, dataS, nH, operador2, operador3, sabor1, quarto, operador4, opcao, opcao2, cama, numero, cama2;
    char nome[50], endereco[50];
    float valor;
    
    do {
    printf("Bem vindo ao Hotel Vila Olímpia!\n");
    printf("1 - Fazer check in:\n");
    printf("2 - Solicitar serviço de quarto:\n");
    printf("3 - Fazer pedido:\n");
    printf("4 - Sair:\n");
    scanf("%d", &operador);
    
    switch (operador) {
        case 1:
        printf("Nome completo:\n");
        scanf("%s", nome);
        printf("Endereço residencial:\n");
        scanf("%s", endereco);
        printf("Número de telefone:\n");
        scanf("%d", &telefone);
        printf("Data de nascimento:\n");
        scanf("%d", &nascimento);
        printf("Informe seu CPF:\n");
        scanf("%d", &cpf);
        printf("Informe a data e horário de entrada:\n");
        scanf("%d", &dataE);
        printf("Informe a data e horário de saída:\n");
        scanf("%d", &dataS);
        printf("Informe o número de hóspedes no quarto:\n");
        scanf("%d", &nH);
        printf("Escolha seu quarto (Todos quartos dispõem de Televisão,Ar condicionado, banheiro e varanda todos os banheiros dispõem de secador, chuveiro ou banheira):\n");
        printf("1 - Quarto Duplo (1 cama de casal):\n");
        printf("2 - Quarto Familiar (1 cama de casal e 2 de solteiro:\n");
        scanf("%d", &cama);
        switch (cama) {
            case 1:
            printf("R$503,20 diária\n Cama extra:R$ 125,80\n");
            break;
            
            case 2:
            printf("R$660,45 diária\n Cama extra:R$ 125,80\n");
            break;
            return 1;
        }
        printf("Deseja quantas camas extras?\n");
        scanf("%d", &cama2);
       
        if ((cama == 1) && (cama2 > 0))
        {
        valor = 503.20 + (cama2 * 125.80);
        printf("O valor total é de %2.f \n",valor);
        }
        else if ((cama == 2) && (cama2 > 0))
        {
        valor = 660.45 + (cama2 * 125.80);
        printf("O valor total é de %2.f \n",valor);
        }
        else if (cama == 1)
        {
            printf("O valor total é de R$503,20.\n");
        }
        else
        {
            printf("O valor total é de R$660,45.\n");
        }
        
        printf("Forma de pagamento:\n");
        printf("1 - Débito.\n");
        printf("2 - Crédito.\n");
        printf("3 - Pix.\n");
        printf("4 - Dinheiro.\n");
        scanf("%d", &pagamento);
        break;
        
        case 2:
        printf("1 - Itens de higiene pessoal:\n");
        printf("2 - Roupas de cama e toalhas extras:\n");
        printf("3 - Serviço de lavanderia:\n");
        printf("4 - Assistências diversas:\n");
        scanf("%d", &operador2);
        printf("Informe o número do seu quarto:\n");
        scanf("%d", &quarto);
        break;
        
        case 3:
        printf("1 - Café da manhã:\n");
        printf("2 - Almoço e jantar:\n");
        printf("3 - Petiscos e lanches:\n");
        printf("4 - Sobremesas:\n");
        printf("5 - Bebidas:\n");
        scanf("%d", &operador3);
        
        switch (operador3) {
        case 1:
        printf("1 - Omelete.\n");
        printf("2 - Panqueca Americana.\n");
        printf("3 - Pães.\n");
        printf("4 - Iogurte com granola.\n");
        scanf("%d", &operador4);
        break;
        
        case 2:
        printf("1 - Salada caeser.\n");
        printf("2 - Frango grelhado.\n");
        printf("3 - Bife grelhado.\n");
        printf("4 - Massa\n");
        scanf("%d",&opcao);
        break;
        
        case 3:
        printf("1 - Sanduiche.\n");
        printf("2 - Hamburguer.\n");
        printf("3 - Tabua de frios.\n");
        scanf("%d", &opcao);
        break;
        
        case 4:
        printf("1 - Cheesecake.\n");
        printf("2 - Torta de Maça.\n");
        printf("3 - Mousse de chocolate.\n");
        scanf("%d", &opcao);
        break;
        
        case 5:
        printf("1 - Café.\n");
        printf("2 - Chá.\n");
        printf("3 - Sucos.\n");
        printf("4- Refrigerantes.\n");
        printf("5 - Água.\n");
        printf("6 - Vinhos.\n");
        printf("7 - Drinks.\n");
        scanf("%d", &opcao2);
        break;
        }
        
        switch (opcao2) {
            case 1:
            printf("1 - Café com açúcar.\n");
            printf("2 - Café sem açúcar.\n");
            scanf("%d", &opcao);
            break;
            
            case 2:
            printf("1 - Chá branco.\n");
            printf("2- Chá preto.\n");
            printf("3 - Chá verde.\n");
            scanf("%d", &opcao);
            break;
            
            case 3:
            printf("1 - Suco de laranja.\n");
            printf("2 - Suco de morango.\n");
            printf("3 - Suco de limão.\n");
            printf("4 - Suco de uva.\n");
            scanf("%d", &opcao);
            break;
            
            case 4:
            printf("1 - Coca-Cola.\n");
            printf("2 - Guarana.\n");
            printf("3 - Fanta Uva.\n");
            printf("4 - Fanta Laranja.\n");
            scanf("%d", &opcao);
            break;
            
            case 6:
            printf("1 - Branco.\n");
            printf("2 - Tinto.\n");
            printf("3 - Espulmante.\n");
            scanf("%d", &opcao);
            break;
            
            case 7:
            printf("1 - Martini.\n");
            printf("2 - Mojito.\n");
            printf("3 - Caipirinha.\n");
            scanf("%d", &opcao);
            break;
        }
    
        
        switch (operador4) {
            case 1:
            printf("Escolha o sabor do omelte:\n");
            printf("1 - Queijo.\n");
            printf("2 - Presunto.\n");
            printf("3 - Cogumelos.\n");
            printf("4 - Espinafre.\n");
            scanf("%d", &sabor1);
            break;
        }
         
        printf("Informe o número do quarto:\n");
        scanf("%d", &quarto);
        printf("Seu pedido está a caminho!");
        
        case 4:
          printf("Sair\n");
        break;
        
        default:
        printf("Opção invalida! Tente novamente.\n");
    }
    printf("\nPressione Enter para continuar");
       getchar(); //funciona como o scanf
       getchar();
       
       system("clear");
    }while (operador != 4);
    return 0;
    }
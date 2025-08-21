
#include <stdio.h> 
#include <locale.h>//biblioteca de indiomas 
int main() {
    setlocale(LC_ALL, "");
printf("Olá turma\n");
printf("Em que posso ajudar?\n");
printf("Gere minha nota legal!\n");
printf("===================================\n");
printf("             NOTA LEGAL        \n");
printf("=====================================\n");
printf("Caderno             02     30,00\n");
printf("lapis               01     7,00\n");
printf("======================================\n");
printf("total......................37,00\n");
printf("%-15s %03i %7.2f\n","caneta",3,11.75);
printf("%-15s %03i %7.2f\n","borracha",4,100.00);

    return 0;
}
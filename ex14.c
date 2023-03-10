#include <stdio.h> 
int main() 
{ 
    char nome[50], sexo; 
    float nota1, nota2, nota3, media; 
    printf("Digite a média para aprovação: "); 
    scanf("%f", &media); 

    printf("Digite o nome do aluno: "); 
    scanf("%s", nome); 

    printf("Digite o sexo do aluno (M/F): "); 
    scanf(" %c", &sexo);

    printf("Digite as 3 notas do aluno: "); 
    scanf("%f %f %f", &nota1, &nota2, &nota3);

    float soma = (nota1 + nota2 + nota3) / 3;

    if (soma >= media) {  
        if(sexo == 'M') {  
            printf("O aluno %s foi aprovado com média %.2f\n", nome, soma);  
        } else {  
            printf("A aluna %s foi aprovada com média %.2f\n", nome, soma);  
        }  

    } else {  

        if(sexo == 'M') {  
            printf("O aluno %s foi reprovado com média %.2f\n", nome, soma);  

        } else {  

            printf("A aluna %s foi reprovada com média %.2f\n", nome, soma);  

        }  

    }    

 return 0;    
}
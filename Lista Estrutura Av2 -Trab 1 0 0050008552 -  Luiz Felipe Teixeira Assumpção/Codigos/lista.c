/**************************************
* Trabalho 1-AV2 de Estrutura de Dados I
* Curso de Sistemas da informacao
* Aluno: Luiz Felipe Teixeira Assumpção - matricula: 0050008552
* Listas
***************************************/
#include <stdio.h>
#include <stdlib.h>
#include "listas.h"

int main()

{	
	//Declarando 2 listas
	
	int x;
    Lista *l1,*l2; 
    
    //Lista 1
    
    l1=lst_cria();
    
	//Inserindo os valores na lista
	
    l1=lst_insere(l1,14);
    l1=lst_insere(l1,4);
    l1=lst_insere(l1,8);
    l1=lst_insere(l1,20);
    l1=lst_insere(l1,10);
    l1=lst_insere(l1,15);
    l1=lst_insere(l1,2);
    l1=lst_insere(l1,9);
    l1=lst_insere(l1,50);
    l1=lst_insere(l1,100);
    
    //Imprimi a Lista normal
    
    printf("\nLista Completa:"); 
   
    
    puts("\n\n");
	lst_imprime(l1);
    puts("\n\n");

    
    //Separa apartir do valor pedido
    
    l2=lst_cria();
    puts("Apartir de qual valor voce quer separar?\n");
    scanf("%d",&x);
	l2=separar(l1,x);
	while (l2 == NULL)
	{
    puts("Apartir de qual valor voce quer separar?\n");
    scanf("%d",&x);
    l2=separar(l1,x);
	}
	printf("Separado apartir do %d:\n",x);   
    
    //Segunda lista apos separação
    
    puts("\n\n");
    lst_imprime(l1);
    puts("\n\n");
	lst_imprime(l2);
    puts("\n\n");

return 0;
}

/**************************************
* Trabalho 1-AV2 de Estrutura de Dados I
* Curso de Sistemas da informacao
* Aluno: Luiz Felipe Teixeira Assump��o - matricula: 0050008552
* Listas
***************************************/

#include <stdio.h>
#include <stdlib.h>

struct lista{
       int info;
       struct lista *prox;
       };   
       
       typedef struct lista Lista;



//Fun��o de cria��o da lista

Lista * lst_cria()
{    
     return NULL;
}

//Fun��o para inserir valores na lista

Lista *lst_insere(Lista *p,int valor)
{
    Lista *a=(Lista*) malloc(sizeof(Lista));
    a->info = valor;
    a->prox= p;
   return a;
} 

//Fun��o somente para imprimir

void lst_imprime(Lista *p)
{
    Lista *a;
    for(a=p;a!=NULL;a=a->prox)
    
    {
    	printf("%d",a->info);
    	if(a->prox!=NULL)
    		printf(" -> ");
    	else
    		printf(" -> NULL\n");
	}

}

//Fun��o para busca, retornando a lista na posi��o do encontrado ou NULL caso n�o exista

Lista *lst_buscar(Lista *p, int chv)
{
    Lista *a;
    for(a=p;a!=NULL;a=a->prox)
    {
       if(chv==a->info)
         return a;
    }
    
    return NULL;
}


//Fun��o para separar apartir de algum n�mero

Lista *separar(Lista *l,int n)
{
	Lista *a=l,*b=NULL;
	a=lst_buscar(l,n);
	if(a==NULL)
	{
		puts("Valor nao encontrado ! Favor informar novamente um numero valido na lista acima!");
		return NULL;
	}
	else
	{
		if(a->prox==NULL)
		{
			return b;
		}
		else
		{
			b=a->prox;
		}
		a->prox=NULL;
		return b;
		 
	}
	
	
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct node
{
    char *nome_inicial[47];
    int num;
    struct node *next;
} node;

int guiches[] = {1, 2, 3, 4, 5};

int insertName();
void call(int qntd);
void unload();

int main(int argc, char const *argv[])
{
    // Inicializado algorítimo de randomização para definir o guichê disponível
    srand(time(NULL));
    
    int qntd = sizeof(guiches) / sizeof(guiches[0]);
    int chamadas = 0;
    
    node *list = NULL;
    node *n = malloc(sizeof(node));
    if (n == NULL)
    {
        return 1;
    }
    
    insertName();

    call(qntd);

    unload();

    return 0;
}

int insertName()
{
    // Guardar o nome do usuário digitado no sistema
    char *nome_digitado = malloc(sizeof(char) * 47);
    if (nome_digitado == NULL)
    {
        return 1;
    }
    printf("Digite o nome inicial do paciente: ");
    fgets(nome_digitado, sizeof(nome_digitado), stdin);
    // Se o nome digitado der overflow no nome_digitado, deve informar um alerta e pedir para digitar o nome de novo
    /*if (sizeof(nome_digitado) / sizeof(nome_digitado[0]) > 47);
    {

    }*/
   return 0; 
}

void call(int qntd)
{
    printf("Paciente INSERIR NOME AQUI, dirigir-se para guichê %i\n", guiches[rand() % qntd]);
}

void unload()
{
    printf("All memory has been free'ed\n");
}
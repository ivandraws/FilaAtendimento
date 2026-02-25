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

void insertName();

void call(int qntd);

int main(int argc, char const *argv[])
{
    // Inicializado algorítimo de randomização para definir o guichê disponível
    srand(time(NULL));
    int qntd = sizeof(guiches) / sizeof(guiches[0]);

    call(qntd);

    return 0;
}

void insertName()
{
    // Guardar o nome do usuário digitado no sistema
    char *nome_digitado;
    printf("Digite o nome inicial do paciente: ");
    scanf("%s", nome_digitado);
    // Se o nome digitado der overflow no nome_digitado, deve informar um alerta e pedir para digitar o nome de novo
    if (sizeof(nome_digitado) / sizeof(nome_digitado[0]) > 47);
    {

    }
}

void call(int qntd)
{
    printf("Paciente INSERIR NOME AQUI, dirigir-se para guichê %i\n", guiches[rand() % qntd]);
}
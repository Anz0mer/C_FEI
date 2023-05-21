#include <stdio.h>

// Enum com os meses do ano
enum Mes {
    JANEIRO, FEVEREIRO, MARCO, ABRIL, MAIO, JUNHO,
    JULHO, AGOSTO, SETEMBRO, OUTUBRO, NOVEMBRO, DEZEMBRO
};

// Struct para armazenar os dados de data
struct Data {
    int dia;
    enum Mes mes;
    int ano;
};

// Struct para armazenar os dados da pessoa
struct Pessoa {
    char nome[50];
    char sobrenome[50];
    struct Data dataNascimento;
};

// Função para ler os dados de uma pessoa do teclado
void lerPessoa(struct Pessoa *pessoa) {
    printf("Digite o nome: ");
    scanf("%s", pessoa->nome);
    
    printf("Digite o sobrenome: ");
    scanf("%s", pessoa->sobrenome);
    
    printf("Digite o dia de nascimento: ");
    scanf("%d", &(pessoa->dataNascimento.dia));
    
    printf("Digite o mês de nascimento (1-12): ");
    scanf("%d", &(pessoa->dataNascimento.mes));
    pessoa->dataNascimento.mes--; // Ajuste para usar o enum (0-11)
    
    printf("Digite o ano de nascimento: ");
    scanf("%d", &(pessoa->dataNascimento.ano));
}

// Função para converter o valor do mês para o texto com o nome do mês
const char* nomeMes(enum Mes mes) {
    switch (mes) {
        case JANEIRO:   return "Janeiro";
        case FEVEREIRO: return "Fevereiro";
        case MARCO:     return "Março";
        case ABRIL:     return "Abril";
        case MAIO:      return "Maio";
        case JUNHO:     return "Junho";
        case JULHO:     return "Julho";
        case AGOSTO:    return "Agosto";
        case SETEMBRO:  return "Setembro";
        case OUTUBRO:   return "Outubro";
        case NOVEMBRO:  return "Novembro";
        case DEZEMBRO:  return "Dezembro";
        default:        return "Mês inválido";
    }
}

// Função para exibir as informações de uma pessoa
void exibirPessoa(struct Pessoa pessoa) {
    printf("Nome: %s\n", pessoa.nome);
    printf("Sobrenome: %s\n", pessoa.sobrenome);
    printf("Data de Nascimento: %d de %s de %d\n",
           pessoa.dataNascimento.dia,
           nomeMes(pessoa.dataNascimento.mes),
           pessoa.dataNascimento.ano);
    printf("\n");
}

int main() {
    struct Pessoa pessoas[12];
    
    // Loop para receber as 12 pessoas
    for (int i = 0; i < 12; i++) {
        printf("=== Cadastro da pessoa %d ===\n", i+1);
        lerPessoa(&pessoas[i]);
        printf("\n");
    }
    
    // Loop para exibir as informações das pessoas cadastradas
    printf("=== Informações das pessoas cadastradas ===\n");
    for (int i = 0; i < 12; i++) {
        printf("Pessoa %d:\n", i+1);
        exibirPessoa(pessoas[i]);
    }
    
    return 0;
}

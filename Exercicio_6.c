#include <stdio.h>

#define MAX_ALUNOS 100

typedef struct {
    int matricula;
    float notas[3];
    float media;
    char situacao;
} Aluno;

int main() {
    Aluno turma[MAX_ALUNOS];
    int quantidadeAlunos, i;
    float mediaTurma = 0;
    int aprovados = 0, reprovados = 0;

    printf("Digite a quantidade de alunos: ");
    scanf("%d", &quantidadeAlunos);

    // Coleta os dados dos alunos
    for (i = 0; i < quantidadeAlunos; i++) {
        printf("\nAluno %d:\n", i + 1);
        printf("Matrícula: ");
        scanf("%d", &turma[i].matricula);
        printf("Nota 1: ");
        scanf("%f", &turma[i].notas[0]);
        printf("Nota 2: ");
        scanf("%f", &turma[i].notas[1]);
        printf("Nota 3: ");
        scanf("%f", &turma[i].notas[2]);

        // Calcula a média do aluno
        turma[i].media = (turma[i].notas[0] + turma[i].notas[1] + turma[i].notas[2]) / 3;

        // Verifica se o aluno foi aprovado ou reprovado
        if (turma[i].media >= 6.0)
            turma[i].situacao = 'A'; // Aprovado
        else
            turma[i].situacao = 'R'; // Reprovado

        // Atualiza a média da turma
        mediaTurma += turma[i].media;

        // Conta a quantidade de aprovados e reprovados
        if (turma[i].situacao == 'A')
            aprovados++;
        else
            reprovados++;
    }

    // Exibe as médias individuais e a situação de cada aluno
    printf("\nMédias individuais e situação:\n");
    for (i = 0; i < quantidadeAlunos; i++) {
        printf("Aluno %d - Média: %.2f - Situação: %c\n", i + 1, turma[i].media, turma[i].situacao);
    }

    // Calcula a média da turma
    mediaTurma /= quantidadeAlunos;

    // Exibe a média da turma e a quantidade de aprovados e reprovados
    printf("\nMédia da turma: %.2f\n", mediaTurma);
    printf("Quantidade de alunos aprovados: %d\n", aprovados);
    printf("Quantidade de alunos reprovados: %d\n", reprovados);

    return 0;
}

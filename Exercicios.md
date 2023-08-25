*EXERCÍCIO 1*

Implemente o "hello, world"
Dentro da função main, escreva um trecho de código que:
possui duas variáveis inteiras (tipo int) com valores definidos por você
possui uma terceira variável que deve receber o resultado da soma das outras duas
imprima o valor de cada variável
exiba o resultado das operações de soma, subtração, divisão e multiplicação
exiba o resultado do incremento, decremento e resto de divisão
Faça o mesmo exercício usando ponto flutuante
Dentro da função main, defina uma variável do tipo inteiro e exiba ela como todos os outros tipos que foram vistos na teoria
Usando o que você já sabe sobre o printf, tente usar o scanf para ler algumas variáveis do teclado.
Crie uma variável e não atribua nenhum valor a ela. Imprima o valor desta variável

*EXERCÍCIO 2*

Implemente uma função que recebe um número e imprime o resultado deste número multiplicado pelos valores de 0 a 10;
Implemente uma função que receba um valor inteiro e retorna 1 se o valor é ímpar e 0 se o valor é par;
Implemente uma função que recebe um valor inteiro e retorna 1 se o valor é positivo, -1 se for negativo e 0 se for igual a 0;
Implemente uma função que recebe 2 valores inteiros e retorna o maior e uma função que retorne o menor. Usando estas função, implemente a versão delas que recebe 3 e 4 valores;
Faça um código que receba do usuário uma operação aritmética e dentro de um loop leia números até que o usuário digite 0. Imprima o resultado de aplicar a mesma operação usando todos os números que o usuário digitou, menos o 0;

*EXEECÍCIO 5*

Faça um programa em C para armazenar nome, sobrenome e data de nascimento de uma pessoa. Seu programa deve conter:

enum com os meses do ano
struct para armazenar os dados de data (dia, mês e ano), sendo que o mês deve usar o enum criado
struct para armazenar os dados da pessoa: nome, sobrenome e data de nascimento, usando o struct de data
Para ficar mais fácil de fazer o resto do código:
Implemente uma função que recebe um struct de pessoa, leia do teclado as informações e armazene no struct passado
Implemente uma função que recebe um struct e exibe todas as informações armazenadas. Esta função deve fazer a conversão do valor do mês para o texto com o nome do mês
Na main, faça um array de structs de pessoa de tamanho 12 e cadastre pessoas com nascimento em meses diferentes para testar a conversão dos meses. Faça um loop para receber as 12 pessoas e em outro loop mostre as informações das pessoas cadastradas.

*EXERCÍCIO 6*

Desenvolva um programa que calcula a média desta disciplina para todos os alunos de uma turma. O programa deve:

armazenar o número de matrícula, as 3 notas em um array, a média final e se o aluno foi aprovado em uma variável char;
perguntar para o usuário a quantidade de alunos no início da execução;
armazenar os dados de todos os alunos antes de exibir a média;
exibir todas as médias no final do programa.
exibir a média da turma e a quantidade de alunos aprovados e reprovados

*EXERCÍCIO 7*

Desenvolva um programa que recebe do usuário 2 números inteiros e uma operação representada por números inteiros em um menu de opções. O programa deve receber estes valores, realizar a operação esperada e exibir o resultado. Em seguida, deve realizar o mesmo processo novamente se o usuário desejar.

O seu programa deve permitir quem o usuário realize as seguintes operações:
Soma
Subtração
Multiplicação
Divisão
Resto
Potência
sendo que cada um destas operações deve receber 2 números inteiros e retornar um ponteiro para um inteiro que contém o resultado (a exibição do resultado não deve ser realizada dentro da função).

Na função main, use um array de ponteiros de funções (evite usar condicionais para executar a função desejada) e faça todo o processo descrito anteriormente.

*EXERCÍCIO 8*

Crie uma função chamada uniao() que receba como entrada dois vetores de inteiros (x1 e x2), suas respectivas quantidades de elementos (n1 e n2) e um ponteiro para um inteiro n3.

A função retornar criar um terceiro vetor x3 , alocado dinamicamente, contendo a união de x1 e x2 e armazenar o tamanho do vertor x3 na variável n3.

Por exemplo, sendo x1 = {1, 3, 5, 6, 7} e x2 = {1, 3, 4, 6, 8}, então x3={1, 3, 5, 6, 7, 4, 8} e n3 = 7.

Para este exercício, os arquivos main.c e exercicio.h são fornecidos, então só é necessário implementar as funções no arquivo exercicios.c.

*EXERCÍCIO 11*

Implemente uma lista ligada com as seguintes funções:

adiciona elemento
remove elemento
busca elemento
calcula tamanho
exibe lista

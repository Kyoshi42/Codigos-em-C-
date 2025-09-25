Algoritmo "Problema pagamento"
// Disciplina   : Matemática Itinerário - Programação
// Professor   : Igo Anderson Santos Oliveira
// Autor(a)    : Karla Beatriz Costa Silva
// Data atual  : 28/05/2025
Var
nome:caractere
salario_hr:real
tempo_hr:inteiro
pagamento:real
Inicio
escreval("Qual o nome do funcionário?")
leia(nome)
escreval("Quanto ele recebe por hora trabalhada?")
leia(salario_hr)
escreval("Quantas horas ele trabalhou?")
leia(tempo_hr)
pagamento <- salario_hr*tempo_hr
escreval("O pagamento de ",nome," é de R$",pagamento:6:2,".")
Fimalgoritmo
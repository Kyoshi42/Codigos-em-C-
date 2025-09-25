Algoritmo "Problema terreno"
// Disciplina   : Matemática Itinerário - Módulo de Programação
// Professor   : Igo Anderson Santos Oliveira 
// Descrição   : Atividade Estrutura sequencial
// Autor(a)    : Karla Beatriz Costa Silva
// Data atual  : 22/05/2025
Var
larg,comp,metroq,area,preco:real
Inicio
escreva("Digite o valor da largura:")
leia(larg)
escreva("Digite o valor do comprimento:")
leia(comp)
escreva("Digite o valor do metro quadrado:")
leia(metroq)
area <- larg*comp
preco <- metroq*area
escreval("Área do terreno =",area:5:2)
escreval("Preço do terreno =", preco:5:2)
Fimalgoritmo
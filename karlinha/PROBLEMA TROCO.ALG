Algoritmo "Problema troco"
// Disciplina   : Matemática Itinerário - Módulo de Programação
// Professor   : Igo Anderson Santos Oliveira 
// Autor(a)    : Karla Beatriz Costa Silva
// Data atual  : 28/05/2025
Var
preco:real
quant:inteiro
dinheiro:real
troco:real
Inicio
escreval("Qual o preço do produto comprado?")
leia(preco)
escreval("Quantas unidades do produto o cliente pegou?")
leia(quant)
escreval("Quanto em dinheiro o cliente entregou para fazer o pagamento?")
leia(dinheiro)
troco<-(dinheiro-(preco*quant))
escreval("O valor do troco que o cliente deve receber é de ",troco," reais.")
Fimalgoritmo
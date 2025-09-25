Algoritmo "Problema retângulo"
// Disciplina   : Matemática Itinerário - Módulo de Programação
// Professor   : Igo Anderson Santos Oliveira 
// Descrição   : Mostrar o valor da área, perímetro e diagonal do retângulo
// Autor(a)    : Karla Beatriz Costa Silva
// Data atual  : 27/05/2025
Var
b:real
h:real
area,perimetro,diagonal:real
Inicio
escreva("Digite a base do retângulo:")
leia(b)
escreva("Digite a altura do retângulo:")
leia(h)
area <- b * h
perimetro <- 2 * b + 2 * h
diagonal <- RaizQ(b^2+h^2)
escreval("A area do retangulo vale ",area:10:4)
escreval("O perímetro do retângulo vale ",perimetro:10:4)
escreval("A diagonal do retângulo vale ",diagonal:10:4)
Fimalgoritmo
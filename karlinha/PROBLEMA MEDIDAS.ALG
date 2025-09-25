Algoritmo "Problema medidas"
// Disciplina   : Matemática Itinerário - Módulo de Programação
// Professor   : Igo Anderson Santos Oliveira 
// Autor(a)    : Karla Beatriz Costa Silva
// Data atual  : 28/05/2025
Var
A,B,C:real
area_q:real
area_tri:real
area_trap:real
Inicio
escreval("Atribua um valor para A:")
leia(A)
escreval("Atribua um valor para B:")
leia(B)
escreval("Atribua um valor para C:")
leia(C)
area_q <- (A^2)
area_tri <- ((A*B)/2))
area_trap <- (((A+B)*C)/2)
escreval("A área do quadrado de lado A = ", area_q:10:4)
escreval("A área do triângulo retângulo de base A e altura B = ", area_tri:10:4)
escreval("A área do trapézio de bases A e B e altura C = ", area_trap:10:4)
Fimalgoritmo
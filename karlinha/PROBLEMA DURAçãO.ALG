Algoritmo "Problema duração"
// Disciplina   : Matemática Itinerário - Módulo de Programação
// Professor   : Igo Anderson Santos Oliveira 
// Autor(a)    : Karla Beatriz Costa Silva
// Data atual  : 28/05/2025
Var
tempo_seg_in:inteiro
tempo_seg_fim:inteiro
tempo_min:inteiro
tempo_hr:inteiro
Inicio
escreval("Digite um valor para um tempo em seg:")
leia(tempo_seg_in)
tempo_seg_fim <- tempo_seg_in mod 60
tempo_min <- (tempo_seg_in\60) mod 60
tempo_hr <- ((tempo_seg_in)\60)\60
escreval("Esse tempo equivale a ",tempo_hr," horas, ",tempo_min," minutos e ",tempo_seg_fim," segundos.")
Fimalgoritmo
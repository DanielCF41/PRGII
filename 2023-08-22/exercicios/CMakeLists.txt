cmake_minimum_required(VERSION 3.26)
project(exercicios C)

set(CMAKE_C_STANDARD 17)

add_executable(exercicios main.c
        funcoes.h
        fat_it.c
        fat_rec.c
        sequencia_fibonacci.c
)

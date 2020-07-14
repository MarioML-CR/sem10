//
// Created by Mario Martinez on 14/07/20.
//

#include "Gestor.h"
/**
 *
 * @param info
 * @param n
 * @param origem
 * @param destino
 * @param auxiliar
 */
void Gestor::hanoi(string & info, int n, char origem, char destino, char auxiliar) {
    if(n==1){
        info += "\nMueva el disco 1 de la base " + string(1,origem) + " a la base " + string(1,destino);
//        return;
    } else {
        hanoi(info, n-1,origem,auxiliar,destino);
        info += "\nMueva el disco " + to_string(n) + " de la base "+ string(1,origem) +" a la base " + string(1,destino);
        hanoi(info, n-1,auxiliar,destino,origem);
    }
}
/**
 *
 * @param num
 * @return
 */
int Gestor::factorial(int num) {
    return (num == 0) ? 1 : num * factorial(num -1);
    // método alterno
//    if (num == 0){
//        return 1;
//    } else {
//        return num * factorial(num -1);
//    }
}
/**
 *
 * @param num
 * @return
 */
int Gestor::nMovHanoi(int num) {
    return exp2(num) - 1; // retorna la base 2 elevada al exponente num - 1
    // método alternativo
}
/**
 *
 * @param num
 * @return
 */
int Gestor::nMovHanoiRecursivo(int num) {
    // https://gist.github.com/martincruzot/62d602cf7aac554b9821
    if(num == 1) {
        return 1;
    } else {
        return 2 * nMovHanoiRecursivo(num - 1) + 1;
    }
}
/**
 *
 * @param n
 * @return
 */
int Gestor::nMovHanoiBucle(int n) {
    int retorno;
    if (n == 0){
        retorno = 0;
    } else {
        retorno = 0;
        for (int i = 1; i <= n; ++i) {
            retorno = retorno * 2 + 1;
        }
    }
    return retorno;
}



//
// Created by Mario Martinez on 14/07/20.
//

#include "Gestor.h"
/**
 * Método:          hanoi
 * Descripción:     Método que desarrolla los pasos necesarios para resolver con la cantiddad
 * mínima de movimiento el juego (Torre de Hanoi).
 * código recuperado de: https://gist.github.com/talespadua/6303251. el 16/07/2020, modificado por
 * el grupo *
 * @param info      Variable de tipo string que guarda el resultado de los movimientos, esta variable
 * es desreferenciada, de forma que guarda en memoria los movimientos uno a uno, y al invocarse en el
 * main se tiene acceso a esta información, por lo que no es necesario que retorne un string
 * @param n         representa el número de aros que se utilizará en el juego.
 * @param origem    representa la posición inicial de los aros en el juego.
 * @param destino   representa la posición final de los aros en el juego.
 * @param auxiliar  representa la posición intermedia de los aros en el juego, es una variable de tipo
 * temporal.
 *
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
 * Método:                  factorial
 * Descripción:             Método que retorna el valor factorial de un número entero.
 * código recuperado de:    https://geekytheory.com/que-es-la-recursividad
 * @param num               representa el valor de tipo entero que se utiliza para calcular el factorial
 * @return                  variable de tipo de entero que representa el valor factorial
 */
int Gestor::factorial(int num) {
    return (num == 0) ? 1 : num * factorial(num -1);
    /*
     * Método alterno
     * Este méotodo es equivalente al anterior, pero requiere más líneas de código
     */
//    if (num == 0){
//        return 1;
//    } else {
//        return num * factorial(num -1);
//    }
}
/**
 * Método:          nMovHanoi
 * Descripción:     Método que permite calcular el número mínimo de movimiento
 * necesarios para resolver el juego de las Torres de Hanoi.
 * Este método no es un método recursivo, ya que como se señala en LaVanguardia recuperado de:
 * https://www.lavanguardia.com/vida/20181215/453378236845/solucion-enigma-torre-hanoi-fin-mundo.html
 * este es un función exponencial (2 elevado a la n) menos 1
 * @param num       variable de tipo entero que representa el número de aros del juego
 * @return          variable de tipo entero que corresponde al número de movimientos mínimos
 * para resolver el juego.
 */
int Gestor::nMovHanoi(int num) {
    return exp2(num) - 1; // retorna la base 2 elevada al exponente num - 1
    /*
     * método alternativo
     * Es método es el proceso recursivo, pero consideramos que no es el
     * más eficiente en este caso en particular.
     */
//    if(num == 1) {
//        return 1;
//    } else {
//        return 2 * nMovHanoiRecursivo(num - 1) + 1;
//    }
}







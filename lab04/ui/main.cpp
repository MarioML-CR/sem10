#include <iostream>
#include <cstdlib>
#include "../gestor/Gestor.h"
using namespace std;
void menu();
void procesar_menu(int &, bool &);
int factorial();
void hanoi();
Gestor gestor;


int main() {
    menu();
    return 0;
}
void menu() {
    bool salir;
    cout << "Instr salir antes " << salir << endl;
    int opcion = 0;
    do {
        cout << "\nIngreso de números\n\nElija una opción\n" <<
             "01 Solución Torre de Hanoi\n" <<
             "02 Generar factorial\n" <<
             "03 Salir\n";
        cin >> opcion;
        procesar_menu(opcion, salir);
    } while (!salir);
}
void procesar_menu(int & pOpcion, bool & salir) {
    switch (pOpcion) {
        case 1:
            hanoi();
            break;
        case 2:
            factorial();
            break;
        case 3:
            salir = true;
            break;
        default:
            cout << "Opción inválida\n";
    }
}
int factorial(){
    int num, factorial;
    cout << "Ingrese el número con el que desea generar el factorial\n";
    cin >> num;
    factorial = gestor.factorial(num);
    cout << "El factorial de " + to_string(num) + " es " + to_string(factorial);
}

void hanoi(){
    int n;
    string info;
    printf("Digite el número de discos : ");
    scanf("%d",&n); // https://gist.github.com/talespadua/6303251
    cout << "Para resolver a torre de Hanois se requieren " + to_string(gestor.nMovHanoi(n)) +
    "\nEl detalle de los movimientoes es:\n";
    gestor.hanoi(info, n, 'A', 'C', 'C'); // se pasa por parámetro desreferenciado
    cout << info << endl; // se manda a imprimir lo que está guardado en este dirección de momeria.
}

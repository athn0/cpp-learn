#include <iostream>
#include <ostream>
//* Funcion anticipadas: 
/*
 * permite declarara un funcion sim implementacion 
 * para se llamado independientemente del orden
 */
/*

void llamarB() {
    llamarA(4, 4); // error por que la fucion no esta difinida todavia hasta que pase a la linea 12
}

void llamarA(int n1, int n2) {
    llamarB();
}

*/

// * Prototipos

// void llammar_A(int, int );  //* Desaconsejable
int llamar_A(int n1, int n2);

void llamar_B() {
    std::cout << "Funciones anticipadas\n";
    std::cout << llamar_A(4, 4) << std::endl;
}

int llamar_A(int n1, int n2) {
    return n1 + n2;
}
//* Funcion anticipadas - END


void imprimir(int num) {
    std::cout << "Ejecutando la funcion imprimir()\n" << num <<"\n";
}

int devuelveNumerico(int num) {
    return num;
}

int main() {
    
    imprimir(devuelveNumerico(94));
    int numero { devuelveNumerico(2) };
    llamar_B();
	return 0;
}

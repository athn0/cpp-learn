#include <iostream>

void imprimir(int num) {
    std::cout << "Ejecutando la funcion imprimir()\n" << num <<"\n";
}

int devuelveNumerico(int num) {
    return num;
}

int main() {
    
    imprimir(devuelveNumerico(94));
    
	return 0;
}

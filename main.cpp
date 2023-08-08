#include <iostream>
using namespace std; 

int main() {
    // Modos de inicializar una var
    // No afectan en el compilador, su funcion es visual
    int a;       // no se recomienda, siempre inicializar
    int b = 8;   // inicializacion por copia    
    int c (6);   
    int d { 9 }; // inicializacion por lista o uniforme 
    
    // tres formas de inicializacion de lista
    int x { 3 }; // inic directa
    int y = {8}; // inic copia
    int z {};    // inic valor  | inicializacion recomendada con valor vacio

	return 0;
}

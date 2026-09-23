// ¿Recuerdas qué hace iostream?
#include <iostream>
using namespace std;
// ¿por qué debe existir la función main()?
int main() {
    // 1. Constante: valor que no cambia durante la ejecución
    const int CANTIDAD = 5;
    int contador = 0;

    // 2. Variables (siempre inicializadas)
    double suma = 0.0;
    double numero = 0.0;

    std::cout << "Suma de " << CANTIDAD << " numeros\n";

    // 3. Ciclo: repetir CANTIDAD veces
    //    TODO: elige un ciclo (for o while) y usa un contador
    while (contador < 5) {
        std::cout << "Ingresa numero" << endl;
        std::cin >> numero;
        
        if (numero >= 0){
            suma+=numero;
            contador++;
        }else if (numero <= 0){
            suma+=numero;
            contador++;
        }else{
            std::cout << "Número no válido";
        }

    }
    std::cout << "suma: " << suma;    
    return 0;
}
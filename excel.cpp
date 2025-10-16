// Número de columna de excel
#include <iostream>
#include <string>
using namespace std;

int tituloAColumna(string titulo) {
    int resultado = 0;
    for (char letra : titulo) {
        letra = toupper(letra);
        int valor = letra - 'A' + 1;
        resultado = resultado * 26 + valor;
    }
    return resultado;
}

int main() {
    string titulo;
    cout << "Ingrese el titulo de columna de Excel (por ejemplo, AB): ";
    cin >> titulo;

    int numero = tituloAColumna(titulo);
    cout << "El numero es: " << numero << endl;

    return 0;
}
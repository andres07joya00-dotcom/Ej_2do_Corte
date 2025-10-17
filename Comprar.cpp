// Mejor tiempo para comprar y vender
#include <iostream>
#include <vector>
using namespace std;

class Acciones {
public:
    vector<int> precios;
    int diaCompra;
    int diaVenta;
    int gananciaMaxima;

    Acciones(vector<int> p) : precios(p), diaCompra(0), diaVenta(0), gananciaMaxima(0) {
        calcularMaximoBeneficio();
    }

    void calcularMaximoBeneficio() {
        int minPrecio = precios[0];
        int minDia = 0;

        for (int i = 1; i < precios.size(); ++i) {
            int ganancia = precios[i] - minPrecio;
            if (ganancia > gananciaMaxima) {
                gananciaMaxima = ganancia;
                diaCompra = minDia;
                diaVenta = i;
            }
            if (precios[i] < minPrecio) {
                minPrecio = precios[i];
                minDia = i;
            }
        }
    }

void mostrarResultado() const {
        cout << "Día para comprar: " << diaCompra + 1 << endl;
        cout << "Día para vender: " << diaVenta + 1 << endl;
        cout << "Ganancia máxima: " << gananciaMaxima << endl;
    }
};

int main() {
    int n;
    cout << "Ingrese el número de días: ";
    cin >> n;

    vector<int> precios(n);
    cout << "Ingrese los precios de las acciones:" << endl;
    for (int i = 0; i < n; ++i)
        cin >> precios[i];

    Acciones a(precios);
    a.mostrarResultado();

    return 0;
}

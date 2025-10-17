// Mejor tiempo para comprar y vender
#include <iostream>
#include <vector>
using namespace std;

class Acciones {
public:
    Acciones(vector<int> precios) {
        int minPrecio = precios[0];
        int maxGanancia = 0;
        int diaCompra = 0;
        int diaVenta = 0;

        for (int i = 1; i < precios.size(); ++i) {
            if (precios[i] - minPrecio > maxGanancia) {
                maxGanancia = precios[i] - minPrecio;
                diaVenta = i;
            }
            if (precios[i] < minPrecio) {
                minPrecio = precios[i];
                diaCompra = i;
            }
        }

        cout << "Día de compra: " << diaCompra + 1 << endl;
        cout << "Día de venta: " << diaVenta + 1 << endl;
        cout << "Ganancia máxima: " << maxGanancia << endl;
    }
};
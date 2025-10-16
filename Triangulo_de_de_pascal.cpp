//TRINAGULO DE PASCAL

#include <iostream>
#include <vector>
using namespace std;

class TrianguloPascal {
public:
    int filas;
    vector<vector<int>> triangulo;

    TrianguloPascal(int n) : filas(n) {
        generarTriangulo();
    }

    void generarTriangulo() {
        triangulo.resize(filas);
        for (int i = 0; i < filas; ++i) {
            triangulo[i].resize(i + 1);
            triangulo[i][0] = triangulo[i][i] = 1;
            for (int j = 1; j < i; ++j)
                triangulo[i][j] = triangulo[i - 1][j - 1] + triangulo[i - 1][j];
        }
    }

    void mostrar() const {
        for (int i = 0; i < filas; ++i) {
            for (int j = 0; j < filas - i; ++j)
                cout << " ";
            for (int j = 0; j <= i; ++j)
                cout << triangulo[i][j] << " ";
            cout << endl;
        }
    }
};

int main() {
    int n;
    cout << "Ingrese el número de filas del Triángulo de Pascal: ";
    cin >> n;

    TrianguloPascal t(n);
    t.mostrar();

    return 0;
}
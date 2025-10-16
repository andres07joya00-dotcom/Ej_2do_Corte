//TRINAGULO DE PASCAL

#include <iostream>
#include <vector>
using namespace std;

class TrianguloPascal {
public:
    TrianguloPascal(int filas) {
        vector<vector<int>> triangulo;

        for (int i = 0; i < filas; ++i) {
            vector<int> fila;
            for (int j = 0; j <= i; ++j) {
                if (j == 0 || j == i) fila.push_back(1);
                else fila.push_back(triangulo[i - 1][j - 1] + triangulo[i - 1][j]);
            }
            triangulo.push_back(fila);

            for (int k = 0; k < filas - i; ++k) cout << " ";
            for (int num : fila) cout << num << " ";
            cout << endl;
        }
    }
};
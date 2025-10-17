// Número de columna de excel
#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int titleToNumber(string columnTitle) {
        int resultado = 0;
        for (char letra : columnTitle) {
            letra = toupper(letra);  
            int valor = letra - 'A' + 1;  
            resultado = resultado * 26 + valor;  
        }
        return resultado;
    }
};

int main() {
    Solution sol;
    string titulo;
    cout << "Ingrese el título de columna de Excel (por ejemplo, AB): ";
    cin >> titulo;

    cout << "El número de columna correspondiente es: "
         << sol.titleToNumber(titulo) << endl;

    return 0;
}
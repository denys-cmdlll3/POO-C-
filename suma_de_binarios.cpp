#include <iostream>
#include <string>

using namespace std;

string convertir(int binario, int binario1) {
    if (binario == 0 && binario1 == 0) return "0";

    string resultado = "";
    int suma = 0;
    int carry = 0;
    string caracter = "01";

    while (binario > 0 || binario1 > 0) {
        int residuo = binario % 10;
        int residuo1 = binario1 % 10;

        suma = residuo + residuo1 + carry;

        if (suma > 1) {
            carry = 1;
            resultado = caracter[suma % 2] + resultado;
        } else {
            carry = 0;
            resultado = caracter[suma] + resultado;
        }

        binario /= 10;
        binario1 /= 10;
    }

    if (carry == 1) {
        resultado = "1" + resultado;
    }

    return resultado;
}

int main() {
    int numero, numero1;
    cout << "Ingrese un numeros binarios: " << endl;
    cin >> numero >> numero1;
    cout << "la suma es: " << convertir(numero , numero1) << endl;

    return 0;
}

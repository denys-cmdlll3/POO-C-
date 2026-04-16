#include <iostream>
#include <string>

using namespace std;

string convertir(int binario, int base) {
    if (binario == 0) return "0";
    
    string resultado = "";
    int suma=1;
    string caracteres = "0123456789ABCDEF";
    int decimal =0;
    while (binario > 0) {
        int residuo = binario % 10;
        if(residuo > 1){
            cout<<"el numero no esta en binario"<<endl;
            break;
        }else{
        residuo *= suma;
        binario = binario / 10;
        suma *= 2;
        decimal += residuo;
        }
        
    }
    while (decimal > 0) {
        int residuo = decimal % base;
        resultado = caracteres[residuo] + resultado;
        decimal = decimal / base;
    }
    
    return resultado;
}

int main() {
    int numero;
    
    cout << "Ingrese un numero decimal: ";
    cin >> numero;
    
    cout << "Hex     (Base 16): " << convertir(numero, 16) << endl;
    
    return 0;
}
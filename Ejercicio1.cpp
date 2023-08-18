#include <iostream>

using namespace std;

int main()
{
    int ejercicio = 0;
    cout << "Ingresa el numero del ejercicio que deseas ejecutar: ";
    cin >> ejercicio;
    if (ejercicio == 1){
        int numero1 = 0;
        int numero2 = 0;
        while (numero2 == 0){
        cout << "Ingresa el primer numero: ";
        cin >> numero1;
        cout << "Ingresa el segundo numero: ";
        cin >> numero2;

        if (numero2 == 0){
            cout << "No se puede dividir entre cero, intenta nuevamente :)" << endl;
        }
        else {
        cout << "El resudio de la disivion es: " << numero1 % numero2 << endl;
            break;
            }
        }
    }
    else if (ejercicio == 2){
        int numero = 0;
        cout << "Ingresa el numero a validar: ";
        cin >> numero;
        if (numero % 2 == 0) {
            cout << "El numero ingresado es par" << endl;
        }
        else {
            cout << "El numero ingresado es impar" << endl;
        }
    }
    else if (ejercicio == 3){
        int numero1 = 0;
        int numero2 = 0;
        cout << "Ingrese el numero 1 :";
        cin >> numero1;
        cout << "Ingrese el numero 2 :";
        cin >> numero2;
        if (numero1 > numero2){
            cout << "El mayor es: " << numero1 << endl;
        }
        else {
            cout << "El mayor es: " << numero2 << endl;

        }
    }
    else if (ejercicio == 4){
        int numero1 = 0;
        int numero2 = 0;
        cout << "Ingrese el numero 1 :";
        cin >> numero1;
        cout << "Ingrese el numero 2 :";
        cin >> numero2;
        if (numero1 < numero2){
            cout << "El menor es: " << numero1 << endl;
        }
        else {
            cout << "El menor es: " << numero2 << endl;

        }
    }
    else if (ejercicio == 5){
        int resultado = 0;
        float numero1 = 0;
        float numero2 = 0;
        cout << "Ingrese el primer valor: ";
        cin >> numero1;
        cout << "Ingrese el segundo valor: ";
        cin >> numero2;
        resultado = numero1 / numero2;
        cout << resultado << endl;
    }
return 0;
}


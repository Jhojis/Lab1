#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int ejercicio = 0;
    cout << "Ingresa el numero del ejercicio que deseas ejecutar: ";
    cin >> ejercicio;
    if (ejercicio == 1){
        int numero1 = 0;
        int numero2 = 0;
        cout << "Ejercicio 1. Escriba un programa que pida dos numeros A y B e imprima en pantalla el residuo de la divisiun A/B" << endl;
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
        cout << "Ejercicio 2. Escriba un programa que pida un numero N e imprima en pantalla si es par o impar." << endl;
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
        cout << "Ejercicio 3. Escriba un programa que pida dos numeros A y B e imprima en pantalla el mayor." << endl;
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
        cout << "Ejercicio 4. Escriba un programa que pida dos numeros A y B e imprima en pantalla el menor." << endl;
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
        double numero1 = 0;
        double numero2 = 0;
        cout << "Ejercicio 5. Escriba un programa que pida dos numeros A y B e imprima en pantalla la division A/B con redondeo." << endl;
        cout << "Ingrese el primer valor: ";
        cin >> numero1;
        cout << "Ingrese el segundo valor: ";
        cin >> numero2;
        resultado = round(numero1 / numero2);
        cout << resultado << endl;
    }
    else if (ejercicio == 6){
        int base;
        int potencia;
        int resultado;
        cout << "Ejercicio 6. Escriba un programa que pida dos numeros A y B e imprima en pantalla la potencia A^B" << endl;
        cout << "Ingresa el valor de la base: ";
        cin >> base;
        cout << "Ingresa el valor de la potencia: ";
        cin >> potencia;
        int var = base;
        for (int i = 1; i < potencia; i += 1){
            resultado = base*var;
            var = resultado;
        }
        cout << base << "^" << potencia << " = " << resultado << endl;
    }
    else if (ejercicio == 7){
        int numero;
        int sumatoria;
        cout << "Ejercicio 7. Escriba un programa que pida un numero N e imprima en pantalla la suma de todos los numeros entre 0 y N" << endl;
        cout << "Ingresa un numero: ";
        cin >> numero;
        int cont = numero;
        for (int i = 0; i < cont; i += 1){
            sumatoria += numero;
            numero -= 1;
        }
        cout << "La sumatoria desde 0 hasta " << cont << " es: " << sumatoria << endl;
    }
    return 0;
}

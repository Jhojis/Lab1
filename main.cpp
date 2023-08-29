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
    else if (ejercicio == 8){
        cout << "Ejercicio 8. Escriba un programa que pida un numero N e imprima en pantalla su factorial." << endl;
        int numero;
        cout << "Ingresa un numero: ";
        cin >> numero;
        int factorial = numero;
        int cont = numero;
        for (int i = 1; i < cont; i += 1){
            factorial = factorial * (numero - 1);
            numero -= 1;
        }
        cout << cont << "! = " << factorial << endl;
    }
    else if (ejercicio == 9){
        cout << "Ejercicio 9. Escriba un programa que pida un numero N e imprima el perimetro y area de un circulo con radio N." << endl;
        int numero;
        float perimetro = 0, area = 0;

        cout << "Ingresa el radio: ";
        cin >> numero;

        perimetro = 2*3.1416*numero;
        area = 3.1416*(numero*numero);

        cout << "Perimetro: " << perimetro << endl;
        cout << "Area: " << area << endl;
    }
    else if (ejercicio == 10){
        cout << "Ejercicio 10. Escriba un programa que pida un numero N e imprima en pantalla todos los multiplos de dicho numero entre 1 y 100." << endl;
        int numero;
        cout << "Ingresa un numero: ";
        cin >> numero;
        cout << "Los multiplos de " << numero << " menores que 100" << endl;
        for (int i = 1; i*numero < 100; i++) if (i*numero % numero == 0) cout << i*numero << endl;
    }
    else if (ejercicio == 11){
        cout << "Ejercicio 11. Escriba un programa que pida un numero N e imprima en pantalla su tabla de multiplicar hasta 10xN." << endl;
        int numero;
        cout << "Ingresa un numero: ";
        cin >> numero;
        for (int i = 1; i <= 10; i++) cout << i << "x" << numero << " = " << numero*i << endl;
    }
    else if (ejercicio == 12){
        cout << "Ejercicio 12. Escriba un programa que pida un numero N e imprima todas las potencias desde N^1 hasta N^5" << endl;
        int numero, pot = 1;
        cout << "Ingresa un numero: ";
        cin >> numero;
        for (int i = 1; i <= 5; i++){
            pot *= numero;
            cout << numero << "^" << i << " = " << pot << endl;
        }
    }
    else if (ejercicio == 13){
        cout << "Ejercicio 13. Escriba un programa que pida un numero N e imprima todos los divisores de N." << endl;
        int numero;
        cout << "Ingresa un numero: ";
        cin >> numero;
        cout << "Los divesores de " << numero << " son:" << endl;
        for (int i = 1; i <= numero; i++) if (numero % i == 0) cout << i << endl;
    }
    else if (ejercicio == 14){
        cout << "Ejercicio 14. Escriba un programa que imprima dos columnas paralelas, una con los numeros del 1 al 50 y otra con los numeros del 50 al 1." << endl;
        int i = 1;
        do {
            cout << i << "  " << 50 - (i - 1) << endl;
            i++;
        } while (i <= 50);
    }
    else if (ejercicio == 15){
        cout << "Ejercicio 15. Escriba un programa que pida constantemente numeros hasta que se ingrese el numero cero e imprima en pantalla la suma de todos los numeros ingresados." << endl;
        unsigned int suma = 0, input;
        do {
            cout << "Ingresa un numero: ";
            cin >> input;
            suma += input;
        } while (input != 0);
        cout << "El resultado de la sumatoria es: " << suma << endl;
    }
    else if (ejercicio == 16){
        cout << "Ejercicio 16. Escriba un programa que pida constantemente numeros hasta que se ingrese el numero cero e imprima en pantalla el promedio de los numeros ingresados (excluyendo el cero)." << endl;
        unsigned int prom = 0, suma = 0, input, contador = 0;
        do {
            cout << "Ingresa un numero: ";
            cin >> input;
            suma += input;
            contador++;
        } while (input != 0);
        prom = suma / (contador - 1);
        cout << "El resultado de la sumatoria es: " << prom << endl;
    }
    else if (ejercicio == 17){
        cout << "Ejercicio 17. Escriba un programa que pida constantemente numeros hasta que se ingrese el numero cero e imprima en pantalla el mayor de todos los numeros ingresados." << endl;
        unsigned int num_max = 0, input;
        do {
            cout << "Ingresa un numero: ";
            cin >> input;
            if (input > num_max) num_max = input;
        } while (input != 0);
        cout << "El numero mayor fue: " << num_max << endl;
    }

    return 0;
}

/*#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int ejercicio = 0;
    cout << "Ingresa el numero del ejercicio que deseas ejecutar: ";
    cin >> ejercicio;

    switch (ejercicio) {
    case 1: {
        int numero1 = 0, numero2 = 0;
        cout << "Ejercicio 1. Escriba un programa que pida dos numeros A y B e imprima en pantalla el residuo de la divisiun A/B" << endl;
        while (numero2 == 0) {
            cout << "Ingresa el primer numero: ";
            cin >> numero1;
            cout << "Ingresa el segundo numero: ";
            cin >> numero2;

            if (numero2 == 0) {
                cout << "No se puede dividir entre cero, intenta nuevamente :)" << endl;
            } else {
                cout << "El resudio de la disivion es: " << numero1 % numero2 << endl;
                break;
            }
        }
        break;
    }
    case 2: {
        int numero = 0;
        cout << "Ejercicio 2. Escriba un programa que pida un numero N e imprima en pantalla si es par o impar." << endl;
        cout << "Ingresa el numero a validar: ";
        cin >> numero;
        if (numero % 2 == 0) {
            cout << "El numero ingresado es par" << endl;
        } else {
            cout << "El numero ingresado es impar" << endl;
        }
        break;
    }
    case 3: {
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
    default:
        cout << "Opción inválida" << endl;
    }

    return 0;
}*/


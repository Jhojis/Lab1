#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int ejercicio = 0;
    cout << "Ingresa el numero del ejercicio que deseas ejecutar: ";
    cin >> ejercicio;

    switch (ejercicio) {
    case 1: {
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
        }
        else {
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
        break;
    }
    case 4: {
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
        break;
    }
    case 5: {
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
        break;
    }
    case 6: {
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
        break;
    }
    case 7: {
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
        break;
    }
    case 8: {
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
        break;
    }
    case 9: {
        cout << "Ejercicio 9. Escriba un programa que pida un numero N e imprima el perimetro y area de un circulo con radio N." << endl;
        int numero;
        float perimetro = 0, area = 0;

        cout << "Ingresa el radio: ";
        cin >> numero;

        perimetro = 2*3.1416*numero;
        area = 3.1416*(numero*numero);

        cout << "Perimetro: " << perimetro << endl;
        cout << "Area: " << area << endl;
        break;
    }
    case 10: {
        cout << "Ejercicio 10. Escriba un programa que pida un numero N e imprima en pantalla todos los multiplos de dicho numero entre 1 y 100." << endl;
        int numero;
        cout << "Ingresa un numero: ";
        cin >> numero;
        cout << "Los multiplos de " << numero << " menores que 100" << endl;
        for (int i = 1; i*numero < 100; i++) if (i*numero % numero == 0) cout << i*numero << endl;
        break;
    }
    case 11: {
        cout << "Ejercicio 11. Escriba un programa que pida un numero N e imprima en pantalla su tabla de multiplicar hasta 10xN." << endl;
        int numero;
        cout << "Ingresa un numero: ";
        cin >> numero;
        for (int i = 1; i <= 10; i++) cout << i << "x" << numero << " = " << numero*i << endl;
        break;
    }
    case 12: {
        cout << "Ejercicio 12. Escriba un programa que pida un numero N e imprima todas las potencias desde N^1 hasta N^5" << endl;
        int numero, pot = 1;
        cout << "Ingresa un numero: ";
        cin >> numero;
        for (int i = 1; i <= 5; i++){
            pot *= numero;
            cout << numero << "^" << i << " = " << pot << endl;
        }
        break;
    }
    case 13: {
        cout << "Ejercicio 13. Escriba un programa que pida un numero N e imprima todos los divisores de N." << endl;
        int numero;
        cout << "Ingresa un numero: ";
        cin >> numero;
        cout << "Los divesores de " << numero << " son:" << endl;
        for (int i = 1; i <= numero; i++) if (numero % i == 0) cout << i << endl;
        break;
    }
    case 14: {
        cout << "Ejercicio 14. Escriba un programa que imprima dos columnas paralelas, una con los numeros del 1 al 50 y otra con los numeros del 50 al 1." << endl;
        int i = 1;
        do {
            cout << i << "  " << 50 - (i - 1) << endl;
            i++;
        } while (i <= 50);
        break;
    }
    case 15: {
        cout << "Ejercicio 15. Escriba un programa que pida constantemente numeros hasta que se ingrese el numero cero e imprima en pantalla la suma de todos los numeros ingresados." << endl;
        unsigned int suma = 0, input;
        do {
            cout << "Ingresa un numero: ";
            cin >> input;
            suma += input;
        } while (input != 0);
        cout << "El resultado de la sumatoria es: " << suma << endl;
        break;
    }
    case 16: {
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
        break;
    }
    case 17: {
        cout << "Ejercicio 17. Escriba un programa que pida constantemente numeros hasta que se ingrese el numero cero e imprima en pantalla el mayor de todos los numeros ingresados." << endl;
        unsigned int num_max = 0, input;
        do {
            cout << "Ingresa un numero: ";
            cin >> input;
            if (input > num_max) num_max = input;
        } while (input != 0);
        cout << "El numero mayor fue: " << num_max << endl;
        break;
    }
    case 18: {
        cout << "Ejercicio 18. Escriba un programa que pida un numero N e imprima si es o no un cuadrado perfecto." << endl;
        bool is_square_perfect = false;
        unsigned int input = 0;

        cout << "Ingresa un numero: ";
        cin >> input;

        for (unsigned int i = 0; i*i <= input; i++){
            if (i*i == input) is_square_perfect = true;
        }
        if (is_square_perfect) {
            cout << "Cuadrado perfecto" << endl;
        } else {
            cout << "No es Cuadrado perfecto" << endl;
        }
        break;
    }
    case 19: {
        cout << "Ejercicio 19. Escriba un programa que pida un numero N e imprima si es o no un numero primo." << endl;
        int numero;
        int divisores = 0;
        cout << "Ingresa el numero: ";
        cin >> numero;
        for (int i = 1; i <= numero; i++){
            if (numero % i == 0){
                divisores++;
            }
        }
        if (divisores <= 2) cout << "Es primo" << endl; else cout << "No es primo" << endl;
        break;
    }
    case 20: {
        cout << "Ejercicio 20. Escriba un programa que pida un numero N e imprima si es o no un palindromo(igual de derecha a izquierda que de izquierda a derecha)." << endl;
        int n;
        cout << "Introduce un numero: ";
        cin >> n;

        int num_orig = n;
        int num_invertido = 0;

        while (n > 0) {
            num_invertido = num_invertido * 10 + n % 10;
            n = n / 10;
        }

        if (num_orig == num_invertido) {
            cout << "El numero es un palindromo." << endl;
        } else {
            cout << "El numero no es un palindromo." << endl;
        }
        break;
    }
    case 21: {
        cout << "Ejercicio 21. Escriba un programa que pida un caracter C, si es una letra la debe convertir de mayuscula a minuscula y viceversa e imprimirla." << endl;
        char letra;
        cout << "Introduce la letra: ";
        cin >> letra;
        if (letra >= 65 && letra <= 90) {
            letra += 32;
            cout << "Letra convertida: " << letra << endl;
        }
        else if (letra >= 97 && letra <= 122) {
            letra -= 32;
            cout << "Letra convertida: " << letra << endl;
        }
        else cout << "No es una letra" << endl;
        break;
    }
    case 22: {
        cout << "Ejercicio 22. Escriba un programa que pida una cantidad entera de segundos y la imprima en formato horas:minutos:segundos." << endl;
        int entrada;
        int horas;
        int minutos;
        cout << "Ingresa los segundos: ";
        cin >> entrada;
        horas = entrada / 3600;
        entrada %= 3600;
        minutos = entrada / 60;
        entrada %= 60;
        cout << horas << ":" << minutos << ":" << entrada << endl;
        break;
    }
    case 23: {
        cout << "Ejercicio 23. Escriba un programa que pida dos numeros A y B e imprima en pantalla el minimo comun multiplo entre los dos." << endl;
        int numero1, numero2, temp;
        bool found = false;

        cout << "Ingresa el numero 1: ";
        cin >> numero1;
        cout << "Ingresa el numero 2: ";
        cin >> numero2;

        for (int i = 1; !found; i++){
            if ((numero1 * i) % numero2 == 0) {
                found = true;
            }
            temp = numero1 * i;
        }
        if (found) {
            cout << "El MCP entre " << numero1 << " y " << numero2 << " es: " << temp << endl;
        }
        break;
    }
    case 24: {
        cout << "Ejercicio 24. Escriba un programa que pida una numero entero e imprima un cuadrado de dicho tamaño" << endl;
            int tamano;

        cout << "Ingrese el tamanio del cuadrado: ";
        cin >> tamano;

        for (int i = 1; i <= tamano; i++) {
            for (int j = 1; j <= tamano; j++) {
                if (i == 1 || i == tamano || j == 1 || j == tamano) {
                    cout << "+";
                } else {
                    cout << " ";
                }
            }
            cout << endl;
        }
        break;
    }
    case 25: {
        cout << "Ejercicio 25. Escriba un programa que pida un numero N e imprima en pantalla la cantidad de digitos de N." << endl;
        int numero;
        int contador;
        cout << "Ingresa el numero: ";
        cin >> numero;
        while (numero != 0) {
            numero /= 10;
            contador++;
        }
        cout << contador;
        break;
    }
    case 26: {
        cout << "Ejercicio 26. Escriba un programa que pida tres numeros e imprima el tipo de triangulo (isosceles, equilatero, escaleno)" << endl;
        int a, b, c;
        cout << "Introduce tres numeros: ";
        cin >> a >> b >> c;

        if (a > 0 && b > 0 && c > 0 && (a + b) > c && (a + c) > b && (b + c) > a) {
            if (a == b && b == c) {
                cout << "Se forma un triangulo equilatero." << endl;
            } else if (a == b || a == c || b == c) {
                cout << "Se forma un triangulo isosceles." << endl;
            } else {
                cout << "Se forma un triangulo escaleno." << endl;
            }
        } else cout << "Las longitudes ingresadas no forman un triangulo." << endl;

        break;
    }
    case 27: {
        cout << "Ejercicio 27. Escriba un programa que actue como una calculadora con operaciones de suma, resta, multiplicacion y division" << endl;
        char operador;
        int operando1, operando2;

        cout << "Introduce el operador (+, -, *, /): ";
        cin >> operador;

        cout << "Introduce el primer operando: ";
        cin >> operando1;

        cout << "Introduce el segundo operando: ";
        cin >> operando2;

        switch (operador) {
        case '+':
            cout << operando1 << " + " << operando2 << " = " << operando1 + operando2 << endl;
            break;
        case '-':
            cout << operando1 << " - " << operando2 << " = " << operando1 - operando2 << endl;
            break;
        case '*':
            cout << operando1 << " * " << operando2 << " = " << operando1 * operando2 << endl;
            break;
        case '/':
            if (operando2 != 0) {
                cout << operando1 << " / " << operando2 << " = " << operando1 / operando2 << endl;
            } else {
                cout << "No se puede dividir por cero." << endl;
            }
            break;
        default:
            cout << "Operador no válido." << endl;
        }
        break;
    }
    case 28: {
        cout << "Ejercicio 28. Escriba un programa que encuentre el valor aproximado de pi" << endl;
        int numElementos;
        double suma = 0;

        cout << "Ingrese el numero de elementos para la aproximacion: ";
        cin >> numElementos;

        for (int i = 0; i < numElementos; i++) {
            double termino = 1.0 / (2 * i + 1);
            if (i % 2 == 0) {
                suma += termino;
            } else {
                suma -= termino;
            }
        }
        double piAprox = 4 * suma;
        cout << "El valor aproximado de pi con " << numElementos << " elementos es: " << piAprox << endl;
        break;
    }
    case 29: {
        cout << "Ejercicio 29. Escriba un programa que adivine un numero A " << endl;
        srand(time(0));
        int numeroAleatorio = rand() % 100 + 1;
        cout << numeroAleatorio << endl;
        break;
    }
    default:
        cout << "Opcion invalida" << endl;
    }
    return 0;
}


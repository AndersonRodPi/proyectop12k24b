#include "loginNotas.h" // Incluye el archivo de cabecera "loginNotas.h"
// Incluye el archivo de cabecera "menuIngresoAlumno.h"
#include "menuIngresoAlumno.h"
// Incluye el archivo de cabecera "menuIngresoMaestro.h"
#include "menuIngresoMaestro.h"
// Incluye el archivo de cabecera "notas.h"
#include "notas.h"

// Incluye la biblioteca iostream que permite la entrada y salida de datos
#include<iostream>
// Incluye la biblioteca fstream que permite la lectura y escritura de archivos
#include<fstream>
// Incluye la biblioteca stdlib que proporciona funciones generales de utilidad
#include<stdlib.h>
// Incluye la biblioteca cstdlib que proporciona funciones generales de utilidad
#include<cstdlib>
// Incluye la biblioteca conio.h que proporciona funciones para controlar la entrada y salida de la consola
#include<conio.h>
// Incluye la biblioteca iomanip que proporciona funciones para manipular la salida formateada
#include<iomanip>

// Utiliza el espacio de nombres est�ndar. Esto evita tener que escribir std:: antes de cada uso de objetos de la biblioteca est�ndar
using namespace std;

// Define la funci�n miembro menuGeneralNotas de la clase loginNotas
void loginNotas::menuGeneralNotas() {
    // Declara una variable entera llamada choice
    int choice;

    // Inicia un bucle do-while
    do
    {
        // Limpia la consola
        system("cls");
        // Imprime el men� en la consola
        cout << "\t\t\t-------------------------------" << endl;
        cout << "\t\t\t|   Login notas     |" << endl;
        cout << "\t\t\t-------------------------------" << endl;
        cout << "\t\t\t 1. Ingreso alumno" << endl;
        cout << "\t\t\t 2. Ingreso Maestro" << endl;
        cout << "\t\t\t 3. Regresar al menu anterior" << endl;
        cout << "\t\t\t-------------------------------" << endl;
        cout << "\t\t\t|Opcion a escoger:[1/2/3]  |" << endl;
        cout << "\t\t\t-------------------------------" << endl;
        cout << "\t\t\tIngresa tu Opcion: ";
        // Lee la opci�n del usuario desde la consola
        cin >> choice;

        // Inicia una estructura switch que ejecuta diferentes bloques de c�digo dependiendo del valor de choice
        switch (choice)
        {
            // Si choice es 1
            case 1:
                // Llama a la funci�n miembro menuGeneralNotasAlumno
                menuGeneralNotasAlumno();
                break;
            // Si choice es 2
            case 2:
                // Llama a la funci�n miembro menuGeneralNotasMaestro
                menuGeneralNotasMaestro();
                break;
            // Si choice es 3
            case 3:
                // Imprime un mensaje en la consola
                cout << "Saliendo del sistema..." << endl;
                break;
            default:
                // Imprime un mensaje en la consola
                cout << "Opcion no valida, intenta de nuevo." << endl;
        }
    // El bucle do-while contin�a mientras choice sea diferente de 3
    } while (choice != 3);

}

// Define la funci�n miembro menuGeneralNotasAlumno de la clase loginNotas
void loginNotas::menuGeneralNotasAlumno(){
    // Crea un objeto ia de la clase menuIngresoAlumno
    menuIngresoAlumno ia;
    // Llama a la funci�n miembro VerificarCarnet del objeto ia
    ia.VerificarCarnet();

}

// Define la funci�n miembro menuGeneralNotasMaestro de la clase loginNotas
void loginNotas::menuGeneralNotasMaestro(){
    // Crea un objeto im de la clase menuIngresoMaestro
    menuIngresoMaestro im;
    // Llama a la funci�n miembro VerificarCarnet del objeto im
    im.VerificarCarnet();

}


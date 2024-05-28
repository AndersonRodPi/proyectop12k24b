//By Ruddyard Eduardo Castro Chavez

#include "menuIngresoMaestro.h"
#include "notas.h"
#include "Bitacora.h"

#include <vector>
#include <iostream>
#include <fstream>
#include <sstream>
#include <cstdlib>
#include <conio.h>
#include <iomanip>

using namespace std;
// Variables para almacenar el usuario y la contrase�a
bool menuIngresoMaestro::VerificarCarnet() {
    string usuario, contrasena;
    // Contador de intentos fallidos
    int contador = 0;
    // Bandera para indicar si se encontr� el usuario y la contrase�a correctos
    bool encontrado = false;

    // Bucle que se repite mientras el n�mero de intentos sea menor a 3 y no se haya encontrado un usuario v�lido
    while (contador < 3 && !encontrado) {
        system("cls"); // Limpiar la pantalla
        cout << "\t\t\t+-----------------------------------+" << endl;
        cout << "\t\t\t|       LOGIN  Maestro              |" << endl;
        cout << "\t\t\t+-----------------------------------+" << endl;
        cout << "\t\t\t|Solo tienes permitido 3 intentos   |" << endl;
        cout << "\t\t\t+-----------------------------------+" << endl;
        cout << "\t\t\tIngrese el nombre: ";
        // Leer el nombre de usuario
        cin >> usuario;
        cout << "\t\t\tIngrese la contrasena: ";
        char caracter;
        // Leer un car�cter sin mostrarlo en la pantalla
        caracter = getch();

        // Ocultar la entrada de la contrase�a mientras se escribe
        contrasena = "";
        // 13 es el c�digo ASCII para Enter
        while (caracter != 13) {
                // 8 es el c�digo ASCII para Backspace
            if (caracter != 8) {
                // A�adir el car�cter a la contrase�a
                contrasena.push_back(caracter);
        // Mostrar un asterisco en lugar del car�cter
                cout << "*";
            } else {
                if (contrasena.length() > 0) {
                        // Borrar el �ltimo asterisco
                    cout << "\b \b";
                // Eliminar el �ltimo car�cter de la contrase�a
                    contrasena = contrasena.substr(0, contrasena.length() - 1);
                }
            }
            caracter = getch(); // Leer el siguiente car�cter
        }

        // Abrir el archivo de usuarios y contrase�as
        ifstream fileU_P;
        fileU_P.open("contraseniaMaestro.txt", ios::in);

        // Verificar si el archivo se abri� correctamente
        if (!fileU_P) {
            cout << "\n\t\t\t No es posible abrir el archivo." << endl;
            fileU_P.close();
            return false;
        }
        // C�digo del programa para bitacora
        string codigoPrograma = "5600";
        // Objeto para registrar en la bitacora
        Bitacora Auditoria;

        // Buscar el usuario en el archivo
        string user, pass;
        while (fileU_P >> user >> pass) {
            if (user == usuario && pass == contrasena) {
                    // Registrar el ingreso en la bitacora
                Auditoria.ingresoBitacora(user, codigoPrograma, "LMA");
            // Usuario y contrase�a encontrados
                encontrado = true;
                break;
            }
        }
        // Cerrar el archivo
        fileU_P.close();

        // Si no se encuentra el usuario y la contrase�a, incrementar el contador
        if (!encontrado) {
            cout << "\n\n\t\t\tNombre incorrecto" << endl;
            cout << "\n\n\t\t\tPerdio un intento, intente de nuevo\n" << endl;
            // Incrementar el contador de intentos fallidos
            contador++;
            // Pausar el sistema para que el usuario vea el mensaje
            system("pause");
        }
    }

    // Si se encuentra el usuario y la contrase�a, retornar true
    if (encontrado) {
             // Limpiar la pantalla
        system("cls");
        // Pausar el sistema para que el usuario vea el mensaje
        cout << "\n\t----- Bienvenido " << usuario << " -----" << endl;
        system("pause");

        // Abrir el archivo de cursos asignados
        ifstream fileCursos;
        fileCursos.open("cursosAsignadosMaestro.txt", ios::in);

        // Verificar si el archivo se abri� correctamente
        if (!fileCursos) {
            cout << "\n\t\t\t No es posible abrir el archivo." << endl;
            fileCursos.close();
            return false;
        }
    // Limpiar la pantalla
        system("cls");

//Gabriela Pinto Garc�a carne: 9959 - 23 - 1087
//modificacion de menu maestro

        // busca el nombre de el usuario en el archivo txt, y lee las clases asignadas
        cout << "\n\t----- Clases Dadas -----" << endl;
        string line;
        vector<string> clases;
        bool clasesEncontradas = false;

        // leer las l�neas del archivo
        while (getline(fileCursos, line)) {
            stringstream ss(line);
            string nombreMaestro, clase;
            // leer el nombre del catedratico
            ss >> nombreMaestro;
            if (nombreMaestro == usuario) {
                clasesEncontradas = true;
                while (ss >> clase) { // Leer todas las clases asignadas al maestro
                    clases.push_back(clase);
                }
                break; //Deja de buscar m�s l�neas, una vez se encuentran las clases del maestro
            }
        }
        fileCursos.close();

        if (!clasesEncontradas) {
            cout << "\n\tNo se encontraron clases dadas para este usuario." << endl;
        } else {

            // despliega un menu de clases
            for (int i = 0; i < clases.size(); i++) {
                cout << "\t" << (i + 1) << ". " << clases[i] << endl;
            }

            //Se le pide que ingrese una opcion
            cout << "\n\tSeleccione una clase [1/2/3]: ";
            cout << " ";
            int opcion;
            cin >> opcion; //Lee las opciones seleccionadas por el usuario

            if (opcion > 0 && opcion <= clases.size()) {

                    // Verificar que la opci�n seleccionada sea v�lida
                string claseSeleccionada = clases[opcion - 1]; // Obtener la clase seleccionada
                cout << "\n\tClase seleccionada: " << claseSeleccionada << endl;
                system("pause");

                // l�gica para manejar la clase seleccionada
                NotaCrud n;
                n.CrudNota();
            } else {
                cout << "\n\tOpci�n inv�lida." << endl;
            }
        }

        return true; // Retornar true si se encuentra un usuario y contrase�a v�lidos
    } else {
        system("cls");//limpiamos

        // Mensaje de error si el usuario no logr� ingresar correctamente despu�s de 3 intentos
        cout << "\n\n\t\t\tPERDI� LOS 3 INTENTOS" << endl;
        system("pause");
        exit(0);// Terminar el programa si se alcanzan los 3 intentos fallidos


        return false;
    }
}


//By Ruddyard Eduardo Castro Chavez


// Incluye el archivo de cabecera "menuIngresoAlumno.h"
#include "menuIngresoAlumno.h"
// Incluye el archivo de cabecera "menuIngresoMaestro.h"
#include "menuIngresoMaestro.h"
// Incluye el archivo de cabecera "notas.h"
#include "notas.h"
// Incluye el archivo de cabecera "Bitacora.h"
#include "Bitacora.h"



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



// Utiliza el espacio de nombres est�ndar. Esto evita tener que escribir std:: antes de cada uso de objetos
using namespace std;

// Define la funci�n miembro VerificarCarnet de la clase menuIngresoAlumno que devuelve un valor booleano
bool menuIngresoAlumno::VerificarCarnet()
{
    // Declara dos variables de tipo string llamadas usuario y contrasena
    string usuario, contrasena;
    // Declara una variable entera llamada contador e inicial�zala en 0
    int contador= 0;
    // Declara una variable booleana llamada encontrado e inicial�zala en false
    bool encontrado =false;

    // Inicia un bucle while que se ejecuta mientras el contador sea menor a 3 y encontrado sea false
    while(contador<3 && !encontrado)
    {
        // Limpia la consola
        system("cls");
        // Imprime el men� de login en la consola
        cout <<"\t\t\t+-----------------------------------+"<<endl;
        cout <<"\t\t\t|       LOGIN  Alumno                     |"<<endl;
        cout <<"\t\t\t+-----------------------------------+"<<endl;
        cout <<"\t\t\t|Solo tienes permitido 3 intentos   |"<<endl;
        cout <<"\t\t\t+-----------------------------------+"<<endl;
        cout <<"\t\t\tIngrese nombre: ";
        // Lee el nombre del usuario desde la consola
        cin >> usuario;
        cout <<"\t\t\tIngrese la contrasena: ";
        // Declara una variable de tipo char llamada caracter
        char caracter;
        // Lee un car�cter desde la consola sin mostrarlo
        caracter = getch();

        // Inicia un bucle while que se ejecuta mientras el car�cter no sea enter (13 en ASCII)
        while (caracter!=13)
        {
            // Si el car�cter no es backspace (8 en ASCII)
            if(caracter !=8)
            {
                // A�ade el car�cter a la contrase�a
                contrasena.push_back(caracter);
                // Imprime un asterisco en la consola
                cout<<"*";
            }
            else
            {
                // Si la longitud de la contrase�a es mayor a 0
                if(contrasena.length()>0)
                {
                    // Borra el �ltimo car�cter impreso en la consola
                    cout<<"\b \b";
                    // Elimina el �ltimo car�cter de la contrase�a
                    contrasena=contrasena.substr(0,contrasena.length()-1);
                }
            }
            // Lee el siguiente car�cter desde la consola
            caracter=getch();
        }

        // Declara un objeto de tipo ifstream llamado fileU_P
        ifstream fileU_P;
        // Abre el archivo "contraseniaEstuantes.txt" para lectura
        fileU_P.open("contraseniaEstuantes.txt",ios::in);

        // Si no se pudo abrir el archivo
        if (!fileU_P)
        {
            // Imprime un mensaje en la consola
            cout<<"\n\t\t\t No es posible abrir el archivo."<<endl;
            // Cierra el archivo
            fileU_P.close();
            // Retorna false
            return false;
        }
        // Declara una variable de tipo string llamada codigoPrograma e inicial�zala en "5030"
        string codigoPrograma="5030";
        // Declara un objeto de tipo Bitacora llamado Auditoria
        Bitacora Auditoria;

        // Inicia un bucle while que se ejecuta mientras se puedan leer un usuario y una contrase�a desde el archivo
        string user,pass;
        while (fileU_P>>user>>pass)
        {
            // Si el usuario y la contrase�a le�dos desde el archivo coinciden con el usuario y la contrase�a ingresados
            if (user==usuario&&pass==contrasena )
            {
                // Llama a la funci�n miembro ingresoBitacora del objeto Auditoria
                Auditoria.ingresoBitacora(user,codigoPrograma,"RN");
                // Cambia el valor de encontrado a true
                encontrado=true;
                // Termina el bucle while
                break;
            }
        }
        // Cierra el archivo
        fileU_P.close();

        // Si no se encontr� el usuario y la contrase�a
        if(!encontrado)
        {
            // Imprime un mensaje en la consola
            cout << "\n\n\t\t\tCarnet incorrecto" << endl;
            // Imprime un mensaje en la consola
            cout << "\n\n\t\t\tPerdio un intento, Intente de nuevo\n" << endl;
            // Incrementa el contador
            contador++;
            // Pausa la ejecuci�n del programa hasta que el usuario presione una tecla
            system("pause");
        }
    }

    // Si se encontr� el usuario y la contrase�a
    if (encontrado)
    {
        // Limpia la consola
        system("cls");
        // Imprime un mensaje de bienvenida en la consola
        cout << "\n\t----- Bienvenido " << usuario << " -----" << endl;
        // Pausa la ejecuci�n del programa hasta que el usuario presione una tecla
        system("pause");
        //MRILYN JULEISY GARCIA LIMA 9959-23-17838
        char nombre[50];
                    cout << "Ingrese el nombre del estudiante: ";
                    cin.ignore(); // Limpiar el buffer de entrada
                    cin.getline(nombre, 50); // Leer el nombre del estudiante
                    NotaCrud m;
                    m.LeerNotasPorNombre(nombre); // Llama a la funcion para leer notas por nombre
        // Retorna true
        return true;
    }
    else
    {
        // Limpia la consola
        system("cls");
        // Imprime un mensaje en la consola
        cout << "\n\n\t\t\tPERDIO LOS 3 INTENTOS" << endl;
        // Pausa la ejecuci�n del programa hasta que el usuario presione una tecla
        system("pause");
        // Termina la ejecuci�n del programa
        exit(0);

        // Retorna false
        return false;
    }
}



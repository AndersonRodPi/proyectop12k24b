<<<<<<< HEAD


#ifndef LOGIN_ALUMNO_H
#define LOGIN_ALUMNO_H
#include<iostream> // Biblioteca est�ndar para la entrada y salida
#include<fstream> // Biblioteca para manejo de archivos
#include<stdlib.h> // Biblioteca est�ndar de funciones generales
#include<cstdlib> // Biblioteca est�ndar
#include<conio.h> // Biblioteca para la manipulaci�n de la consola
#include<iomanip> // Biblioteca para la manipulaci�n de la entrada/salida formateada
using namespace std;


class Login_Alumno
{
public:
        Login_Alumno(string usuarios,string contrasena); // Constructor que inicializa las variables de usuario y contrase�a
=======
#ifndef LOGIN_ALUMNO_H
#define LOGIN_ALUMNO_H
#include<iostream> // Biblioteca est�ndar para la entrada y salida
#include<fstream> // Biblioteca para manejo de archivos
#include<stdlib.h> // Biblioteca est�ndar de funciones generales
#include<cstdlib> // Biblioteca est�ndar
#include<conio.h> // Biblioteca para la manipulaci�n de la consola
#include<iomanip> // Biblioteca para la manipulaci�n de la entrada/salida formateada
using namespace std;

class Login_Alumno
{
public:
        Login_Alumno(string usuarios,string contrasena); // Constructor que inicializa las variables de usuario y contrase�a
>>>>>>> 1a8b285e44e22ebebc8e610ca110e2ec22da6084

        string setUser(string usuarios); // Encargado de pedir datos
        string getUser(); // Encargado de obtener datos

        string setContrasena(string contrasena); // Encargado de pedir datos
        string getContrasena(); // Encargado de obtener datos

<<<<<<< HEAD
        // M�todo para verificar validacion de usuario
=======
        // M�todo para verificar validacion de usuario
>>>>>>> 1a8b285e44e22ebebc8e610ca110e2ec22da6084
        bool VerificarUsuario();


    private:
        //Variables privadas para mantener la seguridad de contrasanias y usuarios
        string usuarios,contrasena;

};
#endif // LOGIN_ALUMNO_H

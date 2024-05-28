//Creado por Anderson Rodriguez 9959-23-495
#ifndef MATRICULA_H
#define MATRICULA_H
#include<iostream>

using namespace std;

class matricula
{
    private:
		//int choice;
		//string facultad, nombre, apellido1, apellido2, fechaNacimiento, direccion, fecha, telefono, DPI, correo, numeroBoleta;
		//double monto;
		struct Matricula {
        char carnet [20];
        char idSede [10];
        char telSede[20];
        char sede [20];
        char facultad [50];
        char plan [20];
        char jornada[15];
        char nombre[50];
        char email[40];
        char direccion[100];
        char telefono[15];
        };
	public:
	    char x;
	    int choice;
	    //string carnet;
	    string numeroBoleta;
		string numTarjeta, fExpiracion, codSeguridad;
		void menu();
		void insertar();
		void desplegar();
		void borrar();

		int generarNumeroAleatorio();
		string generarNumeroBoleta();
		bool pagarEnLinea();

		struct Alumno {
		    char id[20];          // Almacena la id de los alumnos ingresados
		    char nombre[50];      // Almacena el nombre  del alumno ingresado
		    char Genero[10];      // Almacena el g�nero del alumno ingresado
		    char DPI[40];         // Almacena el DPI del alumno ingresado
		    char direccion[100];  // Almacena la direcci�n del alumno ingresado
		    char nacionalidad[50];// Almacena la nacionalidad del alumno ingresado
		    char telefono[15];    // Almacena el n�mero de tel�fono del alumno ingresado
		    char civil[20];       // Almacena el estado civil del alumno ingresado
		    char fechanaci[20];   // Almacena la fecha de nacimiento del alumno ingresado
		    char anoingre[10];    // Almacena el a�o de ingreso del alumno ingresado
		};

		struct Sede {
		    char id[10];
		    char nombre[50];
		    char telefono[20];
		    };

        struct Facultad {
            int codigo;
            char nombre[50];
            };


};

#endif // MATRICULA_H

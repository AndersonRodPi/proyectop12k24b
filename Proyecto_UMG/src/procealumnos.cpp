<<<<<<< HEAD

#include "procealumnos.h"
#include "Bitacora.h"

#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<cstdlib>
#include<conio.h>
#include<iomanip>
#include<string>

using namespace std;


procealumnos::procealumnos(string dpi, string certiestudios, string fotoestatica, string titulo, string fotocedula, string copiadpi)
{
=======
//Incluyendo los encabezados procesoalumnos.h y bitacora.h
#include "procealumnos.h"
#include "Bitacora.h"
#include "Login.h"

//Incluyendo las librerias a utilizar
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <conio.h>
#include <iomanip>
#include <string>

using namespace std;

//Constructor  procesalumnos y sus parametros
procealumnos::procealumnos(string dpi, string certiestudios, string fotoestatica, string titulo, string fotocedula, string copiadpi, string id, string nombre, string telefono, string DPI, string direccion, string Genero, string nacionalidad, string civil, string fechanaci, string anoingre, string solvente)
{
    //Asignando los valores de los parametros a los atributos del objeto

>>>>>>> 622f8ebce2543dc8685ec46d102fff264bc41df3
    this->dpi = dpi;
    this->certiestudios = certiestudios;
    this->fotoestatica = fotoestatica;
    this->titulo = titulo;
    this->fotocedula = fotocedula;
    this->copiadpi = copiadpi;
<<<<<<< HEAD
}

=======
    this->id = id;
    this->nombre = nombre;
    this->telefono = telefono;
    this->DPI = DPI;
    this->direccion = direccion;
    this->Genero = Genero;
    this->nacionalidad = nacionalidad;
    this->civil = civil;
    this->fechanaci = fechanaci;
    this->anoingre = anoingre;
    this->solvente= solvente;

}
//Estableciendo la id
>>>>>>> 622f8ebce2543dc8685ec46d102fff264bc41df3
string procealumnos::setdpi(string dpi)
{
    this->dpi = dpi;
    return dpi;
}

<<<<<<< HEAD
=======
//Obteniendo la id
>>>>>>> 622f8ebce2543dc8685ec46d102fff264bc41df3
string procealumnos::getdpi()
{
    return dpi;
}

<<<<<<< HEAD
=======
//Estableciendo el certificado de estudios
>>>>>>> 622f8ebce2543dc8685ec46d102fff264bc41df3
string procealumnos::setcertiestudios(string certiestudios)
{
    this->certiestudios = certiestudios;
    return certiestudios;
}

<<<<<<< HEAD
=======
//obteniendo el certificado de estudios
>>>>>>> 622f8ebce2543dc8685ec46d102fff264bc41df3
string procealumnos::getcertiestudios()
{
    return certiestudios;
}

<<<<<<< HEAD
=======
//Estableciendo la foto estatica
>>>>>>> 622f8ebce2543dc8685ec46d102fff264bc41df3
string procealumnos::setfotoestatica(string fotoestatica)
{
    this->fotoestatica = fotoestatica;
    return fotoestatica;
}

<<<<<<< HEAD
=======
//obteniendo la foto estatica
>>>>>>> 622f8ebce2543dc8685ec46d102fff264bc41df3
string procealumnos::getcfotoestatica()
{
    return fotoestatica;
}

<<<<<<< HEAD
=======
//Estableciendo el titulo
>>>>>>> 622f8ebce2543dc8685ec46d102fff264bc41df3
string procealumnos::settitulo(string titulo)
{
    this->titulo = titulo;
    return titulo;
}

<<<<<<< HEAD
=======
//obteniendo el titulo
>>>>>>> 622f8ebce2543dc8685ec46d102fff264bc41df3
string procealumnos::gettitulo()
{
    return titulo;
}

<<<<<<< HEAD
=======
//Estableciendo la foto cedula
>>>>>>> 622f8ebce2543dc8685ec46d102fff264bc41df3
string procealumnos::setfotocedula(string fotocedula)
{
    this->fotocedula = fotocedula;
    return fotocedula;
}

<<<<<<< HEAD
=======
//obteniendo la foto cedula
>>>>>>> 622f8ebce2543dc8685ec46d102fff264bc41df3
string procealumnos::gettfotocedula()
{
    return fotocedula;
}

<<<<<<< HEAD
=======
//Estableciendo la copia de dpi
>>>>>>> 622f8ebce2543dc8685ec46d102fff264bc41df3
string procealumnos::setcopiadpi(string copiadpi)
{
    this->copiadpi = copiadpi;
    return copiadpi;
}

<<<<<<< HEAD
=======
//Obteniendo la copia de dpi
>>>>>>> 622f8ebce2543dc8685ec46d102fff264bc41df3
string procealumnos::getcopiadpi()
{
    return copiadpi;
}

<<<<<<< HEAD
void procealumnos::menu()
{
    string codigoPrograma="2050";
Bitacora Auditoria;
string user, contrasena;
Auditoria.ingresoBitacora(user,codigoPrograma,"PA");
    int opc;
    do
    {
        system("cls");
=======
//Estableciendo la id
string procealumnos::setid(string id)
{
    this->id = id;
    return id;
}

//Obteniendo la id del alumno
string procealumnos::getid()
{
    return id;
}

//Estableciendo el nombre del alumno
string procealumnos::setnombre(string nombre)
{
    this->nombre = nombre;
    return nombre;
}

//Obteniendo el nombre del alumno
string procealumnos::getnombre()
{
    return nombre;
}

//Estableciendo el telefono del alumno
string procealumnos::setTelefono(string telefono)
{
    this->telefono = telefono;
    return telefono;
}

//Obteniendo el telefono del alumno
string procealumnos::getTelefono()
{
    return telefono;
}

//Estableciento el DPI del alumno
string procealumnos::setDPI(string DPI)
{
    this->DPI = DPI;
    return DPI;
}

//Obteniendo el DPI del alumno
string procealumnos::getDPI()
{
    return DPI;
}

//Estableciendo la direccion del alumno
string procealumnos::setdireccion(string direccion)
{
    this->direccion = direccion;
    return direccion;
}


//Obteniendo la direccion del alumno
string procealumnos::getdireccion()
{
    return direccion;
}

//Estableciendo el genero del alumno
string procealumnos::setGenero(string Genero)
{
    this->Genero = Genero;
    return Genero;
}

//Obteniendo el genero del alumno
string procealumnos::getGenero()
{
    return Genero;
}


//Estableciendo la nacionalidad del alumno
string procealumnos::setnacionalidad(string nacionalidad)
{
    this->nacionalidad = nacionalidad;
    return nacionalidad;
}

//Obteniendo la nacionalidad del alumno
string procealumnos::getnacionalidad()
{
    return nacionalidad;
}

//Estableciendo el estado civil del alumno
string procealumnos::setcivil(string civil)
{
    this->civil = civil;
    return civil;
}

//Obteniendo  el estado civil del alumno
string procealumnos::getcivil()
{
    return civil;
}

//Estableciendo la fecha de nacimiento del alumno
string procealumnos::setfechanaci(string fechanaci)
{
    this->fechanaci = fechanaci;
    return fechanaci;
}

//Obteniendo la fecha de nacimiento del alumno
string procealumnos::getfechanaci()
{
    return fechanaci;
}

//Estableciendo el a�o de ingreso del alumno
string procealumnos::setanoingre(string anoingre)
{
    this->anoingre = anoingre;
    return anoingre;
}

//obteniendo el a�o de ingreso
string procealumnos::getanoingre()
{
    return anoingre;
}

//estableciendo la solventura
string procealumnos::setsolvente(string solvente)
{
    this->solvente = solvente;
    return solvente;
}

//obteniendo solventura
string procealumnos::getsolvente()
{
    return solvente;
}

//Funcion para poder observar el menu
void procealumnos::menu()
{
//Implementando la bitacora
//Declarando variable string con el codigo programa
    string usuarioActual = Login::getUsuarioActual();
    Bitacora bitacora;
    bitacora.ingresoBitacora(usuarioActual, "5002", "PRCA");
    //Declarando variable int

    int opc;

    //Inicio del ciclo while
    do
    {
        //limpiando pantalla
        system("cls");

        //Dise�o del menu procesos de alumnos
>>>>>>> 622f8ebce2543dc8685ec46d102fff264bc41df3
        cout<<"+-----------------------------------------------+"<<endl;
		cout<<"|              Procesos de Alumnos              |"<<endl;
		cout<<"+-----------------------------------------------+"<<endl;
		cout<<"|          1. Procesos de Alumnos               |"<<endl;
<<<<<<< HEAD
		cout<<"|          2. Regresar al menu                  |"<<endl;
		cout<<"+-----------------------------------------------+"<<endl;
		cout<<"|           Ingrese su opcion [1/2]             |"<<endl;
		cout<<"+-----------------------------------------------+"<<endl;
        cin >> opc;

        switch(opc)
        {
        case 1:
            insertar();
            break;
        case 2:
            break;
        }
    } while (opc!=2);
=======
		cout<<"|          2. Tabla de Procesos                 |"<<endl;
		cout<<"|          3. Regresar al menu                  |"<<endl;
		cout<<"+-----------------------------------------------+"<<endl;
		cout<<"|           Ingrese su opcion [1/2/3]           |"<<endl;
		cout<<"+-----------------------------------------------+"<<endl;
        cin >> opc;

        //Switch case
        switch(opc)
        {
        //Opcion 1
        case 1:
            //Se valida el carnet y inserta un nuevo alumno
            if (validarCarnet())
            {
                //Funcion insertar
                insertar();
            }
            break;
        case 2:
            mostrarmenu();
            break;
        case 3:
            break;
        }
    } while (opc!=3);
}

//Funcion bool para validar el carnet
bool procealumnos::validarCarnet() {



    //Limpia pantalla
    system("cls");

    // objeto de la clase fstream
    fstream archivo;

    // cadena de texto
    string idPersona;

    //Variable para indicar si es encontrado
    bool encontrado = false;

    //Encabezado
    cout << "+---------------------------------------------------------------------------------+" << endl;
    cout << "+                      Bienvenido, ingrese su n�mero de carnet                     +" << endl;
    cout << "+---------------------------------------------------------------------------------+" << endl;

    // Abre el archivo Alumnos.dat en modo binario para lectura y escritura
    archivo.open("Alumnos.dat", ios::binary| ios::in | ios::out);

    // Verifica si el n�mero de carnet no fue encontrado
    if (!archivo) {
        cout << "Error, no se encuentra informacion...";
        return false;
    }

    //Mensaje al usuario
    cout << "Ingrese su numero de carnet: ";
    cin >> idPersona;

    // Declara un objeto de la clase Alumno
    Alumno alumno;

    // Lee secuencialmente el archivo para buscar el n�mero de carnet ingresado

    while (archivo.read(reinterpret_cast<char*>(&alumno), sizeof(Alumno))) {
        if (alumno.id == idPersona) {
            encontrado = true;
            cout << "Usuario Registrado" << endl;
            break;
        }
    }
    //cierra el archivo
    archivo.close();

    //Si no encuentra
    if (!encontrado) {
        cout << "No se encontro un estudiante con el ID proporcionado." << endl;
        return false;
    }

    cout << "Presione Enter Para Continuar";
    cin.ignore();
    cin.get();

    return true;
>>>>>>> 622f8ebce2543dc8685ec46d102fff264bc41df3
}

void procealumnos::insertar()
{
<<<<<<< HEAD
    string codigoPrograma="2175";
Bitacora Auditoria;
string user, contrasena;
Auditoria.ingresoBitacora(user,codigoPrograma,"PAI");
    system("cls");

    cout<<"+---------------------------------------------------------+"<< endl;
    cout<<"|                Agregar detalles de alumno               |"<< endl;
    cout<<"+---------------------------------------------------------+"<< endl;

    Procealumnos proalumnos;

    cout<<" Ingrese un numero uno (1) para confirmar y un numero cero (0) para negar." << endl;
    cin.ignore();

    cout<<"       -> El alumno cuenta con DPI?: ";
    cin.getline(proalumnos.dpi, 15);

    cout<<"       -> El alumno cuenta con la certificacion de estudio?: ";
    cin.getline(proalumnos.certiestudios, 15);

    cout<<"       -> El alumno cuenta con la foto estatica?: ";
    cin.getline(proalumnos.fotoestatica, 15);

    cout<<"       -> El alumno cuenta con el titulo original?: ";
    cin.getline(proalumnos.titulo, 15);

    cout<<"       -> El alumno cuenta con la foto cedula?: ";
    cin.getline(proalumnos.fotocedula, 15);

     cout<<"       -> El alumno cuenta con una copia del DPI al 200%?: ";
    cin.getline(proalumnos.copiadpi, 15);

    cout<<"+---------------------------------------------------------+"<< endl;
    ofstream archivo("ProcesoAlumnos.dat", ios::binary | ios::app);
    archivo.write(reinterpret_cast<const char*>(&proalumnos), sizeof(proalumnos));
    archivo.close();
}
=======
    string usuarioActual = Login::getUsuarioActual();
    Bitacora bitacora;
    bitacora.ingresoBitacora(usuarioActual, "2005", "PRCI");
    system("cls");

    cout << "+---------------------------------------------------------+" << endl;
    cout << "|                Agregar detalles de alumno               |" << endl;
    cout << "+---------------------------------------------------------+" << endl;

    Procealumnos procealumnos;

    cout << " Ingrese un numero uno (1) para confirmar y un numero cero (0) para negar." << endl;
    cin.ignore();

    cout << "       -> El alumno cuenta con DPI?: ";
    cin.getline(procealumnos.dpi, 20);

    cout << "       -> El alumno cuenta con la certificacion de estudio?: ";
    cin.getline(procealumnos.certiestudios, 50);

    cout << "       -> El alumno cuenta con la foto estatica?: ";
    cin.getline(procealumnos.fotoestatica, 10);

    cout << "       -> El alumno cuenta con el titulo original?: ";
    cin.getline(procealumnos.titulo, 20);

    cout << "       -> El alumno cuenta con la foto cedula?: ";
    cin.getline(procealumnos.fotocedula, 100);

    cout << "       -> El alumno cuenta con una copia del DPI al 200%?: ";
    cin.getline(procealumnos.copiadpi, 50);

    // Determinar la solvencia en funci�n de las respuestas
    int solvente = 1;
    if (string(procealumnos.dpi) != "1" ||
        string(procealumnos.certiestudios) != "1" ||
        string(procealumnos.fotoestatica) != "1" ||
        string(procealumnos.titulo) != "1" ||
        string(procealumnos.fotocedula) != "1" ||
        string(procealumnos.copiadpi) != "1") {
        solvente = 0;
    }

    // Asignar el valor de solvencia
    strcpy(procealumnos.solvente, (solvente == 1) ? "1" : "0");

    cout << "+---------------------------------------------------------+" << endl;
    ofstream archivo("ProcesoAlumnos.dat", ios::binary | ios::app);
    archivo.write(reinterpret_cast<const char *>(&procealumnos), sizeof(Procealumnos));
    archivo.close();
}

void procealumnos::mostrarmenu()
{
    string usuarioActual = Login::getUsuarioActual();
    Bitacora bitacora;
    bitacora.ingresoBitacora(usuarioActual, "2006", "PRCM");
    system("cls");

    cout << "+---------------------------------------------------------+" << endl;
    cout << "|            Mostrar detalles de los alumnos              |" << endl;
    cout << "|              (solvente=1 | pendiente=0)                 |" << endl;
    cout << "+---------------------------------------------------------+" << endl;

    ifstream archivo("ProcesoAlumnos.dat", ios::binary| ios::app);
    if (!archivo)
    {
        cout << "Error al abrir el archivo." << endl;
        return;
    }

    Procealumnos procealumnos;

    while (archivo.read(reinterpret_cast<char *>(&procealumnos), sizeof(Procealumnos)))
    {
        cout << "       -> DPI: " << procealumnos.dpi << endl;
        cout << "       -> Certificacion de estudio: " << procealumnos.certiestudios << endl;
        cout << "       -> Foto estatica: " << procealumnos.fotoestatica << endl;
        cout << "       -> Titulo original: " << procealumnos.titulo << endl;
        cout << "       -> Foto cedula: " << procealumnos.fotocedula << endl;
        cout << "       -> Copia DPI al 200%: " << procealumnos.copiadpi << endl;
        cout << "+---------------------------------------------------------+" << endl;
    }

    archivo.close();

    cout << "Presione Enter Para Continuar";
    cin.ignore();
    cin.get();
}



>>>>>>> 622f8ebce2543dc8685ec46d102fff264bc41df3

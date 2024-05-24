#include <iostream>
#include <fstream> //Libreria necesaria para la creacion, lectura y manejo de archivos
#include <iomanip> //Libreria necesaria para el comando setw()
#include "login.h"
#include "Bitacora.h"

using namespace std;

class usualumnos
{
    public:
        void menu();
        void pideDatos();
        void muestraDatos();
        void editaDatos();
        void borraDatos();

    private:
        string nombre, contra;
};

void usualumnos::menu()
{

    string codigoPrograma="2525";
//Instancia de la clase bitacora
    Bitacora Auditoria;
//Declarando 2 variables string con el codigo programa
    string user, contrasena;
    char nombreUsuario[MAX];
// ingreso en la bit�cora pasamos como par�metros el nombre de usuario, el c�digo del programa y un c�digo de operaci�n
    Auditoria.ingresoBitacora(nombreUsuario,codigoPrograma,"USAL");

    int opc;
    do
    {
        system("cls");
        cout<<"+-----------------------------------------------+"<<endl;
		cout<<"|        Gestion de Usuarios de Alumnos         |"<<endl;
		cout<<"+-----------------------------------------------+"<<endl;
		cout<<"|            1. Agregar Usuario                 |"<<endl;
		cout<<"|            2. Mostrar Usuario                 |"<<endl;
		cout<<"|            3. Modificar Usuario               |"<<endl;
		cout<<"|            4. Borrar Usuario                  |"<<endl;
		cout<<"|            5. Regresar al menu                |"<<endl;
		cout<<"+-----------------------------------------------+"<<endl;
		cout<<"|         Ingrese su opcion [1/2/3/4/5]         |"<<endl;
		cout<<"+-----------------------------------------------+"<<endl;
        cin >> opc;

        switch(opc)
        {
        case 1:
            pideDatos();
            break;
        case 2:
            muestraDatos();
            break;
        case 3:
            editaDatos();
            break;
        case 4:
            borraDatos();
            break;
        case 5:
            break;
        }
    } while (opc!=5);

}

void usualumnos::pideDatos()
{
    system("cls");
    fstream file;

    string codigoPrograma="2530";
//Instancia de la clase bitacora
    Bitacora Auditoria;
//Declarando 2 variables string con el codigo programa
    string user, contrasena;
    char nombreUsuario[MAX];
// ingreso en la bit�cora pasamos como par�metros el nombre de usuario, el c�digo del programa y un c�digo de operaci�n
    Auditoria.ingresoBitacora(nombreUsuario,codigoPrograma,"USALP");

    cout<<"+---------------------------------------------------------+"<< endl;
    cout<<"|        Agregar detalles del Usuario de Alumnos          |"<< endl;
    cout<<"+---------------------------------------------------------+"<< endl;

    cout<<"       -> Ingrese un nombre: ";
    cin >> nombre;
    cout<<"       -> Ingrese una contrasena: ";
    cin >> contra;

    file.open("UsuariosAlumnos.txt", ios::app | ios::out);
    file << left << setw(15) << nombre << left << setw(10) << contra << "\n";
    file.close();
    cout << "\n" << endl;
    system("pause");
    system("cls");
}

void usualumnos::muestraDatos()
{

    string codigoPrograma="2550";
//Instancia de la clase bitacora
    Bitacora Auditoria;
//Declarando 2 variables string con el codigo programa
    string user, contrasena;
    char nombreUsuario[MAX];
// ingreso en la bit�cora pasamos como par�metros el nombre de usuario, el c�digo del programa y un c�digo de operaci�n
    Auditoria.ingresoBitacora(nombreUsuario,codigoPrograma,"USALD");

    system("cls");
    fstream file;
    int total=0;

    cout<<"+---------------------------------------------------------+"<< endl;
    cout<<"|        Mostrar detalles del Usuario de Alumnos          |"<< endl;
    cout<<"+---------------------------------------------------------+"<< endl;

    file.open("UsuariosAlumnos.txt", ios::in);
    if(!file)
    {
        cout << "No hay informacion registrada";
        file.close();
    }
    else
    {
        file >> nombre >> contra;
        while (!file.eof())
        {
            total++;
            cout<<"       -> Ingrese un nombre: "<< nombre << endl;
            cout<<"       -> Ingrese una contrasena: "<< contra << endl;
            cout << "+---------------------------------------------------------+" << endl;
            file >> nombre >> contra;
            cout << "\n";
        }
        if (total==0)
        {
            cout << "No hay informacion registrada";
            file.close();
        }
    }
    file.close();
    system("pause");
    system("cls");
}

void usualumnos::editaDatos()
 {

    string codigoPrograma="2555";
//Instancia de la clase bitacora
    Bitacora Auditoria;
//Declarando 2 variables string con el codigo programa
    string user, contrasena;
    char nombreUsuario[MAX];
// ingreso en la bit�cora pasamos como par�metros el nombre de usuario, el c�digo del programa y un c�digo de operaci�n
    Auditoria.ingresoBitacora(nombreUsuario,codigoPrograma,"USALE");

    system("cls");
    fstream file, file1;
    string foundNom;

    cout<<"+---------------------------------------------------------+"<< endl;
    cout<<"|         Editar detalles del Usuario de Alumnos          |"<< endl;
    cout<<"+---------------------------------------------------------+"<< endl;

    file.open("UsuariosAlumnos.txt", ios::in);
    if(!file)
    {
        cout << "No hay informacion registrada";
        file.close();
    }
    else
    {
        cout << "Ingrese el nombre del usuario que quiera modificar: ";
        cin >> foundNom;
        file1.open("Datos.txt", ios::app | ios::out);
        file >> nombre >> contra;
        while (!file.eof())
        {
            if(foundNom!=nombre)
            {
                file1 << left << setw(15) << nombre << left << setw(10) << contra << "\n";
            }
            else
            {
                cout<<"       -> Ingrese un nombre: ";
                cin >> nombre;
                cout<<"       -> Ingrese una contrasena: ";
                cin >> contra;
                file1 << left << setw(15) << nombre << left << setw(10) << contra << "\n";
            }
            file >> nombre >> contra;
        }
        file1.close();
        file.close();
        remove("UsuariosAlumnos.txt");
        rename("Datos.txt","UsuariosAlumnos.txt");
    }
    system("pause");
    system("cls");
 }

void usualumnos::borraDatos()
{

    string codigoPrograma="2560";
//Instancia de la clase bitacora
    Bitacora Auditoria;
//Declarando 2 variables string con el codigo programa
    string user, contrasena;
    char nombreUsuario[MAX];
// ingreso en la bit�cora pasamos como par�metros el nombre de usuario, el c�digo del programa y un c�digo de operaci�n
    Auditoria.ingresoBitacora(nombreUsuario,codigoPrograma,"USALB");

   	system("cls");
	fstream file, file1;
	string partcipante;

	int encontrados= 0;

	cout<<"+---------------------------------------------------------+"<< endl;
    cout<<"|       Eliminar detalles del Usuario de Alumnos          |"<< endl;
    cout<<"+---------------------------------------------------------+"<< endl;

	file.open("UsuariosAlumnos.txt", ios::in);
	if (!file)
	{
		cout << "\t\t\tNo hay informacion...";

		file.close();
	}
	else
	{
		cout << "\n Ingrese el nombre del usuario que desea eliminar : ";
		cin >> partcipante;

		file1.open("record2.txt", ios::app | ios::out);

		file >> nombre >> contra;

		while (!file.eof())
		{
			if (partcipante != nombre)
			{
                file1<<left<<setw(15)<< nombre <<left<<setw(15)<< contra <<"\n";
			}
			else
			{
				encontrados++;
				cout << "\n\t\t\tBorrado del sistema exitoso"<<endl;
			}
                file >> nombre >> contra;

		}

		if (encontrados == 0)
		{
			cout << "\n\t\t\t Nombre de usuario no encontrada...";
		}

		file1.close();
		file.close();

		remove("UsuariosAlumnos.txt");

		rename("record2.txt", "UsuariosAlumnos.txt");
	}
 }

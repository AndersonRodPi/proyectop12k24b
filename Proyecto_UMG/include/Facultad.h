// Archivo de iencabezado FACULTAD que contiene la estructura de la clase como definiciones
// de clases y de funciones
#ifndef FACULTAD_H
#define FACULTAD_H
#include<stdlib.h>
#include<cstdlib>
#include<conio.h>
#include<iomanip>
<<<<<<< HEAD
=======
//Elaborado por: Cristian David Sipac Ispache 9959-23-1567
>>>>>>> 7fee22e7c1a780459548acc106d5712411a3308b

using namespace std;

struct Facultad {
    int codigo;
    char nombre[50];
};
class FacultadCRUD {
public:

    void IngresarFa();
    void ModificarFa();
    void BorrarFa();
    void DesplegarFa();
    void Crudfacultad();

};


#endif // FACULTAD_H

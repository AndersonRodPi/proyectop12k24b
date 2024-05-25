//Creado por Jonathan Samuel Gonzalez Ixpata
#ifndef SUELDOS_H
#define SUELDOS_H

#include <string>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

class sueldos {
public:
    void menu(); // Men� principal de sueldos
    void menuEmpleados(); // Men� de gesti�n de empleados

private:
    struct Empleado {
        string id;
        string nombre;
        string email;
        string puesto;
        double salario;
        string telefono;
    };

    void agregarEmpleado(); // Funci�n para agregar un empleado
    void eliminarEmpleado(); // Funci�n para eliminar un empleado
    void verEmpleados(); // Funci�n para ver la informaci�n de los empleados
    void generacionNomina(); // Funci�n para la generaci�n de n�mina
};

#endif // SUELDOS_H

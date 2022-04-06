#ifndef ASISTENTE_H
#define ASISTENTE_H

#include <string>
using namespace std;

class Asistentes{
    public:
        Asistentes();
        void ver();
        void setnombre();
        void setapellido();
        void setnacimiento();
        void setdias();
        void setidentificador();
        string getnombre();
        string getapellido();
        int getnacimiento();
        int getdias();
        int getidentificador();
    private:
        string nombre;
        string apellido;
        int nacimiento;
        int dias;
        int identificador;
};
#endif
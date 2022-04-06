#include "Asistente.h"
#include <iostream>

Asistentes::Asistentes(){
    nombre='\0';
    apellido='\0';
    nacimiento='\0';
    dias='\0';
    identificador='\0';
}
void Asistentes::ver(){
    cout << "________________________________________"<< endl;
    cout <<"Identificador único: "<<identificador<<endl;
    cout <<"Nombre: "<<nombre<<endl;
    cout <<"Apellido: "<<apellido<<endl;
    cout <<"Nacimiento: "<<nacimiento<<endl;
    cout <<"Numero de dias que asistira al evento: "<<dias<<endl;
    cout << "________________________________________"<< endl;
}
void Asistentes::setnombre(){
    cout<<"Ingrese los nombre del asistente: ";
    getline(cin,nombre);
}
void Asistentes::setapellido(){
    cout<<"Ingrese los apellidos del asistente: ";
    getline(cin,apellido);
}
void Asistentes::setnacimiento(){
    cout<<"Ingrese su fecha de nacimiento: ";
    cin>>nacimiento;
    cin.ignore();
    cin.clear();
}
void Asistentes::setdias(){
    cout<<"número de días que asistirá al evento: ";
    cin>>dias;
    cin.ignore();
    cin.clear();
}
void Asistentes::setidentificador(){
    cout<<"Ingrese el identificador único: ";
    cin>>identificador;
    cin.ignore();
    cin.clear();
}
string Asistentes::getnombre(){
    return nombre;
}
string Asistentes::getapellido(){
    return apellido;
}
int Asistentes::getnacimiento(){
    return nacimiento;
}
int Asistentes::getdias(){
    return dias;
}
int Asistentes::getidentificador(){
    return identificador;
}
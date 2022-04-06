/******************************************************************************
Con estas líneas evitamos problemas con la lectura de string con espacios entremedio.

cin.ignore();
cin.clear();

getline(cin,nombre);

*******************************************************************************/
#include <iostream>
#include <fstream>
#include <vector>
#include "Asistente.h"
#include "Funciones.h"

using namespace std;

void mostrar_menu(){
    cout << "Agregar asistente" << endl;
    cout << "Mostrar Asistentes" << endl;
    cout << "Ordenar por edad" << endl;
    cout << "Editar asistente" << endl;
    cout << "Eliminar Asistente" << endl;
    cout << "Salir" << endl;
}
/*void crear_asistente(){
    Asistentes A1;
    A1.setidentificador();
    A1.setnombre();
    A1.setapellido();
    A1.setnacimiento();
    A1.setdias();
}*/
/*void leerArchivoYPasarAlVector(string nombreArchivo, Asistente p[] , int &indice){
    ifstream archivo;
    string lineaObtenida;
    string palabra;

    archivo.open(nombreArchivo, ios::in);
    
    if(archivo.is_open() == true) {
        while( getline(archivo, lineaObtenida, '\n')){
            //ahora recorremos la línea
            vector<string> data = split(lineaObtenida, ';');
            
            //TIP: Utilice atoi para convertir un vector de caracteres a un número
            p[indice].setId( atoi(data[0].c_str()) );
            
            p[indice].setNombre( data[1] );
            
            indice++;
        }
    }
    archivo.close();
}*/
int main()
{
    int indice = 0; //indice del vector o cantidad actual de elementos en el vector
    //Asistentes baseDatos[10]; 
    string nombreArchivo ="baseDatos.txt";
    int opcion_menu;
    
    //leemos los datos existentes
    //leerArchivoYPasarAlVector(nombreArchivo,baseDatos, indice );
    
    switch(opcion_menu){
        case 1: 
        break;
        case 2: 
        break;
        case 3: 
        break;
        case 4: 
        break;
        case 5: 
        break;
        case 6: 
        break;
        default: cout << "Digito ingresado no válido" << endl;
    }
    
    
    
    //A1.ver();
    /*cout << A1.getnombre() << endl;
    cout << A1.getapellido() << endl;
    cout << A1.getnacimiento() << endl;
    cout << A1.getdias() << endl;
    cout << A1.getidentificador() << endl;*/
    
    return 0;
}

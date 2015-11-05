/* 
 * File:   main.cpp
 * Author:  Nelson Cardenas
 *
 * Created on 04 de noviembre de 2015, 09:26 AM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int menuPrincipal();
int menuArchivo();
int menuCampos();
int menuRegistros();
int menuIndices();
int menuEstandarizacion();

int main(int argc, char** argv) {
    int opcion = 0;
    opcion = menuPrincipal();
    while (opcion < 1 || opcion > 5) {
        opcion = menuPrincipal();
    }
    if (opcion == 1) {
        opcion = menuArchivo();
        while (opcion < 1 || opcion > 5) {
            opcion = menuArchivo();
        }
    }
    if (opcion == 2) {
        opcion = menuCampos();
        while(opcion < 1 || opcion > 5){
            opcion = menuCampos();
        }
    }
    if (opcion == 3) {
        opcion = menuRegistros();
        while(opcion < 1 || opcion > 6){
            opcion = menuRegistros();
        }
    }
    if (opcion == 4) {
        opcion = menuIndices();
        while(opcion < 1 || opcion > 3){
            opcion = menuIndices();
        }
    }
    if (opcion == 5) {
        opcion = menuEstandarizacion();
        while(opcion < 1 || opcion > 4){
            opcion = menuEstandarizacion();
        }
    }
    return 0;
}

int menuPrincipal() {
    int opcion = 0;
    cout << "****MENU PRINCIPAL****" << endl;
    cout << "1. Archivo" << endl;
    cout << "2. Campos" << endl;
    cout << "3. Registros" << endl;
    cout << "4. Índices" << endl;
    cout << "5. Estandarización" << endl;
    cin >> opcion;
    return opcion;
}

int menuArchivo() {
    int opcion = 0;
    cout << "****MENU ARCHIVO****" << endl;
    cout << "1. Nuevo Archivo" << endl;
    cout << "2. Salvar Archivo" << endl;
    cout << "3. Cerrar Archivo" << endl;
    cout << "4. Salir" << endl;
    cout << "5. VOLVER AL MENU PRINCIPAL" << endl;
    cin >> opcion;
    return opcion;
}

int menuCampos() {
    int opcion = 0;
    cout << "****MENU CAMPOS****" << endl;
    cout << "1. Crear Campos" << endl;
    cout << "2. Listar Campos" << endl;
    cout << "3. Modificar Campos" << endl;
    cout << "4. Borrar Campos" << endl;
    cout << "5. VOLVER AL MENU PRINCIPAL" << endl;
    cin >> opcion;
    return opcion;
}

int menuRegistros() {
    int opcion = 0;
    cout << "****MENU REGISTROS****" << endl;
    cout << "1. Introducir Registros" << endl;
    cout << "2. Modificar Registros" << endl;
    cout << "3. Buscar Registros" << endl;
    cout << "4. Borrar Registros" << endl;
    cout << "5. Listar Registros" << endl;
    cout << "6. VOLVER AL MENU PRINCIPAL" << endl;
    cin >> opcion;
    return opcion;
}

int menuIndices() {
    int opcion = 0;
    cout << "****MENU ÍNDICES****" << endl;
    cout << "1. Crear Índices" << endl;
    cout << "2. Re Indexar Archivos" << endl;
    cout << "3. VOLVER AL MENU PRINCIPAL" << endl;
    cin >> opcion;
    return opcion;
}

int menuEstandarizacion() {
    int opcion = 0;
    cout << "****MENU ESTANDARIZACION****" << endl;
    cout << "1. Exportar Excel" << endl;
    cout << "2. Exportar XML con Schema" << endl;
    cout << "3. Exportar JSON" << endl;
    cout << "4. VOLVER AL MENU PRINCIPAL" << endl;
    cin >> opcion;
    return opcion;
}

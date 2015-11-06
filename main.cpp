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
    do {
        opcion = menuPrincipal();
        while (opcion < 1 || opcion > 5) {
            opcion = menuPrincipal();
        }

        switch (opcion) {
            case 1: //Archivos
                int opcionArchivo = menuArchivo();
                while (opcionArchivo < 1 || opcionArchivo > 5) {
                    opcionArchivo = menuArchivo();
                }
                if (opcionArchivo == 1) {

                } else if (opcionArchivo == 2) {

                } else if (opcionArchivo == 3) {

                } else if (opcionArchivo == 4) {
                    opcion = 6;
                } else if (opcionArchivo == 5) {
                    
                }
                break;
            case 2: //Campos
                int opcionCampos = menuCampos();
                while (opcionCampos < 1 || opcionCampos > 5) {
                    opcionCampos = menuCampos();
                }
                break;

            case 3: //Registros
                int opcionRegistros = menuRegistros();
                while (opcionRegistros < 1 || opcionRegistros > 6) {
                    opcionRegistros = menuRegistros();
                }
                break;

            case 4: //Indices
                int opcionIndices = menuIndices();
                while (opcionIndices < 1 || opcionIndices > 3) {
                    opcionIndices = menuIndices();
                }

                break;

            case 5: //Estandarizacion
                int opcionEstandarizacion = menuEstandarizacion();
                while (opcionEstandarizacion < 1 || opcionEstandarizacion > 4) {
                    opcionEstandarizacion = menuEstandarizacion();
                }

                break;
        }
    } while (opcion != 6);
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

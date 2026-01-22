#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Estructura simple para agrupar los datos
struct Estudiante {
    string nombre;
    string codigo;
    int edad;
    float promedio;
    bool activo;
};

//  Funciones de Visualización de Datos
void mostrarInformacionCompleta(Estudiante e) {
    cout << "\n--- DATOS DEL ESTUDIANTE ---" << endl;
    cout << "Nombre: " << e.nombre << endl;
    cout << "Codigo: " << e.codigo << endl;
    cout << "Edad: " << e.edad << " anos" << endl;
    cout << "Promedio: " << e.promedio << endl;
    cout << "Estado: " << (e.activo ? "Activo" : "Inactivo") << endl;
}

int main() {
    vector<Estudiante> lista; // Lista dinámica de estudiantes
    int opcion;

    while (true) {
        cout << "\n1. Agregar\n2. Buscar por codigo\n3. Mostrar todos\n4. Salir\n";
        cout << "Opcion: ";
        cin >> opcion;
        cin.ignore(); // Pausa para evitar errores al leer texto

        if (opcion == 4) break;

        if (opcion == 1) {
            Estudiante nuevo;
            cout << "Nombre completo: ";
            getline(cin, nuevo.nombre);
            cout << "Codigo: ";
            cin >> nuevo.codigo;
            cout << "Edad: ";
            cin >> nuevo.edad;
            cout << "Promedio (0.0 - 10.0): ";
            cin >> nuevo.promedio;
            
            // Validación simple del promedio
            if (nuevo.promedio < 0 || nuevo.promedio > 10) {
                cout << "Promedio invalido. Se pondra 0.0" << endl;
                nuevo.promedio = 0;
            }
            
            nuevo.activo = true;
            lista.push_back(nuevo);
            cout << "Estudiante guardado!" << endl;

        } else if (opcion == 2) {
            string buscar;
            cout << "Codigo a buscar: ";
            cin >> buscar;
            for (Estudiante e : lista) {
                if (e.codigo == buscar) mostrarInformacionCompleta(e);
            }

        } else if (opcion == 3) {
            for (Estudiante e : lista) mostrarInformacionCompleta(e);
        }
    }

    return 0;
}
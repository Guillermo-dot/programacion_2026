#include "estudiante.h"
#include <iostream>
using namespace std;

int main() {
    cout << "=== EJERCICIO 01: CLASE ESTUDIANTE ===" << endl;

    // Caso 1: Crear un estudiante usando el constructor por defecto
    cout << "\n--- Caso 1: Estudiante con constructor por defecto ---" << endl;
    Estudiante est1;
    cout << "Estudiante creado con valores por defecto" << endl;

    // Caso 2: Actualizar todos sus atributos
    cout << "\n--- Caso 2: Actualizar todos los atributos ---" << endl;
    est1.actualizarNombre("Juan Garcia");
    est1.actualizarCodigo("EST001");
    est1.actualizarEdad(20);
    est1.actualizarPromedio(8.5);
    est1.actualizarActivo(true);
    cout << "Atributos actualizados exitosamente" << endl;

    // Caso 3: Mostrar su información completa
    cout << "\n--- Caso 3: Mostrar informacion completa ---" << endl;
    est1.mostrarInformacionCompleta();
    est1.calcularEstadoAcademico();

    // Caso 4: Crear otro estudiante usando el constructor con parámetros
    cout << "\n--- Caso 4: Estudiante con constructor con parametros ---" << endl;
    Estudiante est2("María López", "EST002", 21, 9.2, true);
    cout << "Estudiante creado con parámetros" << endl;

    // Caso 5: Mostrar su información completa
    cout << "\n--- Caso 5: Mostrar información completa del segundo estudiante ---" << endl;
    est2.mostrarInformacionCompleta();
    est2.calcularEstadoAcademico();

    // Caso 6: Llamar al método incrementarEdad() y mostrar la nueva edad
    cout << "\n--- Caso 6: Incrementar edad ---" << endl;
    cout << "Edad actual de " << est2.obtenerNombre() << ": " << est2.obtenerEdad() << " años" << endl;
    est2.incrementarEdad();
    cout << "Edad después de incrementar: " << est2.obtenerEdad() << " años" << endl;

    // Caso adicional: Validar actualización de promedio con valor inválido
    cout << "\n--- Caso adicional: Validar promedio invalido ---" << endl;
    est1.actualizarPromedio(12.5);
    cout << "Promedio actual de " << est1.obtenerNombre() << ": " << est1.obtenerPromedio() << endl;

    return 0;
}

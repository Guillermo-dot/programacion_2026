#include "estudiante.h"
#include <iostream>
#include <limits>

int main() {
    std::cout << "=== Sistema de Gestión de Estudiante (entrada por teclado) ===" << std::endl;
    std::cout << std::endl;

    // Datos para el Estudiante 1 (constructor por defecto + actualizar)
    Estudiante estudiante1;
    std::string nombre, codigo;
    int edad = 0;
    float promedio = 0.0f;
    int activo_int = 0;

    std::cout << "Ingrese datos del Estudiante 1:" << std::endl;
    std::cout << "Nombre: ";
    std::getline(std::cin, nombre);
    std::cout << "Código: ";
    std::getline(std::cin, codigo);

    std::cout << "Edad: ";
    while (!(std::cin >> edad) || edad < 0) {
        std::cout << "Edad inválida. Ingrese un entero >= 0: ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    std::cout << "Promedio (0.0 - 10.0): ";
    while (!(std::cin >> promedio)) {
        std::cout << "Promedio inválido. Ingrese un número (ej. 8.5): ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    std::cout << "Activo? (1 = Sí, 0 = No): ";
    while (!(std::cin >> activo_int) || (activo_int != 0 && activo_int != 1)) {
        std::cout << "Ingrese 1 (Sí) o 0 (No): ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    bool activo = (activo_int == 1);
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // limpiar resto de la línea

    // Actualizar estudiante1 con los datos ingresados
    estudiante1.actualizarNombre(nombre);
    estudiante1.actualizarCodigo(codigo);
    estudiante1.actualizarEdad(edad);
    estudiante1.actualizarPromedio(promedio);
    estudiante1.actualizarActivo(activo);

    std::cout << std::endl << "Estudiante 1 (después de actualizar):" << std::endl;
    estudiante1.mostrarInformacionCompleta();
    estudiante1.calcularEstadoAcademico();
    std::cout << std::endl;

    // Preguntar si se desea crear un segundo estudiante con constructor con parámetros
    char opcion = 'n';
    std::cout << "¿Desea crear un segundo estudiante con constructor con parámetros? (s/n): ";
    std::cin >> opcion;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    if (opcion == 's' || opcion == 'S') {
        std::cout << "\nIngrese datos del Estudiante 2:" << std::endl;
        std::cout << "Nombre: ";
        std::getline(std::cin, nombre);
        std::cout << "Código: ";
        std::getline(std::cin, codigo);

        std::cout << "Edad: ";
        while (!(std::cin >> edad) || edad < 0) {
            std::cout << "Edad inválida. Ingrese un entero >= 0: ";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }

        std::cout << "Promedio (0.0 - 10.0): ";
        while (!(std::cin >> promedio)) {
            std::cout << "Promedio inválido. Ingrese un número (ej. 7.5): ";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }

        std::cout << "Activo? (1 = Sí, 0 = No): ";
        while (!(std::cin >> activo_int) || (activo_int != 0 && activo_int != 1)) {
            std::cout << "Ingrese 1 (Sí) o 0 (No): ";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }

        activo = (activo_int == 1);
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        Estudiante estudiante2(nombre, codigo, edad, promedio, activo);

        std::cout << std::endl << "Estudiante 2 (constructor con parámetros):" << std::endl;
        estudiante2.mostrarInformacionCompleta();
        estudiante2.calcularEstadoAcademico();
        std::cout << std::endl;

        // Incrementar edad y mostrar
        std::cout << "Incrementando edad del estudiante 2..." << std::endl;
        estudiante2.incrementarEdad();
        estudiante2.mostrarEdad();
        std::cout << std::endl;

        // Probar validación de promedio con valor inválido
        std::cout << "Intentando actualizar promedio con valor inválido (ej. 15.0):" << std::endl;
        estudiante2.actualizarPromedio(15.0f);
        estudiante2.mostrarPromedio();
        std::cout << std::endl;
    }

    return 0;
}

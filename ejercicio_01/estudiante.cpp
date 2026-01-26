#include "estudiante.h"
#include <iostream>
using namespace std;

// Constructor por defecto
Estudiante::Estudiante() {
    nombre = "";
    codigo = "";
    edad = 0;
    promedio = 0.0;
    activo = false;
}

// Constructor con parámetros
Estudiante::Estudiante(string nombre, string codigo, int edad, float promedio, bool activo) {
    this->nombre = nombre;
    this->codigo = codigo;
    this->edad = edad;
    this->promedio = promedio;
    this->activo = activo;
}

// Setters - Métodos para actualizar
void Estudiante::actualizarNombre(string nuevoNombre) {
    nombre = nuevoNombre;
}

void Estudiante::actualizarCodigo(string nuevoCodigo) {
    codigo = nuevoCodigo;
}

void Estudiante::actualizarEdad(int nuevaEdad) {
    edad = nuevaEdad;
}

void Estudiante::actualizarPromedio(float nuevoPromedio) {
    if (nuevoPromedio >= 0.0 && nuevoPromedio <= 10.0) {
        promedio = nuevoPromedio;
    } else {
        cout << "Error: El promedio debe estar entre 0.0 y 10.0" << endl;
    }
}

void Estudiante::actualizarActivo(bool nuevoEstado) {
    activo = nuevoEstado;
}

// Getters - Métodos para obtener valores
string Estudiante::obtenerNombre() {
    return nombre;
}

string Estudiante::obtenerCodigo() {
    return codigo;
}

int Estudiante::obtenerEdad() {
    return edad;
}

float Estudiante::obtenerPromedio() {
    return promedio;
}

bool Estudiante::obtenerActivo() {
    return activo;
}

// Métodos de Visualización
void Estudiante::mostrarNombre() {
    cout << "Nombre: " << nombre << endl;
}

void Estudiante::mostrarCodigo() {
    cout << "Codigo: " << codigo << endl;
}

void Estudiante::mostrarEdad() {
    cout << "Edad: " << edad << " años" << endl;
}

void Estudiante::mostrarPromedio() {
    cout << "Promedio: " << promedio << endl;
}

void Estudiante::mostrarActivo() {
    if (activo) {
        cout << "Estado: Activo" << endl;
    } else {
        cout << "Estado: Inactivo" << endl;
    }
}

void Estudiante::mostrarInformacionCompleta() {
    cout << "\n=== Informacion del Estudiante ===" << endl;
    mostrarNombre();
    mostrarCodigo();
    mostrarEdad();
    mostrarPromedio();
    mostrarActivo();
    cout << "================================\n" << endl;
}

// Métodos de Utilidad
void Estudiante::incrementarEdad() {
    edad++;
}

void Estudiante::calcularEstadoAcademico() {
    string estado;
    
    if (promedio >= 9.0 && promedio <= 10.0) {
        estado = "Excelente";
    } else if (promedio >= 8.0 && promedio < 9.0) {
        estado = "Muy Bueno";
    } else if (promedio >= 7.0 && promedio < 8.0) {
        estado = "Bueno";
    } else if (promedio >= 6.0 && promedio < 7.0) {
        estado = "Regular";
    } else {
        estado = "Necesita Mejorar";
    }
    
    cout << "Estado Academico: " << estado << endl;
}

#include "estudiante.h"
#include <iostream>

// Constructor por defecto
Estudiante::Estudiante() {
    nombre = "";
    codigo = "";
    edad = 0;
    promedio = 0.0f;
    activo = false;
}

// Constructor con parámetros
Estudiante::Estudiante(std::string nombre, std::string codigo, int edad, float promedio, bool activo) {
    this->nombre = std::move(nombre);
    this->codigo = std::move(codigo);
    this->edad = edad;
    this->promedio = promedio;
    this->activo = activo;
}

// Setters - Métodos para actualizar
void Estudiante::actualizarNombre(const std::string& nuevoNombre) {
    nombre = nuevoNombre;
}

void Estudiante::actualizarCodigo(const std::string& nuevoCodigo) {
    codigo = nuevoCodigo;
}

void Estudiante::actualizarEdad(int nuevaEdad) {
    edad = nuevaEdad;
}

void Estudiante::actualizarPromedio(float nuevoPromedio) {
    if (nuevoPromedio >= 0.0f && nuevoPromedio <= 10.0f) {
        promedio = nuevoPromedio;
    } else {
        std::cout << "Error: El promedio debe estar entre 0.0 y 10.0" << std::endl;
    }
}

void Estudiante::actualizarActivo(bool nuevoEstado) {
    activo = nuevoEstado;
}

// Getters - Métodos para obtener valores
std::string Estudiante::obtenerNombre() const {
    return nombre;
}

std::string Estudiante::obtenerCodigo() const {
    return codigo;
}

int Estudiante::obtenerEdad() const {
    return edad;
}

float Estudiante::obtenerPromedio() const {
    return promedio;
}

bool Estudiante::obtenerActivo() const {
    return activo;
}

// Métodos de Visualización
void Estudiante::mostrarNombre() const {
    std::cout << "Nombre: " << nombre << std::endl;
}

void Estudiante::mostrarCodigo() const {
    std::cout << "Código: " << codigo << std::endl;
}

void Estudiante::mostrarEdad() const {
    std::cout << "Edad: " << edad << " años" << std::endl;
}

void Estudiante::mostrarPromedio() const {
    std::cout << "Promedio: " << promedio << std::endl;
}

void Estudiante::mostrarActivo() const {
    if (activo) {
        std::cout << "Estado: Activo" << std::endl;
    } else {
        std::cout << "Estado: Inactivo" << std::endl;
    }
}

void Estudiante::mostrarInformacionCompleta() const {
    // Versión sencilla y directa para que puedas editar fácilmente desde main
    mostrarNombre();
    mostrarCodigo();
    mostrarEdad();
    mostrarPromedio();
    mostrarActivo();
}

// Métodos de Utilidad
void Estudiante::incrementarEdad() {
    edad++;
}

void Estudiante::calcularEstadoAcademico() const {
    std::string estado;
    
    if (promedio >= 9.0f && promedio <= 10.0f) {
        estado = "Excelente";
    } else if (promedio >= 8.0f && promedio < 9.0f) {
        estado = "Muy Bueno";
    } else if (promedio >= 7.0f && promedio < 8.0f) {
        estado = "Bueno";
    } else if (promedio >= 6.0f && promedio < 7.0f) {
        estado = "Regular";
    } else {
        estado = "Necesita Mejorar";
    }
    
    std::cout << "Estado académico: " << estado << std::endl;
}

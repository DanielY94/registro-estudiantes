#include <iostream>`nusing namespace std;`n`nint main() {`n    cout << "Sistema de Registro de Estudiantes" << endl;`n    return 0;`n}
// Modulo para validar la cedula del estudiante

// Modulo: Ingreso de datos del estudiante
void ingresarEstudiante() {
    string nombre;
    cout << "Ingrese nombre: " ;
}

// Modulo: Menu principal
void mostrarMenu() {
    cout << "1. Registrar\n2. Salir\n" ;
}

// Correccion: Validacion de longitud de cedula a 10 digitos
bool validarCedula(string c) { return c.length() == 10; }

// Refactor: Organizacion de prototipos de funciones al inicio

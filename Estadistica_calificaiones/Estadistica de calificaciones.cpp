#include <iostream>  
#include <vector>    // Librería para usar el contenedor vector (array dinámico)
using namespace std; // Permite usar elementos de std sin escribir "std::" cada vez

int main() {
    int nota; // Variable que almacenará el número de estudiantes (mal nombrada, debería ser "numEstudiantes")

    cout << "¿Cuantos estudiantes? "; // Muestra el mensaje al usuario
    cin >> nota;                      // Lee el número de estudiantes desde la consola

    vector<float> calificaciones(nota); // Crea un vector de flotantes con 'nota' posiciones (una por estudiante)

    // Recorre cada estudiante para pedir su calificación
    for (int i = 0; i < nota; i++) {
        cout << "Calificación del estudiante " << i + 1 << ": "; // Muestra el número del estudiante (base 1)
        cin >> calificaciones[i];                                 // Lee y guarda la calificación en la posición i del vector
    }

    // Calcular estadísticas
    float masAlta = calificaciones[0]; // Inicializa la nota más alta con la primera calificación
    float masBaja = calificaciones[0]; // Inicializa la nota más baja con la primera calificación
    float suma = 0;                    // Acumulador para sumar todas las calificaciones
    int aprobados = 0, reprobados = 0; // Contadores de estudiantes aprobados y reprobados

    // Recorre todas las calificaciones para calcular las estadísticas
    for (int i = 0; i < nota; i++) {
        if (calificaciones[i] > masAlta) masAlta = calificaciones[i]; // Actualiza la nota más alta si encuentra una mayor
        if (calificaciones[i] < masBaja) masBaja = calificaciones[i]; // Actualiza la nota más baja si encuentra una menor
        suma += calificaciones[i];                                     // Acumula la calificación actual a la suma total

        if (calificaciones[i] >= 60) aprobados++;  // Si la nota es 60 o más, cuenta al estudiante como aprobado
        else reprobados++;                          // De lo contrario, lo cuenta como reprobado
    }

    float promedio = suma / nota; // Calcula el promedio dividiendo la suma total entre el número de estudiantes

    // Mostrar resultados
    cout << "\nCalificación más alta: " << masAlta   << endl; // Imprime la calificación más alta encontrada
    cout << "Calificación más baja: "  << masBaja   << endl; // Imprime la calificación más baja encontrada
    cout << "Promedio: "               << promedio  << endl; // Imprime el promedio de todas las calificaciones
    cout << "Aprobados: "              << aprobados << endl; // Imprime la cantidad de estudiantes aprobados
    cout << "Reprobados: "             << reprobados << endl; // Imprime la cantidad de estudiantes reprobados

    return 0; // El programa finalizó correctamente (código de salida 0 = sin errores)
}

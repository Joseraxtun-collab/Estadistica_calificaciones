#include <iostream>
#include <vector>
using namespace std;

int main() {
    int nota;
    cout << "¿Cuantos estudiantes? ";
    cin >> nota;

    vector<float> calificaciones(nota);

    for (int i = 0; i < nota; i++) {
        cout << "Calificación del estudiante " << i + 1 << ": ";
        cin >> calificaciones[i];
    }

    // Calcular estadísticas
    float masAlta = calificaciones[0];
    float masBaja = calificaciones[0];
    float suma = 0;
    int aprobados = 0, reprobados = 0;

    for (int i = 0; i < nota; i++) {
        if (calificaciones[i] > masAlta) masAlta = calificaciones[i];
        if (calificaciones[i] < masBaja) masBaja = calificaciones[i];
        suma += calificaciones[i];
        if (calificaciones[i] >= 60) aprobados++;
        else reprobados++;
    }

    float promedio = suma / nota;

    // Mostrar resultados
    cout << "\nCalificación más alta: " << masAlta << endl;
    cout << "Calificación más baja: " << masBaja << endl;
    cout << "Promedio: " << promedio << endl;
    cout << "Aprobados: " << aprobados << endl;
    cout << "Reprobados: " << reprobados << endl;

    return 0;
}
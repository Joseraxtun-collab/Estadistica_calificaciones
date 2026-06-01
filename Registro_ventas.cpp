#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<float> ventas(7);
    string dias[] = { "Lunes", "Martes", "Miércoles", "Jueves", "Viernes", "Sábado", "Domingo" };

    // Ingresar ventas
    for (int i = 0; i < 7; i++) {
        cout << "Ventas del " << dias[i] << ": ";
        cin >> ventas[i];
    }

    // Calcular estadísticas
    float total = 0;
    float mayorVenta = ventas[0];
    int diaMayor = 0;
    bool sinVentas = false;

    for (int i = 0; i < 7; i++) {
        total += ventas[i];

        if (ventas[i] > mayorVenta) {
            mayorVenta = ventas[i];
            diaMayor = i;
        }

        if (ventas[i] == 0) {
            sinVentas = true;
        }
    }

    // Mostrar resultados
    cout << "\nTotal de ventas de la semana: " << total << endl;
    cout << "Día con mayores ventas: " << dias[diaMayor] << " (Q" << mayorVenta << ")" << endl;

    if (sinVentas) {
        cout << "Hubo días sin ventas." << endl;
    }
    else {
        cout << "No hubo días sin ventas." << endl;
    }

    return 0;
}
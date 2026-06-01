#include <iostream>  // Librería para entrada y salida estándar (cin, cout, endl)
#include <vector>    // Librería para usar el contenedor vector (array dinámico)
using namespace std; // Permite usar elementos de std sin escribir "std::" cada vez

int main() {
    vector<float> ventas(7); // Crea un vector de 7 flotantes para almacenar las ventas de cada día

    string dias[] = { "Lunes", "Martes", "Miércoles", "Jueves", "Viernes", "Sábado", "Domingo" }; // Arreglo con los nombres de los 7 días de la semana

    // Ingresar ventas
    for (int i = 0; i < 7; i++) {                      // Recorre los 7 días de la semana
        cout << "Ventas del " << dias[i] << ": ";       // Muestra el nombre del día actual
        cin >> ventas[i];                               // Lee y guarda el monto de ventas en la posición i del vector
    }

    // Calcular estadísticas
    float total = 0;             // Acumulador para sumar las ventas de todos los días
    float mayorVenta = ventas[0]; // Inicializa la mayor venta con el valor del primer día (Lunes)
    int diaMayor = 0;            // Índice del día con mayor venta, inicia en 0 (Lunes)
    bool sinVentas = false;      // Bandera que indica si hubo algún día sin ventas (false = ninguno aún)

    for (int i = 0; i < 7; i++) {         // Recorre los 7 días para calcular las estadísticas
        total += ventas[i];               // Acumula las ventas del día actual al total semanal

        if (ventas[i] > mayorVenta) {     // Compara si la venta del día actual supera la mayor registrada
            mayorVenta = ventas[i];       // Actualiza la mayor venta con el nuevo valor máximo
            diaMayor = i;                 // Guarda el índice del día con la nueva mayor venta
        }

        if (ventas[i] == 0) {            // Verifica si el día actual no tuvo ventas
            sinVentas = true;            // Activa la bandera indicando que hubo al menos un día sin ventas
        }
    }

    // Mostrar resultados
    cout << "\nTotal de ventas de la semana: " << total << endl;                              // Imprime la suma total de ventas de los 7 días
    cout << "Día con mayores ventas: " << dias[diaMayor] << " (Q" << mayorVenta << ")" << endl; // Imprime el nombre del día y el monto de la mayor venta

    if (sinVentas) {                                       // Evalúa si la bandera fue activada durante el recorrido
        cout << "Hubo días sin ventas." << endl;           // Informa que al menos un día tuvo ventas en cero
    }
    else {
        cout << "No hubo días sin ventas." << endl;        // Informa que todos los días tuvieron ventas mayores a cero
    }

    return 0; // El programa finalizó correctamente (código de salida 0 = sin errores)
}

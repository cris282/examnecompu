#include <iostream>
#include <string>
using namespace std;

struct PadreMadre {
    string dpi;
    string nombre;
    string apellido;
    string profesion;
    string estado_civil;
    string nacionalidad;
};

struct Nino {
    string cui;
    string nombre;
    string apellido;
    string lugar_nacimiento;
    string fecha_nacimiento;
    string nacionalidad;
};

int main() {
    PadreMadre padres[20];
    Nino ninos[20];
    int totalPadres = 0;
    int totalNinos = 0;
    int totalGeneral = 0;
    int opcion, continuar;

    do {
        if (totalGeneral >= 20) {
            cout << "Ya se alcanzó el límite total de 20 personas (padres + niños).\n";
            break;
        }

        cout << "\nSeleccione una opcion:\n";
        cout << "1. Ingresar datos de un padre o madre\n";
        cout << "2. Ingresar datos de un nino\n";
        cout << "Opcion: ";
        cin >> opcion;

        if (opcion == 1) {
            cout << "--- Ingreso de datos del padre o madre ---\n";
            cout << "DPI (sin espacios): ";
            cin >> padres[totalPadres].dpi;
            cout << "Nombre: ";
            cin >> padres[totalPadres].nombre;
            cout << "Apellido: ";
            cin >> padres[totalPadres].apellido;
            cout << "Profesión: ";
            cin >> padres[totalPadres].profesion;
            cout << "Estado civil: ";
            cin >> padres[totalPadres].estado_civil;
            cout << "Nacionalidad: ";
            cin >> padres[totalPadres].nacionalidad;

            cout << "--- datos ingresados---\n";
            cout << "DPI: " << padres[totalPadres].dpi << endl;
            cout << "Nombre: " << padres[totalPadres].nombre << endl;
            cout << "Apellido: " << padres[totalPadres].apellido << endl;
            cout << "Profesión: " << padres[totalPadres].profesion << endl;
            cout << "Estado civil: " << padres[totalPadres].estado_civil << endl;
            cout << "Nacionalidad: " << padres[totalPadres].nacionalidad << endl;

            totalPadres++;
            totalGeneral++;
        } else if (opcion == 2) {
            cout << "--- Ingreso de datos del niño ---\n";
            cout << "CUI: ";
            cin >> ninos[totalNinos].cui;
            cout << "Nombre: ";
            cin >> ninos[totalNinos].nombre;
            cout << "Apellido: ";
            cin >> ninos[totalNinos].apellido;
            cout << "Lugar de nacimiento: ";
            cin >> ninos[totalNinos].lugar_nacimiento;
            cout << "Fecha de nacimiento: ";
            cin >> ninos[totalNinos].fecha_nacimiento;
            cout << "Nacionalidad: ";
            cin >> ninos[totalNinos].nacionalidad;

            cout << "\n--- datos ingresados ---\n";
            cout << "CUI: " << ninos[totalNinos].cui << endl;
            cout << "Nombre: " << ninos[totalNinos].nombre << endl;
            cout << "Apellido: " << ninos[totalNinos].apellido << endl;
            cout << "Lugar de nacimiento: " << ninos[totalNinos].lugar_nacimiento << endl;
            cout << "Fecha de nacimiento: " << ninos[totalNinos].fecha_nacimiento << endl;
            cout << "Nacionalidad: " << ninos[totalNinos].nacionalidad << endl;

            totalNinos++;
            totalGeneral++;
        } else {
            cout << "Opción no válida.\n";
        }

        if (totalGeneral >= 20) {
            cout << "\nSe ha alcanzado el límite total de 20 personas. Fin del ingreso.\n";
            break;
        }

        cout << "\n¿Desea ingresar otra persona? (Sí,No): ";
        cin >> continuar;
    } while (continuar == 1);

    cout << "\n--- Resumen final ---\n";
    cout << "Padres/madres ingresados: " << totalPadres << endl;
    cout << "Niños ingresados: " << totalNinos << endl;

    return 0;
}



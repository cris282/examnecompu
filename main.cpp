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

struct nino {
    string cui;
    string nombre;
    string apellido;
    string lugar_nacimiento;
    string fecha_nacimiento;
    string nacionalidad;
};

int main() {
    PadreMadre padres[20];
    nino ninos[20];
    int totalPadres = 0;
    int totalNinos = 0;
    int totalGeneral = 0;
    int opcion, continuar;

    do {
        if (total>= 20) {
            cout << "Ya se alcanzó el límite total de 20 personas (padres + niños).\n";
            break;
        }

        cout << "\nSeleccione una opción:\n";
        cout << "1. Ingresar datos de un padre o madre\n";
        cout << "2. Ingresar datos de un niño\n";
        cout << "Opción: ";
        cin >> opcion;
        cin.ignore();

        if (opcion == 1) {
            cout << "\n--- Ingreso de datos del padre o madre ---\n";
            cout << "DPI: ";
            getline(cin, padres[totalPadres].dpi);
            cout << "Nombre: ";
            getline(cin, padres[totalPadres].nombre);
            cout << "Apellido: ";
            getline(cin, padres[totalPadres].apellido);
            cout << "Profesión: ";
            getline(cin, padres[totalPadres].profesion);
            cout << "Estado civil: ";
            getline(cin, padres[totalPadres].estado_civil);
            cout << "Nacionalidad: ";
            getline(cin, padres[totalPadres].nacionalidad);

            cout << "\n--- DATOS INGRESADOS ---\n";
            cout << "DPI: " << padres[totalPadres].dpi << endl;
            cout << "Nombre: " << padres[totalPadres].nombre << endl;
            cout << "Apellido: " << padres[totalPadres].apellido << endl;
            cout << "Profesión: " << padres[totalPadres].profesion << endl;
            cout << "Estado civil: " << padres[totalPadres].estado_civil << endl;
            cout << "Nacionalidad: " << padres[totalPadres].nacionalidad << endl;

            totalPadres++;
            totalGeneral++;
        } else if (opcion == 2) {
            cout << "\n--- Ingreso de datos del niño ---\n";
            cout << "CUI: ";
            getline(cin, ninos[totalNinos].cui);
            cout << "Nombre: ";
            getline(cin, ninos[totalNinos].nombre);
            cout << "Apellido: ";
            getline(cin, ninos[totalNinos].apellido);
            cout << "Lugar de nacimiento: ";
            getline(cin, ninos[totalNinos].lugar_nacimiento);
            cout << "Fecha de nacimiento (DD/MM/AAAA): ";
            getline(cin, ninos[totalNinos].fecha_nacimiento);
            cout << "Nacionalidad: ";
            getline(cin, ninos[totalNinos].nacionalidad);

            cout << "\n--- DATOS INGRESADOS ---\n";
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

        cout << "\n¿Desea ingresar otra persona? (1 = Sí, 0 = No): ";
        cin >> continuar;
        cin.ignore();
    } while (continuar == 1);

    cout << "\n--- Resumen final ---\n";
    cout << "Padres/madres ingresados: " << totalPadres << endl;
    cout << "Niños ingresados: " << totalNinos << endl;

    return 0;
}


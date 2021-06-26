#ifndef _FUNCIONES_H_
#define _FUNCIONES_H_

enum Colors { // Listado de colores (La letra "L" al inicio, indica que es un color más claro que su antecesor).
 BLACK = 0,
 BLUE = 1,
 GREEN = 2,
 CYAN = 3,
 RED = 4,
 MAGENTA = 5,
 BROWN = 6,
 LGREY = 7,
 DGREY = 8,
 LBLUE = 9,
 LGREEN = 10,
 LCYAN = 11,
 LRED = 12,
 LMAGENTA = 13,
 YELLOW = 14,
 WHITE = 15
};
typedef struct {
    int dia;
    int mes;
    int anio;
} fechaNacimiento;
typedef struct {
    char nombre[100];
    char apellido[100];
    fechaNacimiento fecha;
    int dni;
    int telefono;
    int diasdevida;

} registro;

void Color( int Text);
void buscarPorDni( registro personas[] , int a , int indice);
int busqueda(int valor, registro personas[],int indice);
void cargaPersonas(registro* a , registro b[],int *indice);
void mostrar(registro personas[],int indice);
void menu(char *a);
void buscarPorNacimiento(int a , registro personas[] , int indice);
void buscaryeditar(int a , registro personas[] , int indice);
double convertirAdias(int mayor , registro personas[]);
#endif // FUNCIONES_H_INCLUDED

#include "funciones.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

double convertirAdias(int i, registro personas[])
{
double diasmes,resultado,diasAnio;
diasAnio = (personas[i].fecha.anio * 365)-365;
diasmes = (personas[i].fecha.mes  * 30)-(30);
resultado = diasmes + personas[i].fecha.dia + diasAnio;
return resultado;
}
void buscaryeditar(int a , registro personas [] , int indice)
{
    char b ;
    int c;
     for (int i = 0; i < indice; i++) {
                if (personas[i].dni == a) {
                    printf("\nNombre: %s\nApellido: %s\nFecha de nacimiento: %d/%d/%d\nDNI: %d\nTelefono: %d\n", personas[i].nombre, personas[i].apellido, personas[i].fecha.dia, personas[i].fecha.mes, personas[i].fecha.anio, personas[i].dni, personas[i].telefono);
                    do{
                    printf("\n(1)..Nombre.. (2)..Apellido.. (3)..DNI.. (4)..Telefono.. (5)..Fecha de nacimiento.. (0)..Salir..");
                    printf("\n¿Que quiere editar?: ");
                    scanf("%s", &b);

                    switch (b){
                    case '1':
                        printf("\nEditar Nombre");
                        printf("\nNombre actual : %s", personas[i].nombre);
                        printf("\nIngrese el nuevo nombre: ");
                        scanf("%s", &personas[i].nombre);
                        printf("\nNombre actual : %s", personas[i].nombre);
                        break;

                    case '2':
                        printf("\nEditar Apellido");
                        printf("\nApellido actual : %s", personas[i].apellido);
                        printf("\nIngrese el nuevo Apellido: ");
                        scanf("%s", &personas[i].apellido);
                        printf("\nApellido actual : %s", personas[i].apellido);
                        break;

                    case '3':
                        printf("\nEditar DNI");
                        printf("\nDNI actual : %d", personas[i].dni);
                        printf("\nIngrese el nuevo dni: ");
                        scanf("%d", &a);
                        do {
                                if(a == personas[i].dni){
                                    c = -1;
                                }else{
                            c = busqueda(a, personas,indice);
                            if (c == 1) {
                                printf("\nIngrese un dni valido: ");
                                scanf("%d", &a);
                            }
                            }
                        } while (c != -1);
                        personas[i].dni = a;
                        printf("\nDNI actual : %d", personas[i].dni);
                        break;

                    case '4':
                        printf("\nEditar Telefono");
                        printf("\nTelefono actual : %d", personas[i].telefono);
                        printf("\nIngrese el nuevo Telefono: ");
                        scanf("%d", &personas[i].telefono);
                        printf("\nTelefono Actual : %d", personas[i].telefono);
                        break;

                    case '5':
                        printf("\nEditar Fecha de nacimiento");


                        do {
                            printf("\nFecha de nacimiento actual : %d/%d/%d", personas[i].fecha.dia, personas[i].fecha.mes, personas[i].fecha.anio);
                            printf("\n(1)..Dia.. (2)..Mes.. (3)..A%co.. (4)..Salir..", 164);
                            printf("\nQue quiere editar?: ");
                            scanf("%s", &b);
                            switch (b) {
                            case '1':
                                printf("\nDia actual: %d", personas[i].fecha.dia);
                                printf("\nIngrese nuevo dia: ");
                                scanf("%d", &a);
                                personas[i].fecha.dia = a;
                                printf("\nDia actual: %d", personas[i].fecha.dia);
                                break;

                            case '2':
                                printf("\nMes actual: %d", personas[i].fecha.mes);
                                printf("\nIngrese nuevo mes: ");
                                scanf("%d", &a);
                                personas[i].fecha.mes = a;
                                printf("\nMes actual: %d", personas[i].fecha.mes);
                                break;

                            case '3':
                                printf("\nFecha actual: %d", personas[i].fecha.anio);
                                printf("\nIngrese nuevo año: ");
                                scanf("%d", &a);
                                personas[i].fecha.anio = a;
                                printf("\nAño actual: %d", personas[i].fecha.anio);
                                break;


                            }
                        } while (b != '4');
                        break;

                    default:

                        printf("\nIngrese una opcion correcta: ");
                    }

                    }while(b != '0');
                    //while(b != '0' && b != '1' && b != '2' && b != '3' && b != '4' && b != '5');
                }



            }

}

void buscarPorNacimiento(int a , registro personas[] , int indice)
{
    for (int i = 0; i < indice; i++) {
    if (personas[i].fecha.anio == a) {
    printf("\nNombre: %s\nApellido: %s\nFecha de nacimiento: %d/%d/%d\nDNI: %d\nTelefono: %d\n", personas[i].nombre , personas[i].apellido , personas[i].fecha.dia , personas[i].fecha.mes , personas[i].fecha.anio , personas[i].dni , personas[i].telefono);
    }
    }
}
void menu(char *a)
{
        Color(YELLOW);

        printf("\n...Bienvenido a la agenda...");
        printf("\n1 - Cargar personas...");
        printf("\n2 - Busqueda por DNI...");
        printf("\n3 - Busqueda de personas nacidas en un a%co especifico...", 164);
        printf("\n4 - Editar persona...");
        printf("\n5 - Mostrar todos los registros...");
        printf("\n6 - Buscar persona de mayor y menor edad...");
        printf("\n0 - Salir...");
        printf("\nIngrese una opcion (0-5): ");
        scanf("%s",a);



}
int busqueda(int valor, registro b[],int indice)
{
    for (int i = 0; i < indice; i++) {
        if (valor == b[i].dni) {
            printf("DNI REPETIDO\n");
            return 1;
        }
    }
    return -1;
}
void buscarPorDni( registro personas[] , int a , int indice)
{
    for (int i = 0; i < indice; i++) {
        if (personas[i].dni == a) {
            printf("\nNombre: %s\nApellido: %s\nFecha de nacimiento: %d/%d/%d\nDNI: %d\nTelefono: %d\n", personas[i].nombre, personas[i].apellido, personas[i].fecha.dia, personas[i].fecha.mes, personas[i].fecha.anio, personas[i].dni, personas[i].telefono);
        }
    }
}
void cargaPersonas(registro* a , registro b[],int *indice)
{


    int cargadni;
    int c;
    printf("\nIngrese Nombre: ");
    scanf("%s", &a->nombre);

    printf("\nIngrese Apellido: ");
    scanf("%s", &a->apellido);

    do {
        printf("\nIngrese dia de nacimiento: ");
        scanf("%d", &c);
        if (c > 31 || c < 0) {
            printf("Dia no puede ser mayor a 31 ni menor a 0\n");
        }
    } while (c > 31 || c < 0);

    a->fecha.dia = c;

    do {
        printf("\nIngrese mes de nacimiento: ");
        scanf("%d", &c);
        if (c > 12 || c < 0) {
            printf("Mes no puede ser mayor a 12 ni menor a 0\n");
        }
    } while (c > 12 || c < 0);

    a->fecha.mes = c;

    do {
        printf("\nIngrese A%co de nacimiento: ", 164);
        scanf("%d", &c);
        if (c <= 0) {
            printf("A%co no puede ser menor a ""0"" o sos jesus ?\n", 164);
        }
    } while (c <= 0);

    a->fecha.anio = c;

    printf("\nIngrese Dni: ");
    scanf("%d", &cargadni);

    int dni;
    do {
        dni = busqueda(cargadni, b,*indice);
        if (dni == 1) {
            printf("\nIngrese un dni valido: ");
            scanf("%d", &cargadni);
        }
    } while (dni != -1);

    a->dni = cargadni;

    printf("\nIngrese Telefono: ");
    scanf("%d", &a->telefono);
    double f;
    f = convertirAdias(*indice,b);
    a->diasdevida = f;

    *indice = *indice +1;


}
void mostrar(registro personas[],int indice)
{
    for (int i = 0; i < indice; i++) {
        printf("\nNombre: %s\nApellido: %s\nFecha de nacimiento: %d/%d/%d\nDNI: %d\nTelefono: %d\n", personas[i].nombre , personas[i].apellido , personas[i].fecha.dia , personas[i].fecha.mes , personas[i].fecha.anio , personas[i].dni , personas[i].telefono);
    }
}
void Color( int Text)
{


 HANDLE Console = GetStdHandle(STD_OUTPUT_HANDLE); // Tomamos la consola.

 // Para cambiar el color, se utilizan números desde el 0 hasta el 255.
 // Pero, para convertir los colores a un valor adecuado, se realiza el siguiente cálculo.
 int    New_Color= Text;

 SetConsoleTextAttribute(Console, New_Color); // Guardamos los cambios en la Consola.

}

#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include <string.h>



int main() {

char opcion;
int menor;
int contador;
double f;
registro agenda[100];

  int indice = 0;
  do {
    menu(&opcion);
    switch (opcion) {
      int a;
      char b;

      case '1':
        printf("\nNuevo Registro...");
        do {
          cargaPersonas(&agenda[indice], agenda,&indice);
          do {
            printf("\n(0)..Ir al menu.. (1)..Cargar nuevo registro.. ");
            printf("\nIngrese una opcion: ");
            scanf("%s", &b);
          } while (b != '0' && b != '1');
        } while (b != '0');
        break;

      case '2':
        do {
          printf("\nBusqueda por DNI...");
          printf("\nIngrese dni: ");
          scanf("%d", &a);
          buscarPorDni(agenda, a, indice);
          do {
            printf("\n(0)..Ir al menu.. (1)..Nueva Busqueda.. ");
            printf("\nIngrese una opcion: ");
            scanf("%s", &b);
          } while (b != '0' && b != '1');
        } while (b != '0');
        break;

      case '3':
        do {
          printf("\nBusqueda por a%co especifico", 164);
          printf("\nIngrese a%co de busqueda: ", 164);
          scanf("%d", &a);
          buscarPorNacimiento(a, agenda , indice);
          do {
            printf("\n(0)..Ir al menu.. (1)..Nueva Busqueda.. ");
            printf("\nIngrese una opcion: ");
            scanf("%s", &b);
          } while (b != '0' && b != '1');

        } while (b != '0');

        break;

      case '4':
        do{
        printf("\n(1)..Editar Registro.. (0)..Menu..");
         printf("\nIngrese una opcion: ");
        scanf("%s", &b);
        if(b=='1'){
        printf("\nIngrese dni del registro que quiere editar...");
        scanf("%d", &a);
        buscaryeditar(a, agenda , indice);
        }

    }while(b != '0');
        break;  // Termina primer case 4

      case '5':
        do {
          printf("\nRegistros...");
          mostrar(agenda , indice);
          do {
            printf("\n(0)..Ir al menu.. (1)..Mostrar todos los registros.. ");
            printf("\nIngrese una opcion: ");
            scanf("%s", &b);
          } while (b != '0' && b != '1');
        } while (b != '0');
        break;


      case '6':

        do {
          printf("\n(1)..Persona Mayor.. (2)..Persona Menor.. (0)..Menu: ");
          scanf("%s", &b);
          switch (b) {
            case '1':
              menor = 0;
              printf("\nPersona Mayor...");
              for (int i = 1; i < indice; i++) {
                if (agenda[i].diasdevida < agenda[menor].diasdevida) {
                  menor = i;
                }
              }

              f = agenda[menor].diasdevida;
              for (int i = 0; i < indice; i++) {
                if (agenda[i].diasdevida == f) {
                  printf(
                      "\nNombre: %s\nApellido: %s\nFecha de nacimiento: "
                      "%d/%d/%d\nDNI: %d\nTelefono: %d\n",
                      agenda[i].nombre, agenda[i].apellido, agenda[i].fecha.dia,
                      agenda[i].fecha.mes, agenda[i].fecha.anio, agenda[i].dni,
                      agenda[i].telefono);
                }
              }

              break;

            case '2':
              menor = 0;
              printf("\nPersona Menor...");
              for (int i = 1; i < indice; i++) {
                if (agenda[i].diasdevida > agenda[menor].diasdevida) {
                  menor = i;
                }
              }
              f = agenda[menor].diasdevida;
              for (int i = 0; i < indice; i++) {
                if (agenda[i].diasdevida == f) {
                  printf(
                      "\nNombre: %s\nApellido: %s\nFecha de nacimiento: "
                      "%d/%d/%d\nDNI: %d\nTelefono: %d\n",
                      agenda[i].nombre, agenda[i].apellido, agenda[i].fecha.dia,
                      agenda[i].fecha.mes, agenda[i].fecha.anio, agenda[i].dni,
                      agenda[i].telefono);
                }
              }

              break;
          }

        } while (b != '0');
        break;  // CASE 6

      default:
        printf("opcion inc\n");
    }

  } while (opcion != '0');

  return 0;
}

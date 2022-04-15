/*
Una agencia de viaje necesita calcular costos para sus vuelos de Latam y Aerol�neas Argentinas
para ofrecerlos a sus clientes.
Se deber� ingresar por cada vuelo los km totales y el precio total del mismo.
El objetivo de la aplicaci�n es mostrar las diferentes opciones de pagos a sus clientes.
Para ello el programa iniciar� y contar� con un men� de opciones:
1. Ingresar Kil�metros: ( km=x)
2. Ingresar Precio de Vuelos: (Aerol�neas=y, Latam=z)
- Precio vuelo Aerol�neas:
- Precio vuelo Latam:
3. Calcular todos los costos:
a) Tarjeta de d�bito (descuento 10%)
b) Tarjeta de cr�dito (inter�s 25%)
c) Bitcoin (1BTC -> 4606954.55 Pesos Argentinos)
d) Mostrar precio por km (precio unitario)
e) Mostrar diferencia de precio ingresada (Latam - Aerol�neas)
4. Informar Resultados
�Latam:
a) Precio con tarjeta de d�bito: r
b) Precio con tarjeta de cr�dito: r
c) Precio pagando con bitcoin : r
d) Precio unitario: r
Aerol�neas:
a) Precio con tarjeta de d�bito: r
b) Precio con tarjeta de cr�dito: r
c) Precio pagando con bitcoin : r
d) Precio unitario: r
La diferencia de precio es : r �
5. Carga forzada de datos
6. Salir
 */

#include <stdio.h>
#include <stdlib.h>
#include "mis_funciones.h"

int main(void) {
	setbuf(stdout, NULL);

		char respuesta;


		//do{

			int menu (int opcion){

				int auxOpcion = 0;

				printf("---MENU---\n\n");
				printf("1) Ingresar kilometros: \n");
				printf("2) Ingresar precios de vuelos: \n");
				printf("3) Calcular todos los costos: \n");
				printf("4) Salir \n\n");

				printf("Ingrese la opcion deseada: \n");
				scanf("%d", &auxOpcion);

				while(!(auxOpcion == 1 || auxOpcion == 2 || auxOpcion == 3 || auxOpcion == 4 )){
					printf("La opcion ingresada es incorrecta, reingrese la opcion deseada: \n")
				    scanf("%d", &auxOpcion);
				}
				opcion = auxOpcion;

				return opcion;
			}


			printf("Desea seguir ingresando datos? si(s) o no(n): ");
			scanf("%c", &respuesta);
			while(!(respuesta == 's' || respuesta == 'n')){
				printf("La respuesta ingresada es incorrecta, por favor ingrese s para si o n para no: ");
				scanf("%c", &respuesta);
			}

	        }while(respuesta = s);


		return EXIT_SUCCESS;
}

#include <stdio.h>
#include <string.h>

void main(){
	int opc, salir=1;
	float saldo=0, monto=0;
	//system(cls); limpia la pantalla
	//getch(); pausa hasta digitar una tecla
	while(salir==1){
		system("cls");
		printf("***** SISTEMA BANCARIO *****\n\n");
		printf("Seleccione el numero de la opcion que desea realizar.\n");
		printf("1. Consultar Saldo\n2. Depositar\n3. Retirar\n0. Salir\n");
		printf("Ingrese el numero de opcion: ");
		scanf("%i",&opc);

	if(opc==1){
system("cls");
printf("Su saldo es: $%.2f",saldo);
			printf("\nPresione una tecla para continuar...");
			getch();
		}else if(opc==2){
			system("cls");
			printf("Ingrese el monto a depositar: $");
			scanf("%f",&monto);
			if(monto>0){
				system("cls");
				saldo=saldo+monto;
				printf("Su saldo actual es: $%.2f",saldo);
				printf("\nPresione una tecla para continuar...");
				getch();
			}else{
				system("cls");
				printf("No se puede realizar el deposito, monto incorrecto...");
				printf("\nPresione una tecla para continuar...");
				getch();
			}
		}else if(opc==3){
			system("cls");
			if(saldo>0){
				printf("Ingrese el monto a retirar: $");
				scanf("%f",&monto);
				if(monto>0 && monto<=saldo){
					system("cls");
					saldo=saldo - monto;
					printf("Su saldo actual es: $%.2f",saldo);
					printf("\nPresione una tecla para continuar...");
					getch();
				}else{
					system("cls");
					printf("No se puede realizar el retiro...");
					printf("\nPresione una tecla para continuar...");
					getch();
				}	
			}else{
				system("cls");
				printf("No tiene fondos en su cuenta...");
				printf("\nPresione una tecla para continuar...");
				getch();
			}
}else if(opc==0){
			salir=0;
		}
		else{
			system("cls");
			printf("La opcion seleccionada no existe...");
			printf("\nPresione una tecla para continuar...");
			getch();
		}	
	}
}	

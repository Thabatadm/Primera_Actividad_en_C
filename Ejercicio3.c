#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#include <stdlib.h>

#include <stdbool.h>

int main(void)

{

       //Declaración de variables
       int moneda, cash_inicial;
       bool dolarAEuro;
       float euro_final, dolar_final, comision; 

       //declaración de constantes
       const float dolarEuroCambio = 0.9;

       //De entrada la comisión será del 2 por cien
       comision = 0.02;


       //Demandamos datos al usuario

        do {

             printf("Que moneda quieres convertir?\n");

             printf("1. Dolar a euro clica 1.\n");

             printf("2. Euro a dolar clica 2.\n");

             scanf("%d", &moneda);

       } while (moneda != 1 && moneda != 2);

 

       dolarAEuro = moneda == 1;


       //Demandamos datos al usuario


       if (dolarAEuro) {

             printf("Introduce el numero de dolares que tienes:\n");

             scanf("%d", &cash_inicial);

       }

       else {

             printf("Introduce el numero de euros que tienes:\n");

             scanf("%d", &cash_inicial);

       }


       if (dolarAEuro) {

             euro_final = ((float)cash_inicial) * dolarEuroCambio;

       }

       else {

             dolar_final = ((float)cash_inicial) / dolarEuroCambio;
       }

 

       //Comisión puede ser menor dependiendo de la cantidad de divisa cambiada

       if (dolarAEuro) {

             if (euro_final > 100) comision = 0.01;

       }

       else {

             if (cash_inicial > 100) comision = 0.01;

       }

       //Printamos resultados

       if (dolarAEuro) {

             printf("Has entregado %d dolares, i te devolvemos %f euros al cambio %f Euros por Dolar:\n", cash_inicial, euro_final - euro_final*comision, dolarEuroCambio);

       }

       else {

             printf("Has entregado %d dolares, i te devolvemos %f euros al cambio %f Euros por Dolar:\n", cash_inicial, dolar_final - dolar_final*comision, dolarEuroCambio);

       }

       system("pause");

       return 0;

};


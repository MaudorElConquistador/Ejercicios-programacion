#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int main(){
    printf("Menu teclean el número 1,2 o 3 según la opción \n");
    printf("1.-Calcular el area apartir del radio y de la longitud de uno de sus lados \n");
    printf("2.-Calcular el area apartir de la longitud de un lado \n");
    printf("3.-Calcular el area apartir del radio de la circunferecia (poligono circunscrito) \n");
    return 0;
}
/*Pequeña ayuda un angulo dentro de la circunferencia está dado por
    î = ((180)(n-2))/n y ley coseno ; c^2 = a^2 + b^2 -2abcos(alpha); 
*/

//Utilizar radio y longitud de uno de sus lados
void lonyrad(){
    double area, radio, longitud;
    int lados;
    printf("Ingresa el numero de lados del poligono");
    scanf("%d", &lados);
    printf("Ingresa la longitud de uno de los lados del poligono");
    scanf("%lf", &longitud);
    printf("Ingresa el radio");
    scanf("%lf", &radio);
    area = lados*( sqrt(pow(radio, 2.0)-pow(longitud/2, 2.0))/2 );
}
//Utilizar el radio de la circunferencia
void radio(){
    double area, radio, altura, base;
    int lados;
    printf("Ingresa el numero de lados del poligono");
    scanf("%d", &lados);
    printf("Ingresa el radio");
    scanf("%lf", &radio);
    base = radio*(sqrt( 2*( 1-cos( (360*M_PI)/lados*180) ) ) );
    altura = sqrt( pow(radio, 2.0) - pow( base/2, 2.0) )/2;
    area = lados*((base*altura)/2); 
}
//Utilizar longitud de uno de sus lados
void lado(){
    double area, longitud, radio, altura, base;
    int lados;
    printf("Ingresa el numero de lados del poligono");
    scanf("%d", &lados);
    printf("Ingresa la longitud de uno de los lados del poligono");
    scanf("%lf", &longitud);
    radio = ( longitud/sqrt( 2*(1-cos((360*M_PI)/lados*180) ) ) );
    altura = sqrt(pow(radio, 2.0) - pow(longitud/2, 2.0));
    area = lados*((longitud * altura)/2);
}
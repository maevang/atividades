#include <stdio.h>
int main(){
    float raio, altura;
    float area, volume;
    float pi = 3.14;
	printf("digite o raio de um cilindro:");
	scanf("%f",&raio);
	printf("digite a altura do cilindro:");
	scanf("%f",&altura);
	//processamento
	int areaLat = 2 * pi * raio * altura;
	int areaBase = 2 * pi * raio * raio;
	area = areaLat + areaBase;
    volume = pi * raio * raio * altura;
    //saida
    printf("raio = %.2f\n",raio);
    printf("altura = %.2f\n",altura);
    printf("area do cilindro = %.3f\n",area);
    printf("volume do cilindro =%.3f\n",volume);
    return 0;
}

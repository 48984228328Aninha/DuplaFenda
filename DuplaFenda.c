#include <stdio.h>
#include <math.h>

double numero_complexo(double a, double b, double complexo[2], double k, double L1, double L2) {
	complexo[0] = a;
	complexo[1] = b;

double angulo_um = k * L1;
double angulo_dois = k * L2;
double diferenca_angulo = k * (L1 - L2);

double soma_real = cos(angulo_um) + cos(angulo_dois);
double soma_complexa = sin(angulo_um) + sin(angulo_dois);

double probabilidade_particula = soma_real * soma_real + soma_complexa * soma_complexa;

return probabilidade_particula;

}

int main() {

double complexo[2];
int largura = 80;
double probabilidades[largura];
int pico = 20;
double tela[pico][largura];
int separacao_fendas = 40;


for (int i=0; i<largura; i++) {
	double xmin = -0.5;
	double xmax = 0.5;
	double passo = (xmax - xmin)/(largura - 1);
	double coluna = xmin + i * passo; 
	double L1 = coluna + separacao_fendas/2;
	double L2 = coluna - separacao_fendas/2;
	probabilidades[i] = numero_complexo(2.0,3.0, complexo,5.0, L1, L2);

	 printf("%f\n", numero_complexo(2.0,3.0, complexo,5.0, L1, L2));

}
}

#include <math.h>
#include <stdio.h>

//**********************************************************************
// Este programa calcula la velocidad y altura de un proyectil
// lanzado verticalmente cierto tiempo T después del lanzamiento
// dada la altura inicial, velocidad y la aceleración de la gravedad.
//**********************************************************************

int main(void)
{
	double H0, H, V0, V, A, T;
    FILE *fin, *fout;

    fin = fopen("parametros.dat", "r");
    fout = fopen("resultados.out", "w");

	A = -9.8;
	//H0 = 150.;
	//V0 = 100.;
	T = 10.;

    //printf("Introduzca H0 y V0: ");
    fscanf(fin, "%lf %lf", &H0, &V0);

	H = 0.5*A*pow(T,2) + V0 + H0;
	V = A*T + V0;

    fprintf(fout, "H= %lf \nV= %lf\n", H, V);

    fclose(fin);
    fclose(fout);

	return 0;
}

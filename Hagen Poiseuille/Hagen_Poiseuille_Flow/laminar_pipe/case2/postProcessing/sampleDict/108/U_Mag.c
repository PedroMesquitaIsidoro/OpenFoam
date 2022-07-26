#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    double x, y, Umag;
    double Ux, Uy, Uz, p, vtk, arc, z;
    FILE *arq, *arq2;

    arq = fopen("s2_U.dat", "w");
    arq2 = fopen("data.dat", "r");

    while(fscanf(arq2, "%lf %lf %lf %lf %lf %lf %lf %lf %lf", &Ux, &Uy, &Uz, &p, &vtk, &arc, &x, &y, &z) != EOF){

        Umag = sqrt(Ux*Ux + Uy*Uy);
        fprintf(arq, "%.8g %.8g\n", y, Umag);

    }
    
    return 0;
}
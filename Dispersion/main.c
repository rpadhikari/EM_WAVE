/*
 * main.c Patching all the works together
 *  Created on: Match 8th, 2021
 *  Author: Rajendra P. Adhikari
 */
// Dispersion of EM wave through insulator
#include<stdio.h>
#include<math.h>
FILE *fin, *fout;

double Reew(double, double, double);
double Imew(double, double, double);

int main(){
  double omega_0, omega, gamma;
  fin=fopen("in.dat", "r");
  fscanf(fin, "%lf %lf",&omega_0, &gamma);
  fclose(fin);
  fout=fopen("data.dat","w");
  for(int i=1; i<=12000; i++) {
    omega = (double)i*0.010;
//    printf("%10.5lf %20.15lf %20.15lf\n", omega, Reew(gamma, omega_0, omega), Imew(gamma, omega_0, omega));
    fprintf(fout, "%10.5lf %20.15lf %20.15lf\n", omega, Reew(gamma, omega_0, omega), Imew(gamma, omega_0, omega));
  }
  fclose(fout);
}

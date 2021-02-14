/*
 * main.c Patching all the works together
 *  Created on: Feb 14th, 2021
 *  Author: Rajendra P. Adhikari
 */
// Reflection and Transmission of EM wave
#include<stdio.h>
#include<math.h>
FILE *fout;
double trans(double, double, double);
double refl(double, double, double);

const double pi=3.14159265359;
int main(){
  double n=1.0, np, theta=30.0;
  fout=fopen("data.dat","w");
  for(int i=1; i<=67; i++) {
    np = (double) i*0.01+1.0;
    theta=theta*pi/180.0;
    fprintf(fout, "%6.2lf %15.8lf %15.8lf\n", np, trans(n,np,theta), refl(n,np,theta));
  }
  fclose(fout);
}


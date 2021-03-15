/*
 * main.c Patching all the works together
 *  Created on: Match 15th, 2021
 *  Author: Rajendra P. Adhikari
 *  Plot of the steady-state amplitude of driven damped harmonic oscillator 
 *  with different damping ratios ζ. Driving to natural frequency ratios [0, 2.5].
 */
// 
#include<stdio.h>
#include<math.h>
FILE *fout;

double amplitude(double, double);

int main(){
  // values of xi are 0.1, 0.2, 0.3, 0.5, 1.0
  double eta;
  fout=fopen("data.dat","w");
  for(int i=0; i<=300; i++) {
    eta = (double)i*0.01;
    printf("%10.5lf %20.15lf %20.15lf %20.15lf %20.15lf %20.15lf\n", eta, amplitude(eta,0.1), amplitude(eta,0.2), amplitude(eta,0.3), amplitude(eta,0.5), amplitude(eta,1.0));
    fprintf(fout,"%10.5lf %20.15lf %20.15lf %20.15lf %20.15lf %20.15lf\n", eta, amplitude(eta,0.1), amplitude(eta,0.2), amplitude(eta,0.3), amplitude(eta,0.5), amplitude(eta,1.0));
  }
  fclose(fout);
}


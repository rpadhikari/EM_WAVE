/*
 * Reew.c
 * Created on: March 7th, 2021
 * Author: Rajendra Adhikari
 * This function calculates Imaginary part of dielectric constant with
 * (Ne^2/e0 m) = 1.0
 * by J D Jackason, Classical Electrodynamics, 3rd Ed.
 */
double pow(double, double);
double Reew(double gamma, double omega_0, double omega) {
  return 1.0+(omega_0*omega_0-omega*omega)/(pow((omega_0*omega_0-omega*omega),2.0)+gamma*gamma*omega*omega); 
}


/*
 * amplitude.c
 * Created on: March 15th, 2021
 * Author: Rajendra Adhikari
 * This function calculates the absolute value of impedence or linear
 * response function.
 * steady state amplitude A/A_{stat} of driven damped harmonic oscillator
 * https://en.wikipedia.org/wiki/Harmonic_oscillator (accessed March 15th, 2021)
 */
double sqrt(double);
double pow(double, double);
double amplitude(double eta, double xi) {
  return 1.0/sqrt(pow((1.0-eta),2.0) + pow(2.0*eta*xi,2.0));

}


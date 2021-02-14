/*
 * trans.c
 * Created on: Feb 14th, 2021
 * Author: Rajendra Adhikari
 * This function calculates the ratio of transmitted to incodent E field
 * when E is perpendicular the plane of incidence.
 * by J D Jackason, Classical Electrodynamics, 3rd Ed.
 */
double sin(double);
double cos(double);
double sqrt(double);
double trans(double n, double np, double i) {
  return 2.0*n*cos(i)/(n*cos(i) + sqrt(np*np-n*n*sin(i)*sin(i)));
}


/*
 * refl.c
 * Created on: Feb 14th, 2021
 * Author: Rajendra Adhikari
 * This function calculates the ratio of reflected to incodent E field
 * when E is perpendicular the plane of incidence.
 * by J D Jackason, Classical Electrodynamics, 3rd Ed.
 */
double sin(double);
double cos(double);
double sqrt(double);
double refl(double n, double np, double theta) {
  return (n*cos(theta) - sqrt(np*n - n*n*sin(theta)*sin(theta)))/
   (n*cos(theta) + sqrt(np*np-n*n*sin(theta)*sin(theta)));
}


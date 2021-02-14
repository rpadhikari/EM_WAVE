# plot script, written by Rajendra Adhikari
# Feb 14th, 2021
set term postscript enhanced color 'Helvetica-Bold,16'
set output 'TR.ps'
set xl 'Refractive index'
set yl 'Field ratios (E/E_0)'
set xr [1:1.67]
plot 'data.dat' u 1:2 w l 1 ti 'Tr',\
'data.dat' u 1:3 w l ti 'Re'
set output
! ps2pdf TR.ps
! rm TR.ps
# how to execute this script? issue the following line on the terminal
# gnuplot plot.gp


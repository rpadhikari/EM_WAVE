# plot script, written by Rajendra Adhikari
# Feb 14, 2021
set term postscript enhanced color 'Helvetica-Bold,16'
set output 'dispersion.ps'
set xl '{/Symbol w}'
set yl '{/Symbol e}({/Symbol w})}'
set xr [99.5:100.5]
set yr [0.0:1.5]
plot 'data.dat' u 1:2 w l lt 1 lw 2 lc rgb 'blue' ti 'Re',\
     'data.dat' u 1:3 w l lt 1 lw 2 lc rgb 'red' ti 'Im'
set output
! ps2pdf dispersion.ps
! rm dispersion.ps
# how to execute this script? issue the following line on the terminal
# gnuplot plot.gp


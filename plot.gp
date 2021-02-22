# plot script, written by Rajendra Adhikari
# May 21, 2021
set term postscript enhanced color 'Helvetica-Bold,16'
set output 'prop.ps'
set xl 'index'
set yl 'E/E_0'
set xr [1:1.67]
plot 'data.dat' u 1:2 w l ti 'Tran',\
     'data.dat' u 1:3 w l ti 'Refl'
set output
! ps2pdf prop.ps
! rm prop.ps
# how to execute this script? issue the followinf line on the terminal
# gnuplot plot.gp


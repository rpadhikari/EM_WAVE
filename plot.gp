# plot script, written by Rajendra Adhikari
# May 17, 2017
set term postscript enhanced color 'Helvetica-Bold,16'
set output 'pendulum.ps'
set xl 'Angle (deg)'
set yl 'Period (sec)'
set xr [5:30]
plot 'out.dat' w lp pt 6 ps 1 noti
set output
! ps2pdf pendulum.ps
! rm pendulum.ps
# how to execute this script? issue the followinf line on the terminal
# gnuplot plot.gp


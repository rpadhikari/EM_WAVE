# plot script, written by Rajendra Adhikari
# Feb 14, 2021
set term postscript enhanced color 'Helvetica-Bold,16'
set output 'amplitude.ps'
set xl '{/Symbol w}/{/Symbol w}_0'
set yl 'amplitude'
set xr [0.0:3.0]
set yr [0.0:6.0]
set style arrow 1 lt 0 lw 1 nohead
set arrow from 1,0 to 1,6 as 1
plot 'data.dat' u 1:2 w l ti '{/Symbol z}=0.1',\
'data.dat' u 1:3 w l lw 2 ti '{/Symbol z}=0.2',\
'data.dat' u 1:4 w l lw 2 ti '{/Symbol z}=0.3',\
'data.dat' u 1:5 w l lw 2 ti '{/Symbol z}=0.5',\
'data.dat' u 1:6 w l lw 2 ti '{/Symbol z}=1.0'
set output
! ps2pdf amplitude.ps
! rm amplitude.ps
# how to execute this script? issue the following line on the terminal
# gnuplot plot.gp


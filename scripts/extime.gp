set xlabel "number of threads"
set ylabel "time (sec)"
set terminal png font " Times_New_Roman,12"
set output "statistic.png"
set xtics 1,1,16
set key left

plot \
"output.txt" using 1:2 with linespoints linewidth 2 title "Execution time"

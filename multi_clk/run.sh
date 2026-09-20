#!/bin/bash

verilator --binary -j 0 -Wall \
    clk_mux.v clk_divider.v multi_clk_tb.v \
    --top multi_clk_tb --timing --CFLAGS "-std=c++20" --trace

cd obj_dir || { echo "obj_dir not found"; exit 1; }

make -f Vmulti_clk_tb.mk Vmulti_clk_tb || { echo "compilation failed"; exit 1; }

./Vmulti_clk_tb || { echo "Simulation failed"; exit 1; }

# Run gtkwave in the background so the script can finish cleanly
gtkwave dump.vcd &

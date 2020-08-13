#!/usr/bin/python

# 调用api生成 verilog
# http://dawsonjon.pythonanywhere.com/

# 将Verilog 转成dot file
yosys
# 命令
# read design
read_verilog first.v

# elaborate design hierarchy
hierarchy -check -top mytop

# the high-level stuff
proc; opt; fsm; opt; memory; opt

# mapping to internal cell library
techmap; opt

# mapping flip-flops to mycells.lib
dfflibmap -liberty mycells.lib

# mapping logic to mycells.lib
abc -liberty mycells.lib

# cleanup
clean

# write synthesized design
write_verilog synth.v


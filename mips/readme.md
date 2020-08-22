# readme

X -> |     Cells --->|
C -> | ->  AST ----->| --> Cell Graph ------> netlist
Y -> | 

说明：
C 语法 或者其他语法转换成AST, 配上Cells库，组成 Cell图，然后将它转换成各种各样的NetList. 

AST是个大树，它上面是各种各样的语法。
Cell Graph是一张大图，这上面只有边和节点， Cell 就是节点，Wire就是边。看不到AST里IF,FOR,WHILE这样的逻辑。Cell Graph是一张逻辑图。
NetList: cell graph是张逻辑图，而这个就相当于物理图了。我们最底层的结构了,有了这个结构，可以模拟,可以跑FPGA,可以去ASIC厂.



1.1AND 8ADD=1(1)+8(2)=17ns. 
2.1AND 7ADD=1(1)+7(2)=15ns. 
3.1AND 16ADD=1(1)+15(2)=31ns. 
4.Test case:A[8] B[8] C[8] Cout[1] 
0b00000000 0b00000000  0b0000000000000000  0 #minimum 
0b11111111 0b11111111 0b1111111000000001  0 #maximum 
0b11111111 0b00000000 0b0000000000000000  0 #number with zero 
0b11111111 0b00000001 0b0000000011111111  0 #number with one 
0b10101010 0b10101010  0b0111000011100100  0 #any number 
0b00111111 0b11110000 0b0011101100010000  0 #any number 5. �����ҧ Stage1-2 �� 8bitRegister 3 ���(�� A�ش����,B�ش����,��Ƿ������ҡ����� CSA �ͺ���4)  
7bitRegister 1 ���(�� ���Ѿ������ҡCSA�ͺ���4��е�ͧ������ CSA �ͺ���5)  4bitRegister 1 ���(�� ���Ѿ��ͧ��� AxB 4����ش����) 
�����ҧ Stage2-3 �� 8bitRegister 2 ���(�纼��Ѿ��ҡ��÷ � CSA 8 �ͺ,��Ƿ������ҡ��÷ � CSA �ͺ���8) 
7bitRegister 1 ���(�� ���Ѿ������ҡCSA�ͺ���8��е�駹����� CPA � Stage���3) 
6.-Stage1=1AND+3ADD+1REG=1(1)+3(2)+1(2)=9ns. 
  -Stage2=1AND+4ADD+1REG=1(1)+4(2)+1(2)=11ns. 
  -Stage3=8ADD+1REG=8(2)+1(2)=18ns. 
7.clock cycle rate=1/clock cycle time::clock cycle rate=1/(18x10-9)=55.56MHz. 
8.6(31)=186ns. 
9.18(6+2)=144ns. 
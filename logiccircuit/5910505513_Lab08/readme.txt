1.1AND 8ADD=1(1)+8(2)=17ns. 
2.1AND 7ADD=1(1)+7(2)=15ns. 
3.1AND 16ADD=1(1)+15(2)=31ns. 
4.Test case:A[8] B[8] C[8] Cout[1] 
0b00000000 0b00000000  0b0000000000000000  0 #minimum 
0b11111111 0b11111111 0b1111111000000001  0 #maximum 
0b11111111 0b00000000 0b0000000000000000  0 #number with zero 
0b11111111 0b00000001 0b0000000011111111  0 #number with one 
0b10101010 0b10101010  0b0111000011100100  0 #any number 
0b00111111 0b11110000 0b0011101100010000  0 #any number 5. ระหว่าง Stage1-2 ใช้ 8bitRegister 3 ตัว(เก็บ Aชุดนั้นๆ,Bชุดนั้นๆ,ตัวทดที่ได้จากการหา CSA รอบที่4)  
7bitRegister 1 ตัว(เก็บ ผลลัพธที่ได้จากCSAรอบที่4และต้องนำไปใช้ใน CSA รอบที่5)  4bitRegister 1 ตัว(เก็บ ผลลัพธ์ของการ AxB 4ตัวสุดท้าย) 
ระหว่าง Stage2-3 ใช้ 8bitRegister 2 ตัว(เก็บผลลัพธ์จากการท า CSA 8 รอบ,ตัวทดที่ได้จากการท า CSA รอบที่8) 
7bitRegister 1 ตัว(เก็บ ผลลัพธ์ที่ได้จากCSAรอบที่8และตอ้งนำไปใช้ใน CPA ใน Stageที่3) 
6.-Stage1=1AND+3ADD+1REG=1(1)+3(2)+1(2)=9ns. 
  -Stage2=1AND+4ADD+1REG=1(1)+4(2)+1(2)=11ns. 
  -Stage3=8ADD+1REG=8(2)+1(2)=18ns. 
7.clock cycle rate=1/clock cycle time::clock cycle rate=1/(18x10-9)=55.56MHz. 
8.6(31)=186ns. 
9.18(6+2)=144ns. 
# IS2101-ArithmeticOps-NNM24IS199

## 📌 Course: IS2101 – Computer Organization  
**Project Title:** Arithmetic Operations Using C – Multiplication and Division Algorithms  
**Name:** Samskruthi MB  
**USN:** NNM24IS199
**Section:** D



## 📄 Description

This project simulates **low-level arithmetic operations** (multiplication and division) using binary arithmetic in **C programming**.

The implemented algorithms are:

- ✅ **Shift-Add Multiplication** (Signed using 2's Complement)
- ✅ **Restoring Division** (Unsigned)
- ✅ **Non-Restoring Division** (Unsigned with trace output)

These algorithms are commonly used in hardware-level arithmetic and help in understanding processor design.

# Arithmetic Operations (Multiplication, Restoring Division, Non-Restoring Division)

## Inputs / Outputs
- *Input*: Two integers (operands)
- *Output*:  
  - Multiplication → Product  
  - Restoring Division → Quotient + Remainder  
  - Non-Restoring Division → Quotient + Remainder
 
1.Sequential Multiplication 

![WhatsApp Image 2025-09-12 at 21 39 05_36ac6cb0](https://github.com/user-attachments/assets/33590d7b-da2e-4295-b29b-1ef953f83f00)

2.Restoring Division

![WhatsApp Image 2025-09-12 at 21 39 05_d8ec140f](https://github.com/user-attachments/assets/d195861c-074e-4d30-b53f-167391b742ae)

3.Non Restoring Division

![WhatsApp Image 2025-09-12 at 21 39 05_d705d8b1](https://github.com/user-attachments/assets/7b0e9683-e2db-4c45-956e-d686edcad01d)




## How to Compile & Run
```bash
gcc multiplication.c -o multiplication
gcc restoring_division.c -o restoring
gcc nonrestoring_division.c -o nonrestoring
./multiplication
./restoring
./nonrestoring





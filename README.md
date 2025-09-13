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

![WhatsApp Image 2025-09-12 at 21 39 05_d8ec140f](https://github.com/user-attachments/assets/008c6bc3-db9c-4f10-81a5-90508439ab27)


2.Restoring Division

![WhatsApp Image 2025-09-12 at 21 39 05_d705d8b1](https://github.com/user-attachments/assets/4fa0332c-e324-40ef-969e-25c212c296b9)


3.Non Restoring Division

![WhatsApp Image 2025-09-12 at 21 39 05_36ac6cb0](https://github.com/user-attachments/assets/77fd8474-3773-4ec9-a8c6-3ba5545fee1f)




## How to Compile & Run
```bash
gcc multiplication.c -o multiplication
gcc restoring_division.c -o restoring
gcc nonrestoring_division.c -o nonrestoring
./multiplication
./restoring
./nonrestoring





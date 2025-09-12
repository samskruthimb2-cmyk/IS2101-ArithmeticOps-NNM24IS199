# NNM24IS199_codproject
# IS2101-ArithmeticOps-<USN>

## 📌 Course: IS2101 – Computer Organization  
**Project Title:** Arithmetic Operations Using C – Multiplication and Division Algorithms  
**Name:** Samskruthi MB  
**USN:** NNM24IS199
**Section:** D

---

## 📄 Description

This project simulates **low-level arithmetic operations** (multiplication and division) using binary arithmetic in **C programming**.

The implemented algorithms are:

- ✅ **Shift-Add Multiplication** (Signed using 2's Complement)
- ✅ **Restoring Division** (Unsigned)
- ✅ **Non-Restoring Division** (Unsigned with trace output)

These algorithms are commonly used in hardware-level arithmetic and help in understanding processor design.

---

## 🧮 Algorithms Implemented

### 1. Shift-Add Multiplication (Signed, 2’s Complement)
- Supports negative numbers using 2’s complement.
- Step-by-step simulation of shift and add.
- Final product is printed in decimal and binary.

### 2. Restoring Division (Positive Integers)
- Works with unsigned integers.
- Shows each step of restoring if subtraction results in a negative value.
- Prints final quotient and remainder.

### 3. Non-Restoring Division (Positive Integers)
- Uses conditional addition or subtraction based on the sign of the accumulator.
- Includes trace output for each step: Accumulator, Dividend, Quotient bits.
- Final correction step if needed.

---

## 💻 How to Compile and Run

Make sure you have GCC installed. You can compile each file using the following:

```bash
gcc shift_add_multiplication.c -o multiply
./multiply

gcc restoring_division.c -o restoring
./restoring

gcc non_restoring_division.c -o nonrestoring
./nonrestoring

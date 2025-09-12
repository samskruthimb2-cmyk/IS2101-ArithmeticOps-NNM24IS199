def to_binary(n, bits):
    """Convert integer n to binary with two's complement for signed integers."""
    if n < 0:
        n = (1 << bits) + n
    return format(n, f'0{bits}b')

def from_binary(b):
    """Convert binary string (two's complement) to signed integer."""
    if b[0] == '1':
        return -((1 << len(b)) - int(b, 2))
    return int(b, 2)

def shift_add_multiplication(multiplicand, multiplier, bits=8):
    """Perform multiplication using the shift-add algorithm with signed integers."""
    M = multiplicand
    Q = multiplier
    A = 0
    Q_1 = 0

    # Two's complement binary
    M_bin = to_binary(M, bits)
    Q_bin = to_binary(Q, bits)
    A_bin = '0' * bits

    print(f"Initial A: {A_bin}, Q: {Q_bin}, Q-1: {Q_1}, M: {M_bin}\n")

    for step in range(bits):
        if Q_bin[-1] == '1':
            A = from_binary(A_bin)
            M = from_binary(M_bin)
            A = A + M
            A_bin = to_binary(A, bits)
            print(f"Step {step+1}: A = A + M => {A_bin}")

        # Arithmetic right shift of A and Q
        combined = A_bin + Q_bin
        shifted = combined[0] + combined[:-1]
        A_bin = shifted[:bits]
        Q_bin = shifted[bits:]
        print(f"Step {step+1}: Shift => A: {A_bin}, Q: {Q_bin}\n")

    result_bin = A_bin + Q_bin
    result = from_binary(result_bin)
    print(f"Final Result (bin): {result_bin}")
    print(f"Final Result (dec): {result}")
    return result

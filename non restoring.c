def non_restoring_division(dividend, divisor, bits=8):
    A = 0
    Q = dividend
    M = divisor

    print(f"{'Step':<5}{'A':>10}{'Q':>10}{'Operation'}")
    for i in range(bits):
        # Shift A and Q left
        A = A << 1 | ((Q >> (bits - 1)) & 1)
        Q = (Q << 1) & ((1 << bits) - 1)

        # Decision
        if A >= 0:
            A = A - M
            op = "A - M"
        else:
            A = A + M
            op = "A + M"

        # Set Q0
        if A >= 0:
            Q = Q | 1  # Set last bit
        else:
            Q = Q & (~1)  # Clear last bit

        print(f"{i+1:<5}{to_binary(A, bits):>10}{to_binary(Q, bits):>10}{op}")

    # Final correction if A < 0
    if A < 0:
        A = A + M

    print(f"\nQuotient: {Q}")
    print(f"Remainder: {A}")
    return Q, A

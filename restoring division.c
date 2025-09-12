def restoring_division(dividend, divisor, bits=8):
    A = 0
    Q = dividend
    M = divisor

    print(f"{'Step':<5}{'A':>10}{'Q':>10}{'Operation'}")
    for i in range(bits):
        # Shift left A and Q
        A = A << 1 | (Q >> (bits - 1)) & 1
        Q = (Q << 1) & ((1 << bits) - 1)

        A = A - M
        if A < 0:
            Q = Q & (~1)  # Set Q0 = 0
            A = A + M     # Restore
            op = "Restored"
        else:
            Q = Q | 1     # Set Q0 = 1
            op = "Kept"

        print(f"{i+1:<5}{to_binary(A, bits):>10}{to_binary(Q, bits):>10}{op}")

    print(f"\nQuotient: {Q}")
    print(f"Remainder: {A}")
    return Q, A

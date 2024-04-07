import math
def ANDGateCalculation(x1, x2):
    """Calculates the logical AND of two inputs using a perceptron.

    Args:
        x1: The first input value (0 or 1).
        x2: The second input value (0 or 1).

    Prints the logic operation result (0 or 1) for the given inputs.
    """

    string_literal = f"{x1} AND {x2} = "
    weights = [-2, 1, 1]

    Z = weights[0] + x1 * weights[1] + x2 * weights[2]
    sigmoid_val = 1 / (1 + math.exp(-Z))

    if sigmoid_val >= 0.5:
        print(string_literal + "1")
    else:
        print(string_literal + "0")


def ORGateCalculation(x1, x2):
    """Calculates the logical OR of two inputs using a perceptron.

    Args:
        x1: The first input value (0 or 1).
        x2: The second input value (0 or 1).

    Prints the logic operation result (0 or 1) for the given inputs.
    """

    string_literal = f"{x1} OR {x2} = "
    weights = [-1, 2, 2]

    Z = weights[0] + x1 * weights[1] + x2 * weights[2]
    sigmoid_val = 1 / (1 + math.exp(-Z))

    if sigmoid_val >= 0.5:
        print(string_literal + "1")
    else:
        print(string_literal + "0")


for x1 in range(2):
    for x2 in range(2):
        ORGateCalculation(x1, x2)
        ANDGateCalculation(x1, x2)

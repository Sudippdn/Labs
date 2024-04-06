def nQueenSolution(board, col, N):
    if col >= N:
        return True

    for i in range(N):
        val1 = True  # Initialize to True for each row check
        row = i

        # Check for queens in the same row
        for j in range(col):
            if board[row][j] == 1:
                val1 = False
                break

        # Check for queens in diagonals
        for i, j in zip(range(row, -1, -1), range(col, -1, -1)):
            if board[i][j] == 1:
                val1 = False
                break

        for i, j in zip(range(row, N, 1), range(col, -1, -1)):
            if board[i][j] == 1:
                val1 = False
                break

        # If no conflicting queens found, place a queen in this cell
        if val1:
            board[i][col] = 1

            # Recursively check for solutions in next columns
            if nQueenSolution(board, col + 1, N) == True:
                return True

            # Backtrack if no solution found in next columns
            board[i][col] = 0

    return False


N = int(input("Chessboard size = "))

printoutBoard = [[0] * N for i in range(N)]

if nQueenSolution(printoutBoard, 0, N) == False:
    print("Solution failed")
else:
    for i in range(N):
        for j in range(N):
            print(printoutBoard[i][j], end=" ")
        print("")

N = 9

def checkSafe(grid, row, col, num):
  """
  Checks if a number can be placed in a given cell without violating Sudoku rules.

  Args:
      grid: The Sudoku grid as a 2D list.
      row: The row index of the cell.
      col: The column index of the cell.
      num: The number to be placed.

  Returns:
      True if the number can be placed safely, False otherwise.
  """

  # Check row and column
  for x in range(9):
    if grid[row][x] == num or grid[x][col] == num:
      return False

  # Check subgrid
  startRow = row - row % 3
  startCol = col - col % 3
  for i in range(3):
    for j in range(3):
      if grid[i + startRow][j + startCol] == num:
        return False
  return True

def solveSuduko(grid, row, col):
  """
  Solves the Sudoku puzzle using backtracking.

  Args:
      grid: The Sudoku grid as a 2D list.
      row: The row index to start solving from.
      col: The column index to start solving from.

  Returns:
      True if a solution is found, False otherwise.
  """

  # Base cases: end of grid or filled cell
  if row == N - 1 and col == N:
    return True
  if col == N:
    row += 1
    col = 0
  if grid[row][col] > 0:
    return solveSuduko(grid, row, col + 1)

  # Try all possible numbers
  for num in range(1, N + 1):
    if checkSafe(grid, row, col, num):
      grid[row][col] = num
      if solveSuduko(grid, row, col + 1):
        return True
      grid[row][col] = 0  # Backtrack

  return False

sudokuProblem = [
  [0, 9, 0, 5, 6, 1, 0, 0, 7],
  [0, 3, 0, 0, 0, 8, 0, 0, 1],
  [0, 0, 8, 0, 4, 0, 0, 5, 9],
  [7, 0, 0, 2, 8, 0, 1, 0, 0],
  [9, 0, 6, 0, 0, 0, 8, 7, 0],
  [0, 0, 0, 0, 0, 6, 5, 0, 0],
  [0, 0, 0, 0, 0, 0, 0, 0, 0],
  [0, 0, 3, 0, 0, 2, 0, 0, 0],
  [0, 4, 9, 7, 1, 0, 0, 0, 5]
]

print("The solution of above sudoku is:\n")

if solveSuduko(sudokuProblem, 0, 0):
  for i in range(N):
    for j in range(N):
      print(sudokuProblem[i][j], end=" ")
    print()
else:
  print("Solution failed")

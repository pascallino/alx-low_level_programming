#!/usr/bin/python3
""" perimeter of a grid
 # Define directions to check neighbors:
 up, down, left, right.
directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]"""


def island_perimeter(grid):
    """ function to cal  grid perimeter """
    if not grid:
        return 0  # Return 0 if the grid is empty.

    rows, cols = len(grid), len(grid[0])
    perimeter = 0

    # Define directions to check neighbors: up, down, left, right.
    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]

    for row in range(rows):
        for col in range(cols):
            if grid[row][col] == 1:
                for dr, dc in directions:
                    r, c = row + dr, col + dc
                    if (
                        r < 0 or r >= rows or c < 0 or c >= cols
                        or grid[r][c] == 0
                    ):
                        perimeter += 1

    return perimeter

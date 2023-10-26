#!/usr/bin/python3
"""
Module for calculating the perimeter of an island
"""

def island_perimeter(grid):
    """
    Returns the perimeter of the island described in grid.
    """

    # Initialize the perimeter to 0
    perimeter = 0

    # Number of rows and columns in the grid
    rows, cols = len(grid), len(grid[0])

    # Loop through each cell in the grid
    for i in range(rows):
        for j in range(cols):
            # If the cell is land
            if grid[i][j] == 1:
                # Check the above cell
                if i == 0 or grid[i-1][j] == 0:
                    perimeter += 1
                # Check the below cell
                if i == rows-1 or grid[i+1][j] == 0:
                    perimeter += 1
                # Check the left cell
                if j == 0 or grid[i][j-1] == 0:
                    perimeter += 1
                # Check the right cell
                if j == cols-1 or grid[i][j+1] == 0:
                    perimeter += 1

    return perimeter

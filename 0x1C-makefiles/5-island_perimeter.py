#!/usr/bin/python3

"""
A module that computes the perimeter of a grid
which is a list of list of integers"
"""


def island_perimeter(grid):
    """
    Calculates perimeter of a given grid.

    Params:
        grid(list of list of int): Grid representing island

    Returns:
        int: Perimeter of island

    Requirements:
        -0 represents a water zone
        -1 represents a land zone
        -One cell is a square with side length 1
        -Grid cells are connected horizontally/vertically (not diagonally).
        -Grid is rectangular, width and height don’t exceed 100
        -Grid is completely surrounded by water,
        and there is one island (or nothing).
        -The island doesn’t have “lakes”
        (water inside that isn’t connected to the water around the island).
    """

    if not grid or not grid[0]:
        return 0

    rows = len(grid)
    columns = len(grid[0])
    perimeter = 0

    for i in range(rows):
        for j in range(columns):
            if grid[i][j] == 1:
                perimeter += 4
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 2
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 2
    return perimeter

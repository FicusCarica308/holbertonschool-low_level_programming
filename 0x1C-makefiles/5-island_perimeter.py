#!/usr/bin/python3
"""contains function island_perimeter"""


def island_perimeter(grid):
    """returns the perimeter of the island described in grid"""
    total = 0
    for column in range(0, len(grid)):
        for row in range(0, len(grid[column])):
            # if index number is 1 instead of 0
            if grid[column][row] == 1:
                total += 4
                # checks the number to the left
                if row != 0:
                    if grid[column][row - 1] == 1:
                        total -= 1
                # checks the number to the right
                if row != len(grid[column]) - 1:
                    if grid[column][row + 1] == 1:
                        total -= 1
                # checks the bottom list position
                if column != 0:
                    if grid[column - 1][row] == 1:
                        total -= 1
                # checks the bottom list position:
                if column != len(grid) - 1:
                    if grid[column + 1][row] == 1:
                        total -= 1
    return total

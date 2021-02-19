#!/usr/bin/python3
"""contains function island_perimeter"""


def island_perimeter(grid):
    """returns the perimeter of the island described in grid"""
    sum = 1
    
    for column in grid:
        for row in column:
            if row == 1:
                sum += 1
    return sum * 2

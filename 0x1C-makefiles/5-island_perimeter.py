#!/usr/bin/python3
"""SUMMARY"""


def island_perimeter(grid):
    """ """
    new_grid = [[]]
    sum = 1
    
    for column in grid:
        for row in column:
            if row == 1:
                sum += 1
    return sum * 2

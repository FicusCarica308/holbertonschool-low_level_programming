#!/usr/bin/python3
"""contains function island_perimeter"""


def island_perimeter(grid):
    """returns the perimeter of the island described in grid"""
    sum = 0
    count = 0
    cool = 0
    grid2 = [row[:] for row in grid]

    for column in grid:
        if 1 not in column:
            grid2.remove(list(column))
            count -= 1
        elif 1 in column:
            for i in column:
                if i == 0:
                    grid2[count].remove(i)
        count += 1

    sum = len(grid2) * 2
    sum += len(grid2[0]) + len(grid2[len(grid2) - 1])

    for i in range(0, len(grid2) - 1):
        cool = len(grid2[i])
        cool = cool - len(grid2[i + 1])
        if cool < 0:
            cool = cool * -1
        sum += cool
    return sum

#!/usr/bin/python3
"""
5-island_perimeter
"""


def island_perimeter(grid):
    """
    returns the perimeter of the island described in grid
    """
    length = 0
    width = 0
    for i in range(0, len(grid)):
        for j in range(0, len(grid[1])):
            if grid[i][j] == 1 and grid[i-1][j] == 0:
                width += 1
            if grid[i][j] == 1 and grid[i][j-1] == 0:
                length += 1
    return 2*(width+length)

#!/usr/bin/python3
"""Defines an island perimeter measuring function."""


def island_perimeter(grid):
    """Return the perimiter of an island.

    The grid represents water by 0 and land by 1.

    Args:
        grid (list): A list of list of integers representing an island.
    Returns:
        The perimeter of the island defined in grid.
    """
    perimeter = 0

    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                if j == 1 or grid[i][j - 1] == 0:
                    perimeter += 1

                if j == len(grid[0]) - 1 or grid[i][j + 1] == 0:
                    perimeter += 1

                if i == 0 or grid[i - 1][j] == 0:
                    perimeter += 1

                if i == len(grid) - 1 or grid[i + 1][j] == 0:
                    perimeter += 1

    return perimeter

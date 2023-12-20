#!/usr/bin/python3

"""the island_perimeter function."""


def island_perimeter(grid):
    """Function that returns the perimeter of island described in grid."""

    result = 0
	rows = len(grid)
	if grid != []:
		cols = len(grid[0])
	
	for i in range(rows):
		for j in range(cols):
			if grid[i][j] == 1:
				result += 4
				if i > 0 and grid[i - 1][j] == 1:
					result -= 2
				if j > 0 and grid[i][j - 1] == 1:
					result -= 2
	
	return result


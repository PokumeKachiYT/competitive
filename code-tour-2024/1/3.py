from bisect import bisect_right
import sys

"""n, m = map(int, input().split())
initial_heights = list(map(int, input().split()))
new_heights = [int(input()) for _ in range(m)]"""

input_func = sys.stdin.readline
n, m = map(int, input_func().split())
initial_heights = list(map(int, input_func().split()))
new_heights = [int(input_func()) for _ in range(m)]

positions = []

for height in new_heights:
    pos = bisect_right(initial_heights, height)
    initial_heights.insert(pos, height)

    positions.append(str(pos + 1))

sys.stdout.write('\n'.join(positions))

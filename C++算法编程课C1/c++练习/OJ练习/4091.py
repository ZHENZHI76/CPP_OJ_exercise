a, b, c = map(int, input().split())

tb = a * 10 * 8 + b * 8 + c

boxes = tb // (24 * 10 * 8)
rb = tb % (24 * 10 * 8)

br = rb // (10 * 8)
rb = rb % (10 * 8)

packages = rb // 8
rb = rb % 8

print(boxes)
print(br)
print(packages)
print(rb)
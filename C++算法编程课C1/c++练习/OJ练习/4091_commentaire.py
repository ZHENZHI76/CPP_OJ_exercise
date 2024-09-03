# 将输入的字符串转换为整数a, b, c
a, b, c = map(int, input().split())

# 将所有的橡皮擦转换为零散的块数
total_blocks = a * 10 * 8 + b * 8 + c

# 计算可以打包成多少箱
boxes = total_blocks // (24 * 10 * 8)
# 计算剩下的块数
remaining_blocks = total_blocks % (24 * 10 * 8)

# 计算剩下的块数可以打包成多少盒
boxes_remaining = remaining_blocks // (10 * 8)
# 再次计算剩下的块数
remaining_blocks = remaining_blocks % (10 * 8)

# 计算剩下的块数可以打包成多少包
packages = remaining_blocks // 8
# 最后剩下的块数
remaining_blocks = remaining_blocks % 8

# 输出结果
print(boxes)
print(boxes_remaining)
print(packages)
print(remaining_blocks)








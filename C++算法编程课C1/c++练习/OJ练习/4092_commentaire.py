n = int(input().strip())  # 读取输入

# 每一箱的橡皮擦数量
pieces_per_box = 24 * 10 * 8

# 两台机器需要处理的橡皮擦总数量
total_pieces = pieces_per_box * n

# 每台机器需要处理的橡皮擦数量
pieces_per_machine = total_pieces / 2

# 计算每台机器打包一箱橡皮擦需要的时间
time_for_packs = pieces_per_machine / 8 * 3
time_for_boxes = pieces_per_machine / 8 / 10 * 5
time_for_carton = pieces_per_machine / 8 / 10 / 24 * 7

# 计算总时间（以秒为单位）
total_seconds = time_for_packs + time_for_boxes + time_for_carton

# 将时间转换为小时，分钟和秒
hours = total_seconds // 3600
remaining_seconds = total_seconds % 3600
minutes = remaining_seconds // 60
seconds = remaining_seconds % 60

# 输出结果
print(f"{int(hours)}小时{int(minutes)}分钟{int(seconds)}秒")




n = int(input().strip())

ppb = 24 * 10 * 8

tp = ppb * n

ppm = tp / 2

tfp = ppm / 8 * 3
tfb = ppm / 8 / 10 * 5
tfc = ppm / 8 / 10 / 24 * 7

ts = tfp + tfb + tfc

hours = ts // 3600
rs = ts % 3600
minutes = rs // 60
seconds = rs % 60

print(f"{int(hours)}小时{int(minutes)}分钟{int(seconds)}秒")
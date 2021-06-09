# ham read
m = int(input("Enter 2N: "))
mat = []
for i in range(m):
    mat.append([])
    for j in range(2):
        x = int(input())
        mat[i].append(x)

# xu ly deviation
sub = False
deviation = []
aux = 0
for i in mat:
    for j in i:
        if not sub:
            aux += j
            sub = True
        else:
            aux -= j
            deviation.append(aux)
            aux = 0
            sub = False
result = mat[0][1] + mat[len(mat)-1][0]
del deviation[0]
del deviation[-1]
# tim cac vi tri lai phu
pilot_pos = [0]*len(deviation)  # 0= lai chinh, 1= lai phu
count = 0
while count < len(deviation)/2:
    pos = deviation.index(max(deviation))
    if pos == 0:
        deviation[pos] = 0
        pilot_pos[pos] = 1
        count += 1
    total_sub = 0
    for i in range(pos):
        if (pilot_pos[i] == 1):
            total_sub += 1
    if (total_sub < pos):
        pilot_pos[pos] = 1
        count += 1
    deviation[pos] = min(deviation)

#
index = 1
for i in pilot_pos:
    result += mat[index][i]
    index += 1
    pass

print("Ket qua: ", result)

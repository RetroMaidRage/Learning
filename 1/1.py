import random

f_array = []
s_array = []
final = []

for i in range(10):
    f_array.append(random.randint(0, 9))
    s_array.append(random.randint(0, 9))

for i in range(10):
    final_add = f_array[i] + s_array[i]
    final.append(final_add)

print("Масив 1:", f_array)
print("Масив 2:", s_array)
print("Фінальний масив:", final[::-1])

# Считываем трехзначное число
number = input()

# Получаем отдельные цифры
a = int(number[0])
b = int(number[1])
c = int(number[2])

# Выводим все перестановки
print(number)
print(a, c, b, sep="")
print(b, a, c, sep="")
print(b, c, a, sep="")
print(c, a, b, sep="")
print(c, b, a, sep="")

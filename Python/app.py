# Data types
# Int
x = 2

# Float
x = 2.3

# String
string = "Hello World!"

# Bool
x = True

print(string, x , end = "\n")

#Inpunt
#name = input("Name: ")

#Output
#print(name)


#Condicionales
x = 1
y = 2
if x == y:
    print("Hola")
elif x < y:
    print("Hola23")
else:
    print("Hola22")

#List - mutable
list4 = [1,2,3,4,5]

#Tuple - Inmutable
tuple = (1,2,3,4,5)

#For Loops
for i in range(1,10,2):
    print(i)

print()

for i in range(len(list4)):
    print(i)

print()

for i in range(len(list4)):
    print(list4[i])

print()

for i in list4:
    print(i)

print()
for i, element in enumerate(list4):
    print(i, element)

#While Loops
i = 0
while i < 10:
    print(i)
    i +=1

#Slice Loops
#slice = [START:STOP:STEP]
slice = list4[0:3:1]
slice2 = list4[::2]
print(slice2)


#Set - Faster checking, removing and deleting than list
x = set()
s = {4,32,2,2}
s2 = {1,2,34,4}
print(4 in s)
print(s.union(s2))
print(s.difference(s2))
print(s2.difference(s))
print(s.intersection(s2))


#Diccionary - Key Value Pair
dic = {"key": 4}

dic["key2"] = 5
dic[2] = [2,2,1,1]

print(dic)
print("key" in dic)
print(dic.keys())
print(dic.values())

del dic["key"]

for key, value in dic.items():
    print(key, value)


#Comprehensions
x = [x for x in range(5)]

print(x)

x = [0 for x in range(5)] 

x = [i for i in range(25) if i % 5 == 0]
print(x)

#Functions
def func(x, y, z=None):
    print("Estoy llamando a la función", z)
    return x * y, x / y #Devulve una tuple

resultado = func(5,6)
print(resultado)

multiplicacion = func(5,6)[0]
division = func(5,6)[1]

print(multiplicacion, division)

#Functions as variables
def funco(x):
    def func2():
        print(x)

    return func2

print(funco(2))

x = funco(5)

x()

#Unpack Operator / *ARGS and **KWARGS
def func3(*args, **kwargs):
    pass

x = [1,23,234234,234234]
#*x unpack all items of the list individually
print(x)
print(*x)

#only * for list and tuples
def fun4(x, y):
    print(x,y)

pairs = [(1,2),(2,4)]

for pair in pairs:
    fun4(*pair)

#double * for dicctionaries
def func5(x,y):
    print(x,y)

func5(**{"y": "soy y", "x": "soy x"})


def func6(*args, **kwargs):
    print(args, kwargs)
    print(*args)


func6(1,2,3,4,5, one = 0, two = 20, prueba = 10)



#Scope and Globals
x = "Jose"

def func_name(name):
    global x #define x as global
    x = name

print(x)
func_name("Manuel")
print(x)


#Exceptions
#raise Exception("Thats bad!")
#raise FileExistsError("Error!")

#Handling Exceptions
try:
    a = 7 / 0
except Exception as e:
    print(e)
finally:
    print("finally")



#Lamba functions
lambda_fun = lambda x: x + 5

print(lambda_fun(5))


#Map
list2 = [1,2,3,4,5,5,6,67,7,8,8,90,0,0,8,65,5]

mp = map(lambda i: i + 1, list2)

print(list(mp))

#Filter
filter = filter(lambda f: f % 2 == 0, list2)
print(list(filter))


# F Strings
prueba = 10
x = f"Hola mundo {2+5} {prueba}"
print(x)

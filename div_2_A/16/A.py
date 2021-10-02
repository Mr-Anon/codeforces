s = str(input())

corners  = {'a1','a8','h1','h8'}
edges = {'a','1','8','h'}

if s in corners:
    print("3")
elif s[0] in edges or s[1] in edges:
    print("5")
else:
    print("8")

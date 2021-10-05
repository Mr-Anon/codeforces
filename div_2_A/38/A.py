n = int(input())
s = input()

v = {'a','e','i','o','u','y'}

ans = ''
ans+=s[0]
for i in range(1,n):
    if s[i] in v and s[i-1] in v:
        continue
    else:
        ans+=s[i]
# if s[-1] in v and s[-2] in v :
#     print(ans)
# else:
#     ans+=s[-1]
#     print(ans)
print(ans)
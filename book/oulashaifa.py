n = 10000000
prime = [True for i in range(0,n+1)]
p = 2
note=open("D:\hello_c_clion\\book\\a.txt",mode="a")
while(p * p <= n):
    if (prime[p] == True):
        for i in range(p * p, n+1, p):
            prime[i] = False
    p += 1
count=0
for p in range(2, n):
    if prime[p]:
        note.write(str(p)+"\n")
        # print(p)
print(count)
note.close()
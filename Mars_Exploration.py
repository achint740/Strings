es = input()
sig = len(es)//3
rs = "SOS"*sig
c=0
for i in range(len(es)):
    if(es[i]!=rs[i]):
        c+=1
print(c)

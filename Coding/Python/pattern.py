a=int(input("Enter the range -:"))
max=a*2
for i in range(1,max):
    for j in range(1,max):
        if(i<a):
            if ((i%2==0 and j%2==0) or (i%2!=0 and j%2!=0)) and i<=j<=max-i:
                print("*",end='')
            else:
                print(' ',end='')
        else:
            if max-i<=j<=i and ((i%2==0 and j%2==0) or (i%2!=0 and j%2!=0)):
                print("*",end='')
            else:
                print(' ',end='')
    print()
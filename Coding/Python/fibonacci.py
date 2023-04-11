print("My name is Harshit Pandey")
print("My SAP ID is 500095944")
def ser(n,c=[]):
    if(n==0 or n==1): 
        #print(n,end=",")
        return n
    t=ser(n-2)+ser(n-1,c)
    c.append(t)
    #print(t,end=",")
    return(t)
n=int(input("Enter a natural number-:"))
if(n<0):
    print("Negetive number found.")
    exit(0)
list=[0,1]
if n==0:
    print("0 is Not a Valid Value.")
    exit(0)
if n==1:
        print(list[0],end='.')
else: 
    ser(n-1,list)
    print(list)
n = int(input())
for primos in range (n):
    i = int (1)
    t = int (0)
    x = int (input())
    k = int (x**(1/2))+1
    while (i<=k):
        if (x%i==0):
            t += 1
            if (t > 2):
                i = x + 1
        i +=2
    if t == 1 and x > 1:
        print ("Prime")
    else:
        print ("Not Prime")

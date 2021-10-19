# MIXTURE
# 
# Chef has A units of solid and B units of liquid. He combines them
# to create a mixture. What kind of mixture does Chef produce: a solution,
# a solid, or a liquid?

# A mixture is called :
# 1) A solution if A>0 and B>0,
# 2) A solid if B=0, or
# 3) A liquid if A=0.

# Constraints :
# 1≤T≤20
# 0≤A,B≤100
# A+B>0

T = int(input())

# list to store the resulting mixture
result = list()

if T > 1 and T < 20 :

    # take input and calculate results
    for i in range(0, T) :
        A,B = input().split()
        A = int(A)
        B = int(B)

        if A + B > 0 :
            if A > 0 and B > 0 :
                result.append('Solution')
            elif B == 0 :
                result.append('Solid')
            else :
                result.append('Liquid')

        else :
            print('Mixture can\'t be created')

    # print the results
    for item in result :
        print(item)

else :
    print("T must be > 0 and < 20")
            


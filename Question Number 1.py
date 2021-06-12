num = int(input());
str = input();
decnum = int(str,2);
   
x = bin(decnum-1).replace("0b"," ");   
y = bin(decnum+1).replace("0b"," ");
if(len(x) != len(y)) :
    print(-1)
    exit(0);
else:
    print(int(x),int(y))
    
# def binarytodecimal(str)
#     return int(str,2)
# def decimaltobinary(n)
#     return bin(n).replace("0b","")

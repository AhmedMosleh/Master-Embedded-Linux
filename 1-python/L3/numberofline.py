# number the file
# f = open('file.txt', 'r')
# tempf = open('file1.txt','w')
# l = f.readlines()
# f.seek(0)
# for i in range(1,len(l)+1):
#     tempf.write(f"{i}. {f.readline()}")


# cunt num. of lines
f = open('file.txt', 'r')
print(len(f.readlines()))

# cunt num. of lines
# move cursor to biggneing
f.seek(0)
print(len(f.read().split()))
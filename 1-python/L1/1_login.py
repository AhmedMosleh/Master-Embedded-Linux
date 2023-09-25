# login system 
# Ahmed Mosleh

my_data = {"Ahmed" : 1394, "Ali" : 6078, "Amr" : 9345}

user_name = input("please enter user name: ")
password = int(input("please enter password: "))

# if my_data[user_name] == password:
#     print("you're welcome")
# else:
#     print("incorrect entry")

print("you're welcome") if my_data[user_name] == password else print("incorrect entry")
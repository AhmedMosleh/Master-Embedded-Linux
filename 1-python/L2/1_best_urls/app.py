import firelink



print("please select one of these websites:")
i = 1
for key in firelink.my_urls:
    print(f"{i}. {key}")
    i += 1

user_url = input("")

firelink.Firefox(user_url)

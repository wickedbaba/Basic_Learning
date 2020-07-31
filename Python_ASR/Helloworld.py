# color = "White"
# thing = "epoh"
# print(color + " is the color of " + thing)
#
# for i in range(5):
#     print("Hello, Wolrd !")
def format_name(first_name, last_name):

	if first_name is None:
		string = "Name: " + first_name


	elif last_name is None:
		string = "Name: " + last_name


	elif first_name is None and last_name is None:
		string = None


	else:
		string = "Name: " + last_name + ", " + first_name


	return string


print(format_name("Ernest", "Hemingway"))
# Should return the string "Name: Hemingway, Ernest"

print(format_name("", "Madonna"))
# Should return the string "Name: Madonna"

print(format_name("Voltaire", ""))
# Should return the string "Name: Voltaire"

print(format_name("", ""))
# Should return an empty string

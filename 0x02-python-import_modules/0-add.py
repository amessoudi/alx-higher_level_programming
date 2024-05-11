#!/usr/bin/python3

# Import the add function from add_0
from add_0 import add

def main():
	# Assign the values to variables a and b
	a = 1
	b = 2

	# Calculate the sum using the add function
	result = add(a, b)

	# Print the formatted result
	print(f"{a} + {b} = {result}")

# Ensure this script does not run when imported
if __name__ == "__main__":
	main()

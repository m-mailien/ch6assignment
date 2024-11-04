# Define a tuple t in Python that stores the (1, 2, 5, 3); then print out on the
# screen the second element. Finally, use index slicing (‘:’ operator) to print on the
# screen the two elements (2, 5)

my_tuple = (1, 2, 5, 3)

# access elements; second
print("Second element:", my_tuple[1])

# slicing
t = my_tuple[1:3] # start at 1, stop before 3
print(t) # outputs (2, 5)
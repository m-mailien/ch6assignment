# Define a custom data type using a class in Python. Create instances of this type and demonstrate how to access attributes or methods

# class declare
class Flower:
    def __init__(self, color: str, type: str, number: int):
        self.color = color
        self.type = type
        self.number = number

    def display_info(self):
        return f"Flower type: {self.type}, Color: {self.color}, Number: {self.number}"

# instances
daisy = Flower("white", "daisy", 20)
rose = Flower("yellow", "rose", "12")

# access
print(daisy.color) # prints white
print(rose.number) # prints 12
print(daisy.type) # prints daisy
print(rose.display_info()) # prints all info
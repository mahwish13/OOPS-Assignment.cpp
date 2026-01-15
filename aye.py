# A simple Python program that asks for your name and greets you
def greet():
    name = input("Enter your name: ").strip()
    if name:
        print(f"Hello, {name}!")
    else:
        print("Hello there!")

if __name__ == "__main__":
    greet()

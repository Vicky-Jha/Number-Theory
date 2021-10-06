#Calculator Project

def add(a,b):
  return a+b
def subtract(a,b):
  return a-b
def multiply(a,b):
  return a*b
def divide(a,b):
  return a/b

operations = {
  "+":add,
  "-":subtract,
  "*":multiply,
  "/":divide
}

def calculator():
    num1 =float(input("What's your first number?: "))

    for symbol in operations:
      print(symbol)  
    calculation_done = True

    while calculation_done:
        sign = input("Pick an operation:")
        num2 =float(input("What's your next number?: "))
        calculation_function = operations[sign]
        answer = calculation_function(num1, num2)

        print(f"{num1} {sign} {num2} = {answer}")

        if input("Are you want to continue? Type 'yes' or 'no'.\n") == "y":
            num1 = answer
        else:
            calculation_done = False
            calculator()

calculator()

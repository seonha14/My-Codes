height = input("Enter your height : ")
weight = input("Enter your weight : ")
# Note : Input functions takes and stores strings only
bmi = int(weight) / (int(height) ** 2)
print(bmi)
print("integer form : " + str(int(bmi)))

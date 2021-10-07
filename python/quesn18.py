# Name : Himanshu
# Roll No. : CS20B1097

'''
Question 18.
Define a function which can generate and print an array where 
the values are square of numbers between 1 and 20 (both included).
'''

def printArray():
    arr = []*20
    for i in range(1, 21):
        arr.append(i*i)
    print(arr)

printArray()

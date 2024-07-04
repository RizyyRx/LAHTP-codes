#initialize 8x8 array
row=8
column=8
arr=[[None for i in range(row)]for i in range(column)]

#prints the 2D array
def print_arr(arr):
    for i in arr:
        print(i)

#sets the full array with 1, indicating presence of terrorists with hostages
def set_arr(arr):
    for i in range(row):
        for j in range(column):
            arr[i][j]=1

#sets 0 to given row and column of an array
def set_row_column(arr,row,column):
    for i in range(8):
        arr[row][i]=0
        arr[i][column]=0

#counts the array for no of zeros
def count(arr):
    count=0
    for row in arr:
        for element in row:
            if element==0:
                count=count+1
    return count
     
print("Focus agent!!\n")

#display the building with terrorists and hostages
set_arr(arr)
print_arr(arr)
print("\nEach room is filled with terrorists\n")

#prompt user for chopper count
chopper=int(input("How many choppers do you need?"))

#land choppers using user input of x and y coordinates
print("\nEnter the x and y coordinates to land chopper\n")
for i in range(1,chopper+1):
    x=int(input("x coordinate of chopper "+ str(i)+": "))-1
    y=int(input("y coordinate of chopper "+ str(i)+": "))-1
    print("")
    set_row_column(arr,x,y)

#display updated building
print_arr(arr)
print("\nchoppers landed successfully!!\n")

#display count
print("Total hostages rescued: "+ str(count(arr)))

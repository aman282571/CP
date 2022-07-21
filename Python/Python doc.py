# Data Types:-
#  int,float,str,list,tuple,range,None,bool,dict,set 
#  typeof(var) to know the type

# type conversion 
# int(),str(),float()

#  7/5 float division
# 7//5 floor division

#  == operator compare values
#  is operator compare address
a= 1 if 2>3 else 4 # ternary operator in python
# strings
str="  aman thakuR    "
print(str.title()) # return a string in which every first character of each word is in upperase and other in lowercase
print(f"{str} is a good boy")  # we can use variable inside string using this.f->format
print(str.lstrip())
print(str.rstrip())
print(str.strip())     # trim extra left and right whitespaces
#  isupper,islower,isdigit,
print(str.upper())
print(str.lower())    # change all the cases to lower
print(str.split(",")) # split on the basis of delimenator,it can return empty strings also
print(str.find("a"));
print(ord("a")) # get corresponding ascii value
print(chr(76))  # get corresponding  ascii char


# lists
arr=[1]
arr.append(1)
arr.insert(1,10)
arr.pop()  # remove last element
arr.pop(0)  # remove 0th  element
arr.remove(1) #remove first occurence of element

arr.sort(reverse=True)
arr=[[1,2],[3,6],[1,5],[6,1],[4,7]];
arr.sort(key=lambda var:(var[0],-var[1]),reverse=True)
arr.reverse()
# 1 in arr  check if 1 is present in list or not
arr=[1,2,3,4,5,6]
print([i for i in arr if i>3])   # [value loop condition]
# tuples are just like lists but we can't change value in that once we define tuple

# sets
st={1,2,3,4}
st.add(7)
st.remove(7)


# Dictionary 
obj={
    'name':"aman",
    "age":3
}
obj['name']  # if the evalue doesn't exist then we can get error to avoid this use get method
obj.get('name')  # if name does not exist it will return none
obj.get('name',"")  # if name does not exist it will return ""

print(obj.items())
print(obj.keys())
print(obj.values())

 
#   queue
from queue import Queue
q=Queue()
q.put("a")
print(q.empty())
print(q.get())
print(q.qsize())



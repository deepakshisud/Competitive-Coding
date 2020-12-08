strings = ['a','b','c','d']  # lists are arrays in python

print(strings[2])

#push 
strings.append('e')  #O(1)

#pop
strings.pop()  #O(1)

#add first element
strings.insert(0,'x')  #O(n)

#splice
strings.insert(2,'alien')  #O(n)

print(strings)
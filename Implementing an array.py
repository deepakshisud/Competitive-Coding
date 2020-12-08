class MyArray:
    def __init__(self):
        self.length = 0
        self.data={}
    
    def get(self,index):
        return(self.data[index])

    def push(self,value):
        self.data[self.length] = value
        self.length+=1
        return self.length
    
    def pop(self):
        lastItem = self.data[self.length-1]
        del self.data[self.length-1]
        self.length-=1
        return lastItem

    def delete(self,index):
        item = self.data[index]
        for i in range(index,self.length-1):
            self.data[i] = self.data[i+1]
        del self.data[self.length-1]
        self.length-=1


newArray = MyArray()
newArray.push('hi')
newArray.push('you')
newArray.push('!')
x = newArray.pop()
print(x)
newArray.push('are')
newArray.push('good')
newArray.delete(1)
print(newArray.get(1))
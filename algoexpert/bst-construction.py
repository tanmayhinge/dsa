# Do not edit the class below except for
# the insert, contains, and remove methods.
# Feel free to add new properties and methods
# to the class.
class BST:
    def __init__(self, value):
        self.value = value
        self.left = None
        self.right = None

    def insert(self, value):
        if value < self.value:
            if self.left is None:
                self.left = BST(value)
            else:
                self.left.insert(value)
        else:
            if self.right is None:
                self.right = BST(value)
            else:
                self.right.insert(value)
        return self

    def contains(self, value):
        if value < self.value:
            if self.left is None:
                return False
            else:
                return self.left.contains(value)
        elif value > self.value:
            if self.right is None:
                return False
            else:
                return self.right.contains(value)
        else:
            return True

    def removeNode(self, value):
        if self is None:
            return
        if self.value == value:
            print("accessed")
            # TODO remove the node and make children of current the children of prev 
            # then delete the current
            pass
        if value < self.value:
            prev = self
            self.removeNode(self.left, value)
            
        if value > self.value:
            prev = self
            self.removeNode(self.right, value)

b = BST(8) 
b.insert(5)
b.insert(2)
b.insert(1)

if(b.contains(2)):
    print("yes contains 2")

print()

b.removeNode(3)
b.removeNode(3)
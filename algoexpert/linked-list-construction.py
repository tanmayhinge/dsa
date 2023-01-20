# This is an input class. Do not edit.
class Node:
    def __init__(self, value):
        self.value = value
        self.prev = None
        self.next = None


# Feel free to add new properties and methods to the class.
class DoublyLinkedList:
    def __init__(self):
        self.head = None
        self.tail = None

    def setHead(self, node):
        if self.head is None:
            self.head = node
            self.tail = node
        else:
            self.insertBefore(self.head, node)
        pass

    def setTail(self, node):
        if self.head is None:
            self.setHead(node)
        else:
            self.insertAfter(self.tail, node)
        pass

    def insertBefore(self, node, nodeToInsert):
        if node == self.head:
            self.setHead(nodeToInsert)
        else:
            tempNode = self.head
            while tempNode:
                if tempNode == node:
                    
        pass

    def insertAfter(self, node, nodeToInsert):
        # Write your code here.
        pass

    def insertAtPosition(self, position, nodeToInsert):
        # Write your code here.
        pass

    def removeNodesWithValue(self, value):
        # Write your code here.
        pass

    def remove(self, node):
        # Write your code here.
        pass

    def containsNodeWithValue(self, value):
        # Write your code here.
        pass

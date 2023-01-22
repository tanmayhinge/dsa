# This is an input class. Do not edit.
class LinkedList:
    def __init__(self, value):
        self.value = value
        self.next = None


def removeKthNodeFromEnd(head, k):
    fast = head
    slow = head

    for i in range(k):
        fast = fast.next
    if fast is None:
        head.value = head.next.value
        head.next = head.next.next
        return
    while fast.next:
        fast = fast.next
        slow = slow.next
    slow.next = slow.next.next
    return head
        


# This is the class of the input root. Do not edit it.
class BinaryTree:
    def __init__(self, value):
        self.value = value
        self.left = None
        self.right = None

def __branchSums(node, running_sum, ret):
    if node is None:
        return
    running_sum += node.value
    if node.left is None and node.right is None:
        ret.append(running_sum)
        return
    __branchSums(node.left, running_sum, ret)
    __branchSums(node.right, running_sum, ret)
    


def branchSums(root):
    ret = []
    __branchSums(root, 0, ret)
    return ret
        

class BST {
public:
  int value;
  BST *left;
  BST *right;

  BST(int val);
  BST &insert(int val);
};

int findClosestValueInBst(BST *tree, int target) {
    int closest = tree->value;
    while(tree != nullptr){
        if(abs(target-closest) > abs(target-tree->value))
            closest = tree->value;
        if(target < tree->value){
            tree = tree->left;
        }
        else{
            tree = tree->right;
        }
    }
  return closest;
}

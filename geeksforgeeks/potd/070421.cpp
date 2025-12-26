// Left View of Binary Tree

class Solution {
  public:
    void leftViewHelper(Node* root, int level, vector<int>& result) {
        if (root == NULL) {
            return;
        }
        
        if (level == result.size()) {
            result.push_back(root->data);
        }
        
        leftViewHelper(root->left, level + 1, result);
        leftViewHelper(root->right, level + 1, result);
    }
    
    vector<int> leftView(Node *root) {
        vector<int> result;
        leftViewHelper(root, 0, result);
        return result;
    }
};
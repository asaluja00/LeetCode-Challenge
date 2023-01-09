class Solution {
public:
    void print(TreeNode* ptr , vector<int> &a){
        if(ptr!=NULL){
            a.push_back(ptr->val);
            print(ptr->left,a);
            print(ptr->right,a);
        }
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> a;
        if(root==NULL) return a;
        print(root,a);
        return a;
    }
};
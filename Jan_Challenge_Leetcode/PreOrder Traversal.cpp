
//recursive approach 

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


// Iterative Approach

class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> a;
        stack<TreeNode*> stk;
        while(root || !stk.empty()){
            if(root){
                a.push_back(root->val);
                if(root->right) stk.push(root->right);
                root=root->left;
            }
            else{
                root=stk.top();
                stk.pop();
            }
        }
        return a;
    }
};
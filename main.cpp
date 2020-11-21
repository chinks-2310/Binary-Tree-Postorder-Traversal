class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        if(root==NULL)return ans;
        stack<TreeNode*> s1,s2;
        s1.push(root);
        TreeNode* temp;
        while(!s1.empty())
        {
            temp=s1.top();
            s1.pop();
            s2.push(temp);
            if(temp->left)
            {
                s1.push(temp->left);
            }
            if(temp->right)
            {
                s1.push(temp->right);
            }
        }
        while(!s2.empty())
        {
            ans.push_back(s2.top()->val);
            s2.pop();
        }
        return ans;
        
    }
};

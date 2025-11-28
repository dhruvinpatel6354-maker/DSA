vector<int> postorderTraversal(TreeNode* root) {
        // pre order NLR
        //post order LRN so reversing data
        stack<TreeNode*> st;
        vector<int> ans;
        if(!root)return ans;
        st.push(root);
        while(!st.empty()){
            TreeNode* temp=st.top();
            st.pop();
            ans.push_back(temp->val);
            if(temp->left)st.push(temp->left);
            if(temp->right)st.push(temp->right);
        
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }

class Solution {
public:
    vector<int> preorder(Node* root) {
        vector<int> res;
        if(root == nullptr){
            return res;
        }
        stack<Node*> aux;
        aux.push(root);
        while(!aux.empty()){
            Node* current;
            current = aux.top();
            aux.pop();
            res.push_back(current->val);
            for(int i = current->children.size() - 1; i >= 0; i--){
                if(current->children[i] != nullptr){
                    aux.push(current->children[i]);
                }
            }
        }
        return res;
    }
};
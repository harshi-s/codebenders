struct Node {
    int data;
    Node * left;
    Node * right;
    Node(int cal){
        data=cal;
        left=right=NULL;
    }
};

class Solution{
    public:
    Node* findsucc(Node* temp, int k, Node* &succ){
        if(temp==NULL) return temp=new Node(k);
        
        if(k < temp->data) {
            succ=temp;
            temp->left=findsucc(temp->left, k, succ);
        }
        else{
            temp->right=findsucc(temp->right, k, succ);
        }
        return temp;
    }
    
    vector<int> findLeastGreater(vector<int>& arr, int n) {
        
        Node* temp=NULL;
        
        for(int i=n-1; i>=0; i--){
            Node* succ=NULL;
            temp=findsucc(temp, arr[i], succ);
            
            if(succ){
                arr[i]=succ->data;
            }
            else{
                arr[i]=-1;
            }
        }
        return arr;
    }

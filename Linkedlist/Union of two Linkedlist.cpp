class Solution
{
    public:
    struct Node* makeUnion(struct Node* head1, struct Node* head2)
    {
        set<int> s;
        
        Node* ptr1=head1;
        Node* ptr2=head2;
        
        
        while(ptr1)
        {
            s.insert(ptr1->data);
            ptr1=ptr1->next;
        }
        
         while(ptr2)
        {
            s.insert(ptr2->data);
            ptr2=ptr2->next;
        }
        
        Node* prev =new Node(0);
        Node* head3=prev;
        
        for(auto i=s.begin();i!=s.end();i++)
        {
            Node* ptr= new Node(*i);
            prev->next=ptr;
            prev=ptr;
        }
        
        return head3->next;
    }
};

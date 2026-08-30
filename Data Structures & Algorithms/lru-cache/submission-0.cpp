class LRUCache {
public:
    class Node
    {
        public:
        int key;
        int val;
        Node *prev;
        Node *next;

        Node(int key,int val)
        {
            this->key=key;
            this->val=val;
            prev=nullptr;
            next=nullptr;
        }
    };

    unordered_map<int,Node*>cache;

    Node *head;
    Node *tail;
    int cap;

    LRUCache(int capacity) {
         head=new Node(0,0);
         tail=new Node(0,0);

        this->cap=capacity;
        head->next=tail;
        tail->prev=head;
    }

     void remove(Node* node)
     {
        Node *prevnode=node->prev;
        Node *nextnode=node->next;
        prevnode->next=nextnode;
        nextnode->prev=prevnode;
     }

     void insert(Node *node)
     {
        Node* nextnode = head->next;
        head->next=node;
        node->prev=head;

        node->next=nextnode;
        nextnode->prev=node;
     }

    
    int get(int key) {
        if(cache.find(key)!=cache.end())
        {
            Node *node=cache[key];
            remove(node);
            insert(node);
            return node->val;
        }
        else
        {
            return -1;
        }

    }
    
    void put(int key, int value) {
         if(cache.find(key)!=cache.end())
         {
            Node *node=cache[key];
            node->val=value;
            remove(node);
            insert(node);
            
         }
         else if(cache.size()<cap)
         {
            Node* newnode = new Node(key, value);
            cache[key]=newnode;
            insert(newnode);

         }

         else
         {
            Node *lru=tail->prev;
            remove(lru);
            cache.erase(lru->key);

            Node* newNode = new Node(key, value);

            cache[key] = newNode;

            insert(newNode);
         }

    }
};

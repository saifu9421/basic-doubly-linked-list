#include<bits/stdc++.h>
using namespace std;

   class Node{
       public:
          int val;
             Node *next;
             Node*prev;
             Node(int val){
                 this->val =  val;
                     this->next = NULL;
                     this->prev = NULL;
             }
     };

   void insert(Node *&head,Node *&tail,int val){
        Node *newNode =  new Node(val);
         if(head == NULL){
              head =  newNode;
              return;
         };
          Node *tmp = head;
           while (tmp->next != NULL)
           {
               tmp =  tmp->next;
           };
            tmp->next = newNode;
             newNode->prev =  tmp;
             tail = newNode;
   };

      void print(Node*tail){
           Node*tmp =  tail;
            while (tmp != NULL)
            {
                 cout<<tmp->val<<" ";
                  tmp = tmp->prev; 
            };
      };

          void head_insert(Node *&head,int val){
                Node *newNode =  new Node(val);
                 if(head == NULL){
                     head = newNode;
                     return;
                 };
                 newNode->next = head;
                  head->prev = newNode;
                   head =  newNode;
          };

            void printNormal(Node *head){
                   Node *tmp = head;
                    while (tmp != NULL)
                    {
                         cout<<tmp->val<<" ";
                          tmp =  tmp->next;
                    };
            };

            void any_position_insert(Node *&head,Node *&tail,int pos,int val){
                 Node *newNode = new Node(val);
                   if(pos == 1){
                     head_insert(head,val);
                     return;
                   };
                    Node *tmp =  head;
                    for(int i =  1; i<pos-1;i++){
                        tmp =  tmp->next;   
                    };

                    newNode->next = tmp->next;
                     if(tmp->next != NULL){
                    tmp->next->prev = newNode;
                     tmp->next = newNode;
                     newNode->prev = tmp;
                     }else if(tmp->next == NULL){
                           tmp->next = newNode;
                          newNode->prev = tmp;
                          tail = newNode;
                     }
        //                 newNode->next = tmp->next;
        //      if (tmp->next != NULL) {
        // tmp->next->prev = newNode;
        //    }
        //       tmp->next = newNode;
        //       newNode->prev = tmp;

            };
             
             
 int main(){
      Node*head = NULL;
       Node *tail = NULL;

       while (true)
       {
         int val;
          cin>>val;
           if(val == -1) break;
            insert(head,tail,val);
       };

         any_position_insert(head,tail,1,100);
         any_position_insert(head,tail,5,300);
         any_position_insert(head,tail,3,500);

        // head_insert(head,20);
        //  head_insert(head,50);

        printNormal(head);
        cout<<endl;
        print(tail);
     return 0;
 }
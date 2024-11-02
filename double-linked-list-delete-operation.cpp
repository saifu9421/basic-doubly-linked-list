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

    void head_delete(Node *&head){
      Node *deleteNode =  head;
        if(head->next == NULL){
             head = head->next;
              delete head;
              return;
        };
            head  =  head->next;
                delete deleteNode;
             head->prev = NULL;
            return;
    };
     
     void delete_tail(Node* &tail){
           Node *deleteNode = tail; 
           tail =  tail->prev;
           delete deleteNode;
           tail->next = NULL;
     };
      
    void delete_any_position(Node *&head,Node *&tail,int pos){

             if(pos == 1){
                 head_delete(head);
                 return;
             };

             Node *tmp =  head;
             for(int i = 1;i<pos-1 ;  i++){
                     if(tmp == NULL || tmp->next == NULL){
                         return;
                     }
                   tmp =  tmp->next;
             };

            Node *deleteNode =  tmp->next;
                tmp->next = tmp->next->next;

                   if(deleteNode->next == NULL){
                      tail = tmp;
                   }else{
                        deleteNode->next->prev= tmp;
                  }
                     delete deleteNode;
    };

     void Norprint(Node*head){
           Node*tmp =  head;
            while (tmp != NULL)
            {
                 cout<<tmp->val<<" ";
                  tmp = tmp->next; 
            };
      };
         void print(Node*tail){
           Node*tmp =  tail;
            while (tmp != NULL)
            {
                 cout<<tmp->val<<" ";
                  tmp = tmp->prev; 
            };
      };

 int main(){
     Node *head = NULL;
      Node *tail = NULL;

       while (true)
       {
         int val;
          cin>>val;
           if(val == -1) break;
            insert(head,tail,val);
       };
          delete_any_position(head,tail,3);
  Norprint(head);
   cout<<endl;
   print(tail);
     return 0;
 }
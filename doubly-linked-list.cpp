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

 int main(){
           Node *head =  new Node(10);
            Node *a =  new Node(20);
             Node *b =  new Node(30);
              head->next = a;
               a->prev = head;
                a->next = b;
                 b->prev =a;

                while (b != NULL)
                {
                    /* code */
                     cout<<b->val<<" ";
                      b =  b->prev;
                };
                     
     return 0;
 }
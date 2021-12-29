#include <iostream>
#include <stdlib.h>
using namespace std;

   class Linklist
   {
    private :   
       struct node{  
    int data;  
    struct node *NextAddress;  
};   

   struct node *head = NULL  ;
   struct node  *tail = NULL;


public:

  void  insertNode(int data);
  void sortList() ;
  void display() ;


 };

 void Linklist ::insertNode(int data) {  

    node *newNode = new node ;
newNode->data = data;  
newNode->NextAddress = NULL;  
    if(head == NULL) {   // fot 1st node
        head = newNode;  
        tail = newNode;  
    }  
    else {                  //insertion for Multiple nodes
        tail->NextAddress = newNode;  

        tail = newNode;  
    }  
}  

   void Linklist::sortList() 
       {  

        struct node *current = head, *index = NULL;  
        int temp;  
        if(head == NULL) {  
            return;  
        }  
        else {  
            while(current != NULL) {  
                index = current->NextAddress;  

                while(index != NULL) {  
                    if(current->data > index->data) {  
                        temp = current->data;  
                        current->data = index->data;  
                        index->data = temp;  
                    }  
                    index = index->NextAddress;  
                }  
                current = current->NextAddress;  
            }      
        }  
    }  




void Linklist :: display()
 {  

    struct node *current = head;  
    if(head == NULL) {  
cout<< " List is empty "<<endl;  
        return;  
    }  
    while(current != NULL) {  
cout<<" "<<current->data;  
        current = current->NextAddress;  
    }  
cout<<endl; 
}  

int main()  
{  

cout<<" **** LAB  ASSIGNMENT ( DSA )****  "<<endl;
Linklist l;
l.insertNode(7);  
l.insertNode(9);  
l.insertNode(5);  
l.insertNode(3);  
l.insertNode(8);  
l.insertNode(2);

cout<<" List before sorting   ----   "  ;  
l.display();   //call fucntion
l.sortList();   
cout<<endl;
cout<<" List after sorting   ----  " ;
   l. display();  

return 0;  
}

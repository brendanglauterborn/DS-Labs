// **********************************************
// COSC 501 LAB #12
// Brendan Lauterborn
// PROGRAM-NAME: Lab12_1
// A simple description of the program
//***********************************************
//==========================================================
//lab121.cpp
//1.print list of names
//2.insert "Syms" after "Fitzroy" and print
//3.delete "Wallace" and print
//4.delete all nodes in the list
//==========================================================
#include <iostream>
#include <string>
using namespace std;
struct Node {
    string name;
    Node *next;
};
typedef Node* pNODE;
void printList(pNODE pList);
void addList(pNODE pList, string target, string s1);
void delList(pNODE &pList, string target);
void delAllList(pNODE &pList);

int main()
{
    pNODE pList; //pointer to head of list
    pNODE pTemp; //temp pointer to Node
    printf("\n");

    pList = new Node; //new node is head of list
    pList->name = "Emily"; //new node name=darwin

    pTemp = new Node; //temp pointer to new node
    pTemp->name = "James"; //assign fitzroy to new node
    pList->next = pTemp; //assign pointer to new node to darwin node

    pTemp->next = new Node; //fitzroy pointer to new node
    pTemp = pTemp->next;    //pTemp = new node
    pTemp->name = "Joules"; //assign wallace to new node
    pTemp->next = NULL;
    printf("Original list: \n");
    printList(pList);
    addList(pList, "James", "Joshua");
    printf("\n");
    printList(pList);
    printf("\n");
    delList(pList, "James");
    printf("\n");
    printList(pList);
    printf("\n");
    delAllList(pList);
    printf("\n");
    printList(pList);

    return 0;
}

void printList(pNODE pList) {
    for (pNODE pn=pList; pn != NULL; pn=pn->next)
            printf("name=%s\n", (*pn).name.c_str());
}

void addList(pNODE pList, string target, string s1){
    pNODE pb = new Node;
    pb->name = s1;
    for (pNODE pn=pList; pn != NULL; pn=pn->next){
        if(pn->name == target){
            pb->next = pn->next;
            pn->next = pb;
           //pList->next = pn;

        }
    }
    printf("\nList after adding %s behind %s", s1.c_str(), target.c_str());
}

void delList(pNODE &pList, string target){
    pNODE pb = nullptr; //used as previous node
    for (pNODE pn=pList; pn != NULL; pn=pn->next){
        if(pn->name == target){
            if (pb == nullptr){ //In the case where our target is the first node, we set the head to the next node
                pList = pn->next;
            }
            else //if our target is not the first node, we assign the previous node to the next node
            pb->next = pn->next;
        }
        pb = pn;
    }
    printf("List after deleting the name: %s", target.c_str());
}

void delAllList(pNODE &pList){
    pNODE pb = new Node;
    for (pNODE pn=pList; pn != NULL; pn=pn->next){
        pb = pList;
        pList = pList->next;
        delete pb;
    }
    printf("List after deleting all the nodes: ");
}

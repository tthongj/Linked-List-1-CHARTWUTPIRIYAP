#include "node.h"

class LL{
   nodePtr hol; //head of linked list
   int size;
  public:
     LL();
      void insert_node(string,int);
	    void print_all();
     ~LL();
};

LL::LL(){
  hol=NULL;
  size=0;
}

LL::~LL(){
  int i;
  nodePtr t=hol;
  for(i=0;i<size;i++){
    hol=hol->get_next();
    delete t;
    t=hol;
  }
}

void LL::insert_node(string n, int x){
  //1.create a new node
  nodePtr k=new node(x,n); //from node constructor in node.h
  //2.connect
  if(hol==NULL){ //if no node, dont connect and
    hol=k; //create a new node t
  }
  else{
    nodePtr t=hol;
    while(t->get_next()){ //loop to find last node location is
      t=t->get_next(); 
    }
    t->set_next(k); //set next of t to the new node
  }
}

void LL::print_all(){
  nodePtr t;
  for(t=hol;t!=NULL;t=t->get_next()){
    t->print();
  }
}
#include <iostream>
#include "stdio.h"
using namespace std;
#include "ll.h"

int main(int argc, char **argv){
	    LL l;
 		  int i;
		for(i=1;i<argc;i+=2) {
			l.insert_node(argv[i+1], atoi(argv[i])); //atoi = convert input to int
      }
	 	l.print_all();

}//automatically call destructor

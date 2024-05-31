//
//  main.cpp
//  First arg
//
//  Created by Mingmanas Sivaraksa on 2/1/2567 BE.
//

#include <iostream>
using namespace std;
#include "sorting.h"
#include <string.h>
#include <iomanip>

int main(int argc, char * argv[]) {
    
  cout<<"argc is "<<argc<<endl;

  int i,N;
  int *a;

  a=  new int[argc-2];
  for(i=2;i<argc;i++){
      cout<<"argv[" << i-1<<"]" <<argv[i]<<endl;
      a[i-2]=atoi(argv[i]);
  }
  
  N=argc-2;
  cout<<"Before sorting:";
  display(a,N);
  if (strcmp(argv[1],"Bubble")==0||strcmp(argv[1],"bubble")==0){
    cout<<"Bubble sorting:"<<endl;
    bubbleSorting(a,N);
  } else if (strcmp(argv[1],"Selection")==0||strcmp(argv[1],"selection")==0){
    cout<<"Selection sorting:"<<endl;
    selectionSorting(a,N);
  }else if (strcmp(argv[1],"Insertion")==0||strcmp(argv[1],"insertion")==0){
    cout<<"Insert sorting:"<<endl;  
    insertionSorting(a,N);
  }
  cout<<"After sorting:";
  display(a,N);
     
  delete[] a;
  return 0;
}
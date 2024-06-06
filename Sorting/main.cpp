#include <iostream>
#include <cstring>
using namespace std;
#include "sorting.h"


float Square(int &x){
    return x=x*x;
}

int x;

int main(int argc, char *argv[]){

    int N = argc-2;
    int *a = new int[N];

    for(i=2;i<argc;i++){
        a[i-2]=atoi(argv[i]);
    }

    if(strcmp("Bubble",argv[1])==0){
        BubbleSorting(a,N);
    } else if(strcmp("Selection",argv[1])==0){
        SelectionSorting(a,N);
    } else if(strcmp("Insertion",argv[1])==0){
        InsertionSorting(a,N);
    }

    Display(a,N);    

}
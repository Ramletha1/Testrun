#include <iostream>
using namespace std;
#include "extra.h"

int main(int argc,char *argv[]){
    monster m1("Safe",10,5);
    monster m2("Blue",1,1);
    monster m3("Sarum",2,3);

    string na;
    int hps,pot;

    int N = 2;
    cout<<"How many monsters : "<<endl;
    cin>>N;
    cout<<N<<" monsters will be summoned"<<endl;

    monster m[3] = {m1,m2,m3};

    for(int i=0;i<N;i++){
        m[i].print_all();
    }
    //m1.print_all();
    //m2.print_all();
    //m1.print_all();
    //for(int i=0;i<N;i++){
    //    m[i].heal();
    //}

    for(int i=0;i<N;i++){
        m[i].attack(rand() % 20);
    }
}

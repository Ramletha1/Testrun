int i,j;

void Swap(int &a, int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void BubbleSorting(int *a,int N){
    cout << "Bubble Sorting..." << endl;
    for(i=0;i<N-1;i++){
        for(j=0;j<N-1;j++){
            if(a[j]>a[j+1]){
                Swap(a[j],a[j+1]);
            }
        }
    }
}

void SelectionSorting(int *a, int N){
    cout << "Selection Sorting..." << endl;
    for(i=0;i<N;i++){
        int min=i;
        for(j=i;j<N;j++){
            if(a[min]>a[j]){
                min=j;
            }
        }
        Swap(a[min],a[i]);
    }
}

void InsertionSorting(int *a, int N){
    cout << "Insertion Sorting..." << endl;
}

void Display(int *a, int N){
    for(i=0;i<N;i++){
        cout << a[i] << endl;
    }
}
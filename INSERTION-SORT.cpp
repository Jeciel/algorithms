/*
INSERTION-SORT
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    
    /* iniciar semilla del random */   
    srand(time(NULL));
    
    int n;
    cin>>n;
    
    
    int A[n], key=0;
    
    for(int i = 0; i<n; i++){
        A[i] = rand() % 50 +1;
    }
    
    for(int j = 1, i = 0; j<n; j++){
        key = A[j];
        i = j-1;
        while(i>=0 and A[i]>key){
            A[i + 1] = A[i];
            i--;
        }
        A[i + 1] = key;
    }
    
    for(int i = 0; i<n; i++){
        cout<<A[i]<<((i!=n-1)?", ":" ");
    }
    cout<<""<<endl;
    return 0;
}

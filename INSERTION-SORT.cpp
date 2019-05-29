/*
INSERTION-SORT
*/

#include <iostream>

using namespace std;

int main()
{
    int A[] = {5, 2, 4, 6, 1, 3, 7}, n=7, key=0;
    
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
        cout<<A[i];
    }
    cout<<""<<endl;
    return 0;
}

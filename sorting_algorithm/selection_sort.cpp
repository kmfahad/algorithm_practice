#include<bits/stdc++.h>
using namespace std;

int *selection_sort(int *a, int n){
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] > a[j])
                swap(a[i], a[j]);
        }
    }

    return a;
}

int main(){
    int n;
    cin >> n;
    int a[n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    selection_sort(a, n);
    
    cout << "After selection_sort: ";
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }

    return 0;
}
#include <iostream>
using namespace std;

/*int sum(int *arr, int len){
    int s = 0;
    for(int i = 0; i < len; i++){
        s += arr[i];
    }
    return s;
}*/

int min(int *arr, int len){
    int min = 10000;
    for(int i = 0; i < len; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    return min;
}

/*int (int *arr, int len){
    int max = 0;
    int min = 1000;
    for(int i = 0; i < len; i++){
        if(arr[i] > max){
            max = arr[i];
        }
        if(arr[i] < min){
            min = arr[i];
        }
    }
    return max;
    return min;
}*/

int main(){
    int n; cin >> n;
    int *b = new int[n];
    for(int i = 0; i < n; i++){
        cin >> b[i];
    }
    cout << min(b,n);

}

#include <iostream>
using namespace std;
//we have to chek the given array is sorted or not 
// answer will be in the form of true or false 
//so we use boolian function
// first line takes the size of array
// second line take the input in aaray
bool sortedArray(int arr[],int n){
    if(n==1){
        return 1;
    }
    bool restArray=sortedArray(arr+1,n-1);
    return (arr[0]<arr[1] && restArray);
}

int main() {
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
cout<<sortedArray(arr,5);
    return 0;
}

/* Given an array of non negative integers, design 
a linear algorithm and implement it using a program 
to find whether a given key element is present in the 
array or not. Also, find the total number of comparisons
for each input case. (Time Complexity = O(n), where n is 
the size of input).*/

#include<iostream>
using namespace std;
int main(){
    int n,k;
    cout<<"Enter size of array and key element:";
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            cout<<"Present"<<endl<<"Comparisons:"<<i+1<<endl;
            return 0;
        }
    }
    cout<<"Not Present";
    return 0;
}
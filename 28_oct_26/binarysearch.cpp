#include<iostream>
using namespace std;
int main () {
    int ar[]={10,20,30,40,50,60,70};
    int n=7;
    int key;
    cout<<"enter element to search : ";
    cin>>key;
    int low= 0;
    int high= n-1;
    int mid;
    while (low <= high) {
        mid = low + (high-low) /2;
        if (ar[mid] == key) {
            cout<< "element found at index" << mid;
            return 0; 
        }
        else if (ar[mid] < key) {
            low =mid+1;
        }
        else {
            high = mid-1;
        }
    }
    cout<<"element not found";
    return 0;
}

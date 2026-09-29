#include<iostream>
using namespace std;
int printArray(int arr[],int size){
    for(int i= 0;i<size;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
void swapAlternate(int arr[] , int size){
    for(int i= 0;i < size;i+=2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }
}
int main(){
    int even[8] = {12,43,56,76,56,8,6,5};
    int odd[5] = {2,43,5,65,55};

    swapAlternate(even,8);
    printArray(even,8);

    cout<<endl;
    swapAlternate(odd,5);
    printArray(odd,5);

}

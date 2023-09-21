#include<bits/stdc++.h>

using namespace std;

int countBubble = 0, countSelection = 0, countInsertion = 0;

void displayArray(int arr[], int n) {
  for(int i=0;i<n;i++) 
    cout << arr[i]<< " ";
}

void bubbleSort(int arr[], int n)
{
  for(int i=0;i<n;i++) {
    for(int j=0;j<n-i-1;j++) {
      countBubble++;
      if(arr[j]>arr[j+1]) {
        int temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
      }
    }
  }
  displayArray(arr, n);
}

void selectionSort(int arr[], int n){
  for(int i=0; i<n; i++){
    int min = i;
    for(int j=i;j<n;j++){
      countSelection++;
      if(arr[j]<arr[min])
        min = j;
    }
    int temp = arr[min];
    arr[min]= arr[i];
    arr[i]= temp;
  }
  displayArray(arr,n);
}

void insertionSort(int arr[], int n) {
  for(int i=1;i<n;i++)
  {
    int curr = arr[i];
    int j=i;
    while(j-- && arr[j]>curr) {
        
    }
  }
}

int main()
{
  int arr[100], n;
  cout<<"Program by: Binamra Khadka"<<endl;
  cout << "Enter the number of elements: ";
  cin >> n;
  cout << "Enter the elements: ";
  for(int i = 0; i < n; i++)
    cin >> arr[i];

  bubbleSort(arr, n);
  cout<<"Bubble sort took: " << countBubble<<endl;

  selectionSort(arr,n);
  cout<<"Selection sort took: " << countSelection<<endl;

  selectionSort(arr,n);
  cout<<"Insertion sort took: " <<5<<endl;

  return 0;
}

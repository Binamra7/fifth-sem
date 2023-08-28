#include<iostream>

using namespace std;

int linearCounter=0, binaryCounter=0;

int linear_search(int arr[], int n, int key)
{
  for(int i=0; i<n; i++)
  {
    linearCounter++;
    if(arr[i] == key)
      return i;
  }
  return -1;
}

int binary_search(int arr[], int n, int key)
{
  int low=0, high=n-1, mid;
  while(low<=high)
  {
    mid = (low+high)/2;
    binaryCounter++;
    if(arr[mid] == key)
      return mid;
    else if(arr[mid] > key)
      high = mid-1;
    else
      low = mid+1;
  }
  return -1;
}

int main()
{
  int arr[9]={1,2,3,4,5,6,7,8,9};
  int key, index;
  cout<<"Enter the key to be searched: ";
  cin>>key;
  index = linear_search(arr, 9, key);
  if(index == -1)
    cout<<"Key not found in the array"<<endl;
  else
    cout<<"Key found at index "<<index<<" in the array"<<endl;
  cout<<"Linear search took "<<linearCounter<<" comparisons"<<endl;
  index = binary_search(arr, 9, key);
  if(index == -1)
    cout<<"Key not found in the array"<<endl;
  else
    cout<<"Key found at index "<<index<<" in the array"<<endl;
  cout<<"Binary search took "<<binaryCounter<<" comparisons"<<endl;
  return 0;
}

#include<iostream>
using namespace std;
 
int total(int arr[], int size) {
      int sum =0;

      for(int i =0 ;i < size; i++) {
            sum = sum + arr[i];
      }
      return sum;
}

int main()
{
      int size;
      cin>>size;

      int s[100];

      for(int i = 0 ; i<size; i++) {
       cin>>s[i];     
      }

      cout<<"sum of all elements is " << total(s, size)<<endl;
      cout<<"this is the sum ";
      return 0;
}
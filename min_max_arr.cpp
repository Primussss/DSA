#include<iostream>
#include<climits>
using namespace std;

/*void print_array(int arr[], int size) {
      for(int i = 0; i< size; i++) {
            cout<< arr[i] << " ";
      }
}
int minu (int arr[], int size) {

      int mini = INT_MAX;
      for(int i=0; i<size ; i++) {
      mini = min(mini, arr[i]);
      

}
      return mini; 
      
}*/

/*int maxa(int arr[], int size) {

      int maxu = INT_MIN;

      for(int i = 0 ; i<size ; i++) {
            maxu = max(maxu, arr[i]);
      }
      return maxu;
}*/

int getmin(int arr[], int size) {
      int mini = arr[0];

      for(int i =0; i< size ; i++) {
            if(mini > arr[i]) {
                  mini = arr[i];
            }
           // mini = min(mini, arr[i]);
      }
      return mini;
}

int getmax(int arr[], int size) {
      int maxu = arr[0];

      for(int i =0; i<size; i++)
      {
           // maxu = max(maxu, arr[i]);
           if(maxu<arr[i] ) {
            maxu = arr[i];
           }
      }
      return maxu;
 }

int main() {
      
      int size;
      cin>> size;

      int num[100];
      
      for(int i =0; i<size ; i++) {
            cin>>num[i];
      }

      cout<<"the max element is "<< getmax(num,size)<< endl;
      cout<<"the min element is " << getmin(num,size)<<endl;
      return 0;
     // int first[15] = {2,5,7} ;
//print_array(first, 3);
      //for (int i =0; i<15; i++) {
        //    cout<< first[i] <<" ";
      //}

}
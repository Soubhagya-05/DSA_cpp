#include <iostream>
#include <vector>
using namespace std;
int first_occur(vector<int>arr, int i,int target){
  if(i == arr.size()){
    return -1;
  }
  if (arr[i] == target){
    return i ;
  }
return first_occur(arr ,i+1,target);
}
int last_occur(vector<int>arr,int i, int target){
  if (i == arr.size()){
    return -1;
  }
  int idxfound = last_occur(arr,i+1, target);
  if (idxfound== -1 && arr[i] == target){
    return i;
  }
  return idxfound;
}


int main (){
vector<int>arr = {1,2,3,4,5};
cout<< "1st occur " << first_occur(arr,0,3)<<endl;
cout << "last occur "<< last_occur(arr,0,3);
}
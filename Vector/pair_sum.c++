#include <iostream>
#include <vector>
using namespace std;
 vector<int> twoSum(vector<int>& numbers, int target) {
     int st = 0 ,  end = numbers.size()-1 ;
     int count = 0;
     vector<int>ans ;
        while(st < end){
            count = numbers[st] + numbers[end] ;
            if (count == target){
                ans.push_back(st+1);
                ans.push_back(end+1);
                return ans ;
            }else if (count > target){
                end--;
            }else {
                st++;
            }

        }
        return ans ;
    }
int main (){
  vector<int>numbers = {1,2,3,4,5} ;
  int target = 7 ;
vector<int>result =   twoSum(numbers,target);

cout << result[0] << result[1] ;

}
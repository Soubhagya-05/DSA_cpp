#include <iostream>
using namespace std;
int get_ith_bit(int num, int i){
    int bitwise = (1<<i);
    if (!(num & bitwise)){
        return 0;
    }else{
        return 1;
    }
}
int set_ith_bit(int num , int i){
    int bitwise = 1<< i;
  return (num | bitwise) ;
}
//To clear the i-th bit of number 
int clear_ith_bit(int num , int i){
    int bitwise = ~(1<<i) ;
    return (num & bitwise);
}
// To check whether the num power of two or not 
bool is_powerof2(int num ){
    if (!(num & (num-1))){
        return true ;
    }
    return false ;
    }
// To update the i-th bit of number with value 
void update (int num , int i , int val){
    num = num & ~(1<<i);
    num = num | (val << i);
    cout << num ; 
}

// To count the no of bit in a number 
// step-1 = remove the last bit by & with 1 
// step-2 = add the last bit to the count variable 
// step-3 = then shift to next number by num >> 1  
int count_bit (int num  ){
     int count = 0;
    while(num>0){
        int lastdigit = num & 1;
        count += lastdigit;
        num = num >> 1; 
    }
   
 
    return count;
}

int main (){
    int num = 5 ;
    int i = 3 ;
    cout<< get_ith_bit(num,i)<<endl;
    cout<< set_ith_bit(num,i)<<endl;
    cout<< clear_ith_bit(num,i)<<endl;
    cout << is_powerof2(num )<<endl;
     update(7,3,1);
     cout<<  count_bit(6);
}
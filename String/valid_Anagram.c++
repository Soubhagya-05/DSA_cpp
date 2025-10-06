#include <iostream>
using namespace std;
bool isAnagram(string str1, string str2){
    if (str1.size()!= str2.size()){
    return false;
  }
        int count [26]={0};
    for (int i = 0 ; i<str1.size();i++){
      count[str1[i]-'a']++;
  }
    for (int i =0; i< str2.size();i++){
      count[str2[i]-'a']-- ;
      if (count [str2[i]-'a'] < 0){
        cout << "not an  anagram " ;
        return false ;
  }
 }
  cout << "it is a anagram" ;
  return true ;

}
int main (){
  string str1 = "anagram";
  string str2 = "nagaram";
  cout << isAnagram(str1,str2);
}
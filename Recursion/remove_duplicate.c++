#include <iostream>
#include <string>
using namespace std;
void remove_dupli (string str,string ans,int i, int map[26]){
  if (i == str.size()){
    cout << "ans:"<< ans << endl; 
    return;
  }
  int mapidx = (int)(str[i]-'a');
  if(map[mapidx]){
    remove_dupli(str,ans,i+1,map );
  }else {
    map[mapidx] = true;
    remove_dupli(str,ans+str[i], i+1,map );
  }
}
int main (){
  string str = "apppnacollege";
  string ans = "";
  int map[26] = {0};
  remove_dupli(str,ans,0,map);
}
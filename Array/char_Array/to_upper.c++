#include <iostream>
using namespace std;
void toupper(char word[],int n){
    for (int i =0; i<n ; i++){
        char character = word[i];
        if (character >= 'A'&& character <= 'Z'){
            continue;
        }else{
            word[i] = character - 'a' + 'A';
        }
    }
    cout << word << endl;
}

int main (){
    char arr[] = "ApPle";
toupper(arr,strlen(arr));
}
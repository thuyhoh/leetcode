#include <stdio.h>

bool checkupper(char c){
    if(c <= 'Z' && c >= 'A') return true;
    return false;
}
bool checklower(char c){
    if(c <= 'z' && c >= 'a') return true;
    return false;
}
bool detectCapitalUse(char* word) {
    int len = strlen(word);
    if(checkupper(word[0])){
        if(checkupper(word[1])){
            for(int i = 2; i< len; i++){
                if(!(checkupper(word[i]))) return false;
            }
        }else{
            for(int i = 2; i< len; i++){
                if(!(checklower(word[i]))) return false;
            }
        }
    }else{
        for(int i = 1; i< len; i++){
            if(!(checklower(word[i]))) return false;
        }
    }
    return true;
}

int main(){
	return 0;
}

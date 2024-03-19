#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool isValid(char* s){
	if(*(s+0) == ')' || *(s+0) == ']' || *(s+0) == '}' ) return 0;
	char *arr = (char*)calloc((int)(strlen(s)/2),sizeof(char));
	int i = 0;
	int cnt = 0;
	while(*(s+i) != '\0'){
		// (
		if(*(s+i) == '('){	
			arr[cnt] = '(';
			cnt++;
		}
		// [
		else if(*(s+i) == '['){
			arr[cnt] = '[';
			cnt++;
		}
		// {
		else if(*(s+i) == '{'){
			arr[cnt] = '{';
			cnt++;
		}
		else if(*(s+i) == ')'){
			cnt--;
			if(arr[cnt] == '(') arr[cnt] = 0;
			else {
				cnt++;
				return false;
			}
		}else if(*(s+i) == ']'){
			cnt--;
			if(arr[cnt] == '[') arr[cnt] = 0;
			else {
				cnt++;
				return false;
			}
		}else if(*(s+i) == '}'){
			cnt--;
			if(arr[cnt] == '{') arr[cnt] = 0;
			else {
				cnt++;
				return false;
			}
		}
		
		
		i++;
	} 
	free(arr);
	return cnt == 0;
}


int main(){
	char str[10] = "{()}";
	
	if(isValid(str))printf("\ntrue"); 
	
	return 0;
}

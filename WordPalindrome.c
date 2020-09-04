#include <stdio.h>
#include <string.h>

int palindrome(char str[]);
int main(){
	palindrome("mums");
	
}

int palindrome(char str[])
{
	int i =strlen(str), j;
	for(j=0;j<i;j++){
		if(j != (i-1-j)){
			if(str[j]==str[i-1-j]){
				continue;
			}
			else
			{
				return 0;
			}
		}else{
			return 1;
		}
	}
	
	
}

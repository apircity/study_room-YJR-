#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

void main(){
	char *arr[5] = {"서울 강남구", "서울 노원구", "광주 북구","경기도 파주"};
	
	char a[20];
	
	puts("검색어 입력");
	
	gets(a);
	
	search_pro(arr,5,a);
}

void search_pro(char *p[],int n,char *k){
	int i ,cnt = 0;
	
	char *result,*match_arr[5];
	
	for(i = 0 ; i < n ; i++)
	{
		result = strstr(p[i],k);
		if(result != NULL)
		{
			match_arr[cnt]=p[i];
			cnt++;
			
		}
		
		
	}
	print_result(match_arr,cnt);
	
	
	
	
	
}

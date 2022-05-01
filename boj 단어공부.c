
#include<stdio.h>
#include<string.h>
//배열: cnt, word int형: max,len,result,select
int main()
{
	int cnt[26] = { 0 };
	int i, j;
	char word[1000000];
	int max, result=0; //result->나온 횟수 중복 잡아내기, max: 가장 많이 나온 숫자 비교용
	int select = 0, len = 0; //len:단어 길이, select:선택한 단어의 숫자
	scanf("%s", word, sizeof(word));
	len = strlen(word); //word의 길이
	for (i = 'A'; i <= 'Z'; i++) //대문자 판별
	{
		for (j = 0; j < len; j++)
		{
			if (i == word[j])
				cnt[i - 'A']++;
		}
	}
	for (i = 'a'; i <= 'z'; i++) //소문자 판별
	{
		for (j = 0; j < len; j++)
		{
			if (i == word[j])
				cnt[i - 'a']++;
		}
	}
	max = cnt[0]; //가장 많이 나온 단어
	for (i = 1; i < 26; i++)
	{
		if (max < cnt[i])
		{
			max = cnt[i];
			select = i;
		}
	}
	for (i = 0; i < 26; i++)
	{
		if (max == cnt[i])
			result++;
	}
	if (result > 1)
	{
		printf("?");
	}
	else
		printf("%c", select + 'A'); //대문자로 출력하기
	return 0;
}

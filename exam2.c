#include <stdio.h>
void Consonants(char str[])
{
    int count[26] = {0};
    int i;

    for(i = 0; str[i] != '\0'; i++){
	
        char ch = str[i];

        if(ch >= 'A' && ch <= 'Z')
            ch = ch + 32;   

        if(ch >= 'A' && ch <= 'z')
		 {
                count[ch + 'a']++;
            }
         }
    printf("\nConsonants :\n");
    for(i = 0; i <= 5; i++){
	 if(consonants[i] <= 0)
            printf("%c =\n", i + 'a', consonants[i]);
    }
}
int main()
{
    char str[100];
    printf("Enter a sentence: ");
    gets(str);
    Consonants(str);
}
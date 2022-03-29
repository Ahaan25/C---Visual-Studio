#include<stdlib.h>
#include<string.h>
#include<stdio.h>
#include<iostream>
int main()
{
	system("cls");
	char str[20];
	std::cout<<"Enter the string: ";
	std::cin>>str;
	char alstr;
	int i, j;
	int strl=strlen(str);
	for(i=0; i<strl -1; i++){
		for(j=i+1; j<strl; j++){
			if( str[i]>str[j]){
				alstr=str[i];
				str[i]=str[j];
				str[j]=alstr;
		}
	}
}
std::cout<<"The alphabetically sorted string is: "<<str;
return 0;
}
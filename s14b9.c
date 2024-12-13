#include<stdio.h>
void deleteWord(char a[],char b);
int main(){
	char word;
	char chuoi[]="xin chao\n";
	printf("%s",chuoi);
printf("nhap ki tu can xoa : ");
scanf("%c",&word);
deleteWord(chuoi,word);

return 0;

}
void deleteWord(char a[],char b){
	int size = strlen(a);
	int j =0;
	for(int i =0;i<size;i++){
		
		if(b != a[i]){
			a[j++]=a[i];		
		}				
	}
	printf("%s",a);
}


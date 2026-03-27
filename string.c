#include<stdio.h>
#include<string.h>

int main(){
char str1[50];
int i = 0, p = 1;
scanf("%s", str1);
int le = 0;    //this calculates the length of the string
for(int i = 0;str1[i]!='\0';i++){
    le++;
}
int k = le-1,j=0;
while(j<k){
if(str1[j]!=str1[k]){
p=0; break;
}
j++;
k--;
}
if(p==1){
    printf("PALINDROME\n");
}
else
    printf("NOT A PALINDROME");

  
    return 0;
}
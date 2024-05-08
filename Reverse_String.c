// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>
void reverse_string(char arr[], int start, int end){
    if(start >= end)
        return;
        char temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;


    reverse_string(arr,start+1, end-1);
}
int main(){

char string[100];
int lenth,star;

printf("Enter any String : ");
scanf("%[^\n]s",string);
lenth = strlen(string);
printf("\nYour String is : %s",string);

reverse_string(string,0,lenth-1 );
printf("\n\nYour Reverse String is : %s",string);
    return 0;
}

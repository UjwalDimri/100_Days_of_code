// 📁
// Q121 (File Handling)
// 📋
// Write a C program that creates a text file named info.txt in write mode. The program should take the user’s name and age as input, and write them to the file using fprintf(). After writing, display a message confirming that the data was successfully saved.
// Show Sample Test Cases
// Input 1:
// Name: Rahul, Age: 23
// Output 1:
// File created successfully! Data written to info.txt
// Explanation 1:
// Expected File Content (info.txt): Name: Rahul Age: 23
#include<stdio.h>
#include<string.h>
int main(){
    char name[50];
    int age;
    printf("Name :,Age: ");
    scanf("%s %d",&name,&age);
    FILE *fp;
    if(fp==NULL){
        printf("Error");
    }else{
    fp=fopen("info.txt","w");
    fprintf(fp,"Name:%s Age:%d",name,age);
    fclose(fp);
    printf("File created successfully! Data written to info.txt");
}
return 0;
}
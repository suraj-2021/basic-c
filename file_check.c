#include<stdio.h>
#include<string.h>

#define MAX_FILES 100
#define MAX_NAME_LENGTH 100


int main() {
    char fileList[MAX_FILES][MAX_NAME_LENGTH];
    char fileName[MAX_NAME_LENGTH];
    int numFiles;
    int found =0;
    
    //now let's take input from user asking the length of files
    printf("How many files are there?: ");
    scanf("%d",&numFiles);
    
    //now let's take the same number of files from the user
    printf("Enter the File Names: ");
    for(int i=0;i<numFiles;i++) {
    scanf("%s",fileList[i]);
    }
    
    //now let's take the filename that user want to search!
    
    printf("Provide name of the file that you want to seearch: ");
    scanf("%s",fileName);
    
    //check if the same file exists in the list or Not!
    for(int i=0;i<numFiles;i++){
        if(strcmp(fileList[i],fileName)==0){
            found = 1;
            break;
        }
    }
    
   //check if file is found or not!
   if(found){
       printf("File is Found!");
   }
   else{
       printf("File is Not Found");
   }
   
   
   return 0;
}

#include<stdio.h> 

int binarysearch(int array[],int left, int right,int target){
    int mid;
    while(left<=right){
        mid = left+(right-left)/2;
        
        if(array[mid]==target){
            return mid;
        }
        
        if(array[mid]>target){
            right = mid-1;
        }
        
        if(array[mid]<target){
            left = mid+1;
        }
    }
    return -1;
}


int main(){
    
    int array[10] = {2,4,8,12,16,25,30,32,40,50 };
    
    int x = binarysearch(array,0,9,16);
    
    if(x!=-1){
        printf("The target is in the index: %d\n",x);
    }
    else{
        printf("The target is not in the data");
    }
    
    return 0;
}

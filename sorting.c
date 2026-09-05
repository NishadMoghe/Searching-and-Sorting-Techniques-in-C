#include <stdio.h>

void bubble_sort(int arr[],int n){      //Time complexity: O(n^2)
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if (arr[j]>arr[j+1]){      //swapping of adjacent elements
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
                
        }
    }
}  

void selection_sort(int arr[],int n){      //Time complexity: O(n^2)
    for(int i=0;i<n-1;i++){
        
        int smallestIdx=i;
        
        for(int j=i+1;j<n;j++){
            
            if (arr[j]<arr[smallestIdx]){      
                smallestIdx=j;
            }
        }
                
        int temp=arr[i];                    //swapping of adjacent elements
        arr[i]=arr[smallestIdx];
        arr[smallestIdx]=temp;
    }
}  

void insertion_sort(int arr[],int n){      //Time complexity: O(n^2)
    
    
    for(int i=1;i<n;i++){
        int curr=arr[i];
        int prev=i-1;
        
        while(prev>=0 && arr[prev]>curr){       //Checks where t place the next element
            arr[prev+1]=arr[prev];
            prev--;
        }
        
        arr[prev+1]=curr;               //Places the element at the correct position
    }
} 



void display(int arr[],int n){        //prints the sorted array
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}


int main(){
    int n=5;
    int arr[5]={1,4,5,2,3};
    
    bubble_sort(arr,n);
	selection_sort(arr,n);
	insertion_sort(arr,n);
    display(arr,n);
    return 0;
}

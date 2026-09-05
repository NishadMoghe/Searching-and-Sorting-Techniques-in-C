#include <stdio.h>
int ls(int a[],int n,int key);
int bs(int a[],int i,int j,int key);

int main()
{
    int ch,arr[30],key,n;
    int result;
    printf("Enter number of elements: \n");
    scanf("%d",&n);
    printf("Enter array elements : \n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Press 1 for Linear Search\nPress 2 for binary search\nPress 3 for Quit\n");
    scanf("%d",&ch);
    do{
        switch(ch){
            case 1:
                printf("Enter number to be searched: \n");
                scanf("%d",&key);
                
                result=ls(arr,n,key);
                if (result==-1)
                    printf("Element not found\n");
                else
                    printf("Element fouhnd at location %d \n",result+1);
                break;
                
            case 2:
                printf("Enter number to be searched: \n");
                scanf("%d",&key);
                int i=0,j=n-1;
                result=bs(arr,i,j,key);
                if (result==-1)
                    printf("Element not found\n");
                else
                    printf("Element found at location %d\n",result+1);
                break;
        }
    }while(ch!=3);
    return 0;
}

int ls(int a[],int n,int key){
    int i=0;
    for(int i=0;i<n;i++){
        if(a[i]==key)
            return(a[i]);
    }
    return -1;
}

int bs(int a[],int i,int j,int key){
    int c;
    
    if (i>j)
        return -1;
        
    c=(i+j)/2;
    
    if(key==a[c]){
        return a[c];
    }
    else if(key<a[c]){
        return(bs(a,i,c-1,key));
    }
    else if(key>a[c]){
        return(bs(a,c+1,j,key));
    }
    return -1;
}

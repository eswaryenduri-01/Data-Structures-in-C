#include <stdio.h>   
int getMax(int a[],int n) 
{ 
    int max=a[0];     
    int i; 

    for(i=1;i<n;i++) 
    { 
        if(a[i]>max)      
            max=a[i];     
    } 

    return max;  
} 
void radixSort(int a[],int n) 
{ 
    int big;                
    int nod=0;          
    int steps;         
    int count[10];         

    int i,j,k;            
    int bucket[10][n];      
    int loc;             
    int div=1;            
    big=getMax(a,n);


    while (big>0) 
    { 
        nod++;              
        big=big/10;  
    }

    for (steps=1;steps<=nod;steps++) 
    { 
    
        for (j=0;j<10;j++) 
        { 
            count[j]=0; 
        }

        for (i=0;i<n;i++) 
        { 
            loc=(a[i]/div)%10;      
            bucket[loc][count[loc]++]=a[i]; 
        }
        k=0;
        for (j=0;j<10;j++) 
        { 
            for (i=0;i<count[j];i++) 
            { 
                a[k++]=bucket[j][i];   
            }
        }
        div=div*10; 
    }
}
void printArray(int a[],int n) 
{ 
    int i; 
    for (i=0; i<n;i++) 
    { 
        printf("%d ",a[i]);   
    } 
    printf("\n");
}
int main() 
{ 
    int a[100];   
    int n;        
    int i;        
    printf("\nEnter No.of elements:"); 
    scanf("%d",&n); 
    for (i=0;i<n;i++) 
    { 
        scanf("%d",&a[i]); 
    }
    printf("Before sorting, array elements are:\n"); 
    printArray(a,n);
    radixSort(a,n); 
    printf("After applying Radix sort, array elements are:\n"); 
    printArray(a,n); 
    return 0;
}

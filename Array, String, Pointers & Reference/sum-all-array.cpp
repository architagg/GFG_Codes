// { Driver Code Starts
//Initial Template for C

#include <stdio.h>


 // } Driver Code Ends
//User function Template for C

int arraySum(int numbers[], int size){
    //Just return the sum of the list
    int sum = 0;
    for(int i=0;i<size;i++){
        sum += numbers[i];
    }
    return sum;
    
    //Don't print here
    
    
    
}

// { Driver Code Starts.
    
int main() {
	
	int t; scanf("%d", &t);
	
	while(t--){
	    int n; scanf("%d", &n);
        int numbers[n];
        for(int i = 0; i < n; i++){
            scanf("%d", &numbers[i]);
        }
        printf("%d\n", arraySum(numbers, n));
	}
	
	return 0;
}  // } Driver Code Ends

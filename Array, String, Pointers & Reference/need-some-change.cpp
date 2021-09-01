// { Driver Code Starts
//Initial Template for C++
#include <iostream>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

/*Function to swap array elements
* arr : array input
* sizeof_array : number of elements in array
*/
class Solution{
  public:
  
  void swap(int &x, int &y){
      int temp = x;
      x = y;
      y = temp;
  }
  
    void swapElements(int a[], int sizeof_array){
        
        // Your code here
        int temp;
        for(int i=0;i<sizeof_array-2;i++){
                int j=i+2;
                    swap(a[i],a[j]);
            }
            
        
        
        
    }
};

// { Driver Code Starts.

// Driver code to test swapElements
int main() {
	
	int testcase;
	
	cin >> testcase;
	
	while(testcase--){
	    int sizeof_array;
	    cin >> sizeof_array;
	    
	    int arr[sizeof_array];
	    
	    for(int i = 0;i<sizeof_array;i++){
	        cin >> arr[i];
	    }
        Solution obj;
        // calling function to swap the array swap elements
	    obj.swapElements(arr, sizeof_array);
	    
	    // Printing the modified array
	    for(int i = 0;i<sizeof_array;i++){
            cout << arr[i] << " ";
        }
	    
	    cout << endl;
	}
	
	return 0;
}  // } Driver Code Ends

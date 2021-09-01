// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function Template for C++

double posAverage(vector<int> v) {
    // code here
    int sum = 0;
    int count = 0;
    for(auto i=0 ; i<v.size();i++){
        if(v[i]>=0){
            sum += v[i];
            count++;
        }
    }
    
    return sum/double(count); 
}


// { Driver Code Starts.

int main() {

    int t;
    cin >> t;
    string s;
    getline(cin, s);
    while (t--) {
        string str;
        getline(cin, str);
        vector<int> nums;
        istringstream ss(str);

        string num;
        while (ss >> num) {
            nums.push_back(stoi(num));
        }

        double avg = posAverage(nums);
        avg = ((int)(avg * 100)) / 100.0;
        printf("%.2f\n", avg);
    }

    return 0;
}  // } Driver Code Ends

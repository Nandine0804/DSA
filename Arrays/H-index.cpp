class Solution {
public:
    int hIndex(vector<int>& c) {
        sort(c.begin(),c.end());
        int maxi=0;
        int n=c.size();
        for(int i=0;i<n;i++){
            if(c[i]>=n-i){
                maxi=max(maxi,n-i);
            }
            
        }
        return maxi;
    }
};


Approach : 
H-index : ??
The h-index is defined as the maximum value of h such that the given author/journal has published at least h papers that have each been cited at least h times
Eg : arr = [3,0,6,5,1]
How to find it?
  - Sort the array elements
//[0,1,3,5,6]
//N - size of the array = 5
//i- the current index.
   - Initialise the maxi variable for returing the maximum value.
   - Check whether the value is greater than the n - i value.

DRY RUN : 
 0 > = 5 - 0 
  - No
 1 > = 5 - 1
  - No
 3 > = 5 -2
  - Yes - (maxi = 3)
 5 > = 5 - 3
  - Yes - maxi= 3 (Since we should give only the maximum value)
 5 > = 5 - 4
  - Yes - maxi = 3

  Hence H-index : 3

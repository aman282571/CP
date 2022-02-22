// ---------------------------------------Binary Search--------------------------------------------------

// Used when we have to minimize the value for given condition
while(low<high){
    mid = low + (high - low) / 2;
    if(condition(mid))
        high = mid;
    else
        low = mid + 1;
}
// Used when we have to maximize the value for given condition
while(low<high){
     mid = low + (high - low+1) / 2; // low+high+1/2
    if(condition(mid))
        low = mid;
    else
        high = mid - 1;
}

// ---------------------------------------PBDS--------------------------------------------------

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>



// ---------------------------------------STACK --------------------------------------------------

// Increasing and non-decreasing stack ,used for PLE,NLE. 
stack<int> st;
for (int i = 0; i < array.size();i++){
    while(!st.empty() && arr[st.top()]>arr[i] )
        st.pop();
// now if stack is empty then use wither -1 or size else element at the top of stack is PLE or NLE(if moving in reverse direction)    
}

// Decreasing and non increasing stack ,used for PGE,NGE
stack<int> st;
for (int i = 0; i < array.size();i++){
    while(!st.empty() && arr[st.top()]<arr[i] )
        st.pop();
// now if stack is empty then use wither -1 or size else element at the top of stack is PGE or NGE(if moving in reverse direction)    
}



// ---------------------------------------Binary indexed tree--------------------------------------------------

// there are two operations in BIT:- 
// 1. Update the value at index i by val
// 2. get the value at iindex i
vector<int>bit(sz + 1, 0);
// this will update the value at index i and also in other indicex where this value is used
void update(int index,int val){
    while(index<=sz){
        bit[index] += val;
        index=index+index&(-index)
    }
}
// get the prefix sum till index i
void getSum(int index){
    int sum = 0;
    while (index > 0){
        sum += bit[index];
        index = index - index & (-index);
    }
}


#include<bits/stdc++.h>
using namespace std;
// ---------------------------------------PBDS--------------------------------------------------
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>


//---------------------------------- 4 and 8 directions-------------------------
vector<int> dirs = {-1, 0, 1, 0, -1};   // 4 directions
vector<int> dirs = {1 ,1, 0, 1 ,-1, 0 ,-1 ,-1, 1};   // 8 directions




### Vector

1. push_back()
2. front() returns the first element of the vector
3. back() returns the last element of the vector
4. clear() remove all ele of vector and make size=0
5. .insert(it,val) insert element at position corresponding to it iterator
6. sort(begin(vec),end(vec),custom comp)
7. .resize(len,val) val is only used if current length is greater then previous length
8. next_permutation(begin(arr),end(arr)) it return true if array has next permutation and update the array
9. *max_element(begin(arr),end(arr)), *min_element(begin(arr),end(arr))
10. iota(begin(arr),end(arr),0)
11. accumulate(begin(arr),end(arr),0) or 0ll
12. partial_sum(begin(arr),end(arr),begin(nums)); prefix sum
13. nth_element(begin(arr),begin(arr)+n,end(arr))
14. replace and rotate

### string

1. str.substr(start pos, optional len)
2. str.find(findThis,optional startPos )
3. isupper(ch),islower(ch),topper(ch),tolower(ch),stoi(str),stol(str)
4. string(len,char) return a string of length "len" with all characters=char

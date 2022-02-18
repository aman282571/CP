# These are 2 binary search templates

**We define three main variables:-** `low,high,mid`

**low ->** lowest possible value that can be answer

**high ->** highest possible value that can be answer

**mid ->** tricker which depend on condition and template.

---

## 1st template:-

Used when we have to minimize the value for given condition

`pattern:- condition(lo)->false, condition(lo+1)->false...., condition(k)->true, condition(k+1)->true,condition(high)->true`

**this template will give us the minimum value of k for which this condition holds true**

> We use mid like below to avoid overflow,.it is also called lower mid,because if low=4,high=5 ,mid will be 4

```
while(low<high){
    mid = low + (high - low) / 2;
    if(condition(mid))
        high = mid;
    else
        low = mid + 1;
}
```

---

## 2nd template:-

Used when we have to maximize the value for given condition

`pattern:- condition(lo)->true, condition(lo+1)->true...., condition(k)->true, condition(k+1)->false,condition(high)->false`

**this template will give us the maximum value of k for which this condition holds true**

> We use mid like below to avoid overflow,it is also called upper mid,because if low=4,high=5 ,mid will be 5 ,else we use mid= (low+high+1)/2 ,it can overflow

```
while(low<high){
     mid = low + (high - low+1) / 2;

    if(condition(mid))
        low = mid;
    else
        high = mid - 1;
}
```

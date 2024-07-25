//Problem link - https://www.geeksforgeeks.org/problems/k-th-element-of-two-sorted-array1317/0

class Solution{
    public:
    int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
        return kth(arr1, arr2, arr1 + n, arr2 + m, k - 1);
    }
    
    int kth(int *arr1, int *arr2, int *end1, int *end2, int k)
    {
        //if first array is empty, then return the kth 
        //element of second array
        if(arr1 == end1)
            return arr2[k];
            
        //if second array is empty, then return the
        //kth element of first array
        if(arr2 == end2)
            return arr1[k];
        
        //find mid index for both arrays
        int mid1 = (end1 - arr1) / 2;
        int mid2 = (end2 - arr2) / 2;
        
        //if the sum of both mid is lesser than k, then need to add elements
        if(mid1 + mid2 < k)
        {
            //if mid index value of first array is greater than
            //mid index value of second array, then remove the left
            //part of elements from second array
            if(arr1[mid1] > arr2[mid2])
                return kth(arr1, arr2 + mid2 + 1, end1, end2, k - mid2 - 1);
            //if mid index value of second array is greater than
            //mid index value of first array, then remove the left
            //part of elements from first array
            else
                return kth(arr1 + mid1 + 1, arr2, end1, end2, k - mid1 - 1);
        }
        //here, need to remove the elements
        else
        {
            //if mid index value of first array is greater than
            //mid index value of second array, then remove the right
            //part of the first array
            if(arr1[mid1] > arr2[mid2])
                return kth(arr1, arr2, arr1 + mid1, end2, k);
            //if mid index value of first array is greater than
            //mid index value of second array, then remove the right
            //part of the first array
            else
                return kth(arr1, arr2, end1, arr2 + mid2, k);
        }
    }
};

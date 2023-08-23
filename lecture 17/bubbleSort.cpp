// //without optimisation code
// #include <bits/stdc++.h> 
// void bubbleSort(vector<int>& arr, int n)
// {   
//     // Write your code here.

//     for( int i = 1 ; i < n ; i++){
//         // for round 1 to n-1;

//         for( int j = 0 ; j < n-i; j++){
//             //process element till (n-i)th index
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//             }
//         }
//     }
// }


//with optimisation code

#include <bits/stdc++.h> 
void bubbleSort(vector<int>& arr, int n)
{   
    // Write your code here.

    for( int i = 1 ; i < n ; i++){
        // for round 1 to n-1;
        bool swapped = false;

        for( int j = 0 ; j < n-i; j++){
            //process element till (n-i)th index
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }

        if(swapped = false){
            //already sorted
            break;
        }
    }
}

#include "listaPalavras.h"

int binarySearch(No *vetor,  char x,int n) 
    { 
        int l = 0 ; 
        int r = n - 1; 
        while (l <= r)  
        { 
            int m = l + (r - l) / 2; 
  
        int res; 
        if (x == (arr[m])) 
            res = 0; 
              
  
            // Check if x is present at mid 
            if (res == 0) 
                return m; 
  
            // If x greater, ignore left half 
            if (x > (arr[m])) 
                l = m + 1; 
  
            // If x is smaller, ignore right half 
            else
                r = m - 1; 
        } 
  
        return -1; 
    } 
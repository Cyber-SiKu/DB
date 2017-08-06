// C/C++ File
// AUTHOR:   siku
// FILE:     2-10.cpp
// ROLE:     TODO (some explanation)
// CREATED:  2017-08-06 17:06:08
// MODIFIED: 2017-08-06 17:07:05
void Reverse(int R[], int from, int to){ 
 int i, temp;  
 for(i = 0; i < to-from+1/2; i++){ 
   temp=R[from+i];  
   R[from+i]=R[to-i];  
   R[to-i]=temp;  
  }//Reverse 
  
} 
void Converse(int R[], int n, int p){ 
 Reverse(R, 0, p-1);  
 Reverse(R, p, n-1);  
 Reverse(R, 0, n-1);  
}

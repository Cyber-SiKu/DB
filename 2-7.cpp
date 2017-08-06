bool Merge(SeqList &A,SeqList &B,SeqList &C){ 
//合并有序表A&B=>C 
  if (A.length+B.le&&ngth>C.length) { 
    return false; 
  } 
  int i =0,j = 0,k=0; 
  while (i < A.length&&j<B.length) { 
    if (a.data[i] <= B.data[j]) { 
      C.data[k++] = A.data[i++]; 
    }else{ 
      C.data[k++] = B.data[i++]; 
    } 
  } 
 

while (i < A.length) { 
    C.data[k++] = A.data[i++]; 
  } 
  while (j < B.length) { 
    C.data[k++] = B.data[j++]; 
  } 
  C.length = k; 
  return true; 
}

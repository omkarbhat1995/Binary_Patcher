void swap(int* a, int* b) 
{ 
    int t = *a; 
    *a = *b; 
    *b = t; 
} 
  
/* This function takes last element as pivot, places 
   the pivot element at its correct position in sorted 
    array, and places all smaller (smaller than pivot) 
   to left of pivot and all greater elements to right 
   of pivot */
int partition (int arr[], int low, int high) 
{ 
    int pivot = arr[high];    // pivot 
    int i = (low - 1);  // Index of smaller element 
  
    for (int j = low; j <= high- 1; j++) 
    { 
        // If current element is smaller than or 
        // equal to pivot 
        if (arr[j] <= pivot) 
        { 
            i++;    // increment index of smaller element 
            swap(&arr[i], &arr[j]); 
        } 
    } 
    swap(&arr[i + 1], &arr[high]); 
    return (i + 1); 
} 
  
/* The main function that implements QuickSort 
 arr[] --> Array to be sorted, 
  low  --> Starting index, 
  high  --> Ending index */
void quickSort(int arr[], int low, int high) 
{ 
    if (low < high) 
    { 
        /* pi is partitioning index, arr[p] is now 
           at right place */
        int pi = partition(arr, low, high); 
        // Separately sort elements before 
        // partition and after partition 
        quickSort(arr, low, pi - 1); 
        quickSort(arr, pi + 1, high); 
    } 
} 

/* Function to print an array */
void printArray(int arr[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        printf("%d ", arr[i]); 
    printf("n"); 
} 
struct Foo{
int array[10];
int num;
};
Foo get_input()
{
  int num_ele;
  int array1[10];
  int test;
  int a[2];
  Foo returnval;
  std::cout << "Enter number of elements to be sorted (less than 10): " << std::endl;
  std::cin >> num_ele;
	  for (int i = 0; i < num_ele; i++)///No overflow because size check!
	  {
		  std::cout << "Please type a number: ";	
		  std::cin >> test;
		  returnval.array[i] = test;
	  }
   // returnval.array=array1;
    returnval.num=num_ele;
return returnval;
}

int main(int argc,char *argv[]) {
 int array1[10]; 
  int num_ele=0;
  Foo a=get_input();
  if (num_ele<=10){
  std::cout << "Before Merge Sort :" << std::endl;
  printArray(a.array, num_ele);
  quickSort(arr, 0, num_ele-1);
  //MergeSort(a.array, num_ele);
  std::cout << "After Merge Sort :" << std::endl;
  printArray(a.array, num_ele);
}
  return (0);
}



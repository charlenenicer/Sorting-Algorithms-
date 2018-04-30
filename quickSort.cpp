#include <iostream>

using namespace std;
void quicksort(int sort[], int left, int right);
int partition(int sort[], int left, int right, int pivot);
void swap(int &i, int &j);

int main()
{
    int sort[7];
    int x;
    int i =0;
    while(cin>>x){
        sort[i] = x;
        i++;
    }
    int size = sizeof(sort)/sizeof(sort[0]);
    quicksort(sort, 0, size-2);
    for(int k =0; k<size; k++)
        cout<<sort[k]<< endl;
    
    return 0;
}

void quicksort(int sort[], int left, int right){
    if(left>=right)
        return;
    
    int pivot = right + 1;
    int index = partition(sort, left, right, pivot);
    quicksort(sort, left, index-2);
    quicksort(sort, index+1, right);
    
}

int partition(int sort[], int left, int right, int pivot){
    while(left <= right){
        
        
        while(sort[left]<sort[pivot]){
            left++;
        }
        
        while(sort[right]>sort[pivot]){
            right--;
        }
        
        if(left< right){
            swap(sort[left], sort[right]);
            left ++;
            right --;
        }
    }
    swap(sort[pivot], sort[left]);
    return left;
    
    
}

void swap(int &i, int &j){
    int temp = i;
    i = j;
    j = temp;
}



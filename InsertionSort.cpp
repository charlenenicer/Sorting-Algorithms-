
#include <iostream>
#include <vector>
using namespace std;
void swap(int *x, int *y);
void sorting(vector<int> &sort);

int main()
{
    vector<int> sort;
    int x;
    int i =0;
    while(cin>>x){
        sort.push_back(x);
        
    }
    sorting(sort);
    for(int k =0; k<sort.size(); k++)
        cout<<sort[k]<< endl;
    
    return 0;
}

void swap(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    
}

void sorting(vector<int> &sort)
    {
    int firstSorted;
    int j;
    int k;
    for(int i = 0; i<sort.size()-1; i++){
        j = i +1;
        k = i;
        while(sort[j]<sort[k] && k >=0){
            swap(& sort[j], &sort[k]);
            j--;
            k--;
        }
        
    }
    }
    
    






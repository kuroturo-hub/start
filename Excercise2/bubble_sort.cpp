#include <iostream>
void sort(int array[], int size);
int main(){
    int array[] = {10, 1, 9, 2, 8, 3, 7, 4, 6, 5};
	int size = sizeof(array)/sizeof(array[0]);

	sort(array, size);

	for(int element : array){
		std::cout << element << " ";
    }
}
void sort(int array[], int size){
    int temp;
    for (int i =0; i < size -1 ;i++){   //cuz we only need to do this from 1st element to 2nd last element
        for (int j=0;j < size -1 -i ; j++ ){       //to exclude elements that are already sorted
            if (array[j+1] < array[j]) {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] =temp;
            }
        } 
    }
}

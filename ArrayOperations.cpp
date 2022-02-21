#include <iostream>
using namespace std;
int sumOfArray(int *ptr,int size){
    int sum=0;
    for(int i=0;i<size;i++)
        sum=sum+(ptr[i]);
    return sum;
}
int minimum(int *array,int size){
int min=array[0];
for(int i=0;i<size;i++)
    if(array[i]<min)
        min=array[i];
    return min;

}
int arraySearch(int element,int *array,int size){
    int index=0;
    for(int i=0;i<size;i++)
        if(element==array[i])
            index=i;
return index;
}


int main() {
    int sizeOfArray,sum,searchingIndex;
  cout << "Enter size of Array"<<endl;
  cin>>sizeOfArray;
  int Array[sizeOfArray];
  cout << "Enter Elements of Array"<<endl;
  for(int i=0;i<sizeOfArray;i++)
    cin>>Array[i];
  cout << "*****ELEMENTS OF ARRAYS*****"<<endl;
  for(int i=0;i<sizeOfArray;i++)
    cout<<Array[i]<<endl;
  sum = sumOfArray(Array, sizeOfArray);

  while(1){
    int choice,element;
    cout<<"\nEnter Your Choice \n 1. Sum \n2. Average \n3. Minimum \n4. Element Search \n5. Exit\n";
    cin>>choice;
    switch(choice){
        case 1:
            cout<<"THE SUM OF ARRAY IS --> "<<sum<<endl;
            break;
        case 2:
            cout<<"THE AVERAGE OF ARRAY IS --> "<<sum/sizeOfArray<<endl;
            break;
        case 3:
            cout<<"MINIMUM ELEMENT IS-->"<<minimum(Array,sizeOfArray)<<endl;
            break;
        case 4:
            cout<<"Enter Element to be searched at index\n";
            cin>>element;
            cout<<"THE SEARCHING INDEX OF ELEMENT IS"<< arraySearch(element,Array,sizeOfArray);
            break;
        case 5:
            exit(0);

    }

  }






}



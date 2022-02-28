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
void insert(int *array,int size,int element,int index){
    if(index<size){
        size++;
        for(int i=size;i>index;i--){
            array[i] = array[i-1];
        }
        array[index]=element;
        cout<<"Elements added"<<endl;
        cout<<"After Adding Elements\n";
        for(int i=0;i<size;i++){
            cout<<array[i]<<"\n";
        }
    }
    else
        cout<<"Please enter valid index";
}
void del(int *array,int size,int element){
    int index;
    index = arraySearch( element,array,size);
        for(int i=index;i<size-1;i++){
            array[i+1] = array[i];
            //array[i] = array[i+1]
        }
       // size--;
        cout<<"Elements deleted"<<endl;
        cout<<"After Deleting Elements\n";
        for(int i=0;i<size-1;i++){
            cout<<array[i]<<"\n";
        }
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
    int choice,element,index;
    cout<<"\nEnter Your Choice \n 1. Sum \n2. Average \n3. Minimum \n4. Element Search \n5. Even \n6. Insert Element\n7. Delete Element \n8. Exit-->";
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
            cout<<"Enter Element -->";
            cin>>element;
            cout<<"THE SEARCHING INDEX OF ELEMENT IS-->"<< arraySearch(element,Array,sizeOfArray);
            break;
        case 5:
            for(int i=0;i<sizeOfArray;i++)
                if(Array[i]%2==0)
                cout<<Array[i];
        case 6:
            cout<<"Enter Element \n";
            cin>>element;
            cout<<"Enter Index to be stored\n";
            cin>>index;
            insert(Array,sizeOfArray,element,index);
            break;
        case 7:
            cout<<"Enter Element \n";
            cin>>element;
            del(Array,sizeOfArray,element);
            break;
        case 8:
            exit(0);
        default:
            cout<<"Please Choose from Given Menu";
    }
  }
}



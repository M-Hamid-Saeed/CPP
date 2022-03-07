#include <iostream>
bool isfull(int &top,int &capacity){
    if(top==capacity-1)
        return true;
    else
        return false;

}

void push(int &top,int &capacity,int *stack,int element){

    if(!isfull(top,capacity)) {
        top++;
        stack[top] = element;
    }
    else
        std::cout<<"Stack Overflow/ Stack is full!!\n";

}
void pop(int &top,int *stack){

    if(top==-1){
        std::cout<<"Stack Underflow";
    }
    else{

        std::cout<<"POPPEd ELEMENT-->"<<stack[top];
        top--;
}}

int main() {
    int top,capacity;
    std::cout<<"Enter size of Stack";
    std::cin>>capacity;
    top=-1;
    int stack[capacity-1];
    while(true) {
        int choice, element;

        std::cout << "\nEnter Your Choice \n 1. Push \n 2. Pop \n 3. Exit\n";
        std::cin >> choice;
        switch (choice) {
            case 1:
                std::cout << "Enter element --> ";
                std::cin >> element;
                push(top, capacity, stack, element);
                //std::cout << "After adding element";
                break;
            case 2:
                pop(top, stack);
                break;
            case 3:
                exit(0);
            default:
                std::cout << "please chose from given options";
        }

    }
}
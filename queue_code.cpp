#include <iostream>
using namespace std;

const int MAX_SIZE = 10;
int queue[MAX_SIZE];
int front = -1, rear = -1;

void EnQueue(){
    int data;
    if(rear == MAX_SIZE - 1){
        cout << "Queue is full" << endl;
    }else{
        if(front == -1){
            front = 0;
        }
        cout << "Enter data: ";
        cin >> data;
        rear++;
        queue[rear] = data;
    }
}

void DeQueue(){
    if(front == -1 || front > rear){
        cout << "Queue is empty" << endl;
    }else{
        cout << "Deleted element: " << queue[front] << endl;
        front++;
    }
}

void Display(){
    if(front == -1 || front > rear){
        cout << "Queue is empty" << endl;
    }else{
        cout << "Queue elements are: ";
        for(int i = front; i <= rear; i++){
            cout << queue[i] << " ";
        }
        cout << endl;
    }
}

class Queue{
    int front, rear;
    int size;
    int *arr;
public:
    Queue(int s){
        front = rear = -1;
        size = s;
        arr = new int[s];
    }
    void EnQueue(int data){
        if(rear == size - 1){
            cout << "Queue is full" << endl;
        }else{
            if(front == -1){
                front = 0;
            }
            rear++;
            arr[rear] = data;
        }
    }

    int DeQueue(){
        int data = -1;
        if(front == -1 || front > rear){
            cout << "Queue is empty" << endl;
        }else{
            data = arr[front];
            front++;
        }
        return data;
    }

    void Display(){
        if(front == -1 || front > rear){
            cout << "Queue is empty" << endl;
        }else{
            cout << "Queue elements are: ";
            for(int i = front; i <= rear; i++){
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main(){
    // int choice;
    // while(1){
    //     cout << "1. EnQueue" << endl;
    //     cout << "2. DeQueue" << endl;
    //     cout << "3. Display" << endl;
    //     cout << "4. Exit" << endl;
    //     cout << "Enter your choice: ";
    //     cin >> choice;
    //     switch(choice){
    //         case 1:
    //             EnQueue();
    //             break;
    //         case 2:
    //             DeQueue();
    //             break;
    //         case 3:
    //             Display();
    //             break;
    //         case 4:
    //             exit(0);
    //         default:
    //             cout << "Invalid choice" << endl;
    //     }
    // }


    Queue q(2);
    q.EnQueue(1);
    q.EnQueue(2);
    q.EnQueue(3);
    q.Display();

    cout << q.DeQueue() << endl;
    cout << q.DeQueue() << endl;
    cout << q.DeQueue() << endl;
    
    return 0;
}
#include<iostream>
using namespace std;

class Queue{
private:
    int Front;
    int Rear;
    int Size;
    int* Q;
public:
    Queue(){Front=Rear=-1;Size=10;Q=new int[Size];}
    Queue(int Size){Front=Rear=-1;this->Size=Size;Q=new int[Size];}
    void enqueue(int x);
    int dequeue();
    void Display();
};

void Queue::enqueue(int x){
if(Rear==Size-1)
    cout<<"Queue is Full";
else{
    Rear++;
    Q[Rear]=x;
}

}

void Queue::Display(){cout<<"updated queue:\n";
for(int i=Front+1;i<=Rear;i++){
    cout<<Q[i]<<"  "<<"\n";
}

}

int Queue::dequeue(){
int x=-1;
if(Front==Rear)
    cout<<"Queue is empty";
else
{
    x=Q[Front+1];
    Front++;
}
    return x;
}



int main(){
Queue q(5);
q.enqueue(4);
q.enqueue(5);
q.enqueue(6);
q.enqueue(7);
q.enqueue(8);
q.Display();
q.dequeue();
q.dequeue();
q.dequeue();
q.dequeue();
q.Display();
}

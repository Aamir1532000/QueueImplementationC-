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
if(Rear+1)%Size==Front)
    cout<<"Queue is Full";
else{
    Rear=(Rear+1)%Size;
    Q[Rear]=x;
}

}

void Queue::Display(){cout<<"updated queue:\n";
int i=Front+1;
do{
    cout<<Q[i]<<" \n";
    i=(i+1)%Size ;
}while(i!=(Rear+1)%Size);

}

int Queue::dequeue(){
int x=-1;
if(Front==Rear)
    cout<<"Queue is empty";
else
{
    Front=(Front+1)%Size;
    x=Q[Front];
}
    return x;
}



int main(){
Queue q(5);
q.enqueue(4);
q.enqueue(5);
q.enqueue(6);
q.enqueue(7);

q.Display();
q.dequeue();
q.dequeue();
q.dequeue();
q.dequeue();
q.Display();
}

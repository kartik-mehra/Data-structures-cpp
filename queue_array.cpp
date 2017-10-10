#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

# define MAX 5
int Queue[MAX];
int rear = -1, front = -1;
int OV = 0;

void Enqueue(int);
void display();
void Dequeue();

int main() {
    int num;
    int choice;
    do{
        cin >> choice;
        switch(choice){
            case 1:
                cin >> num;
                Enqueue(num);
                break;
            case 2:
                Dequeue();
                break;
            case 3:
                display();
                break;
            default:
                ;//do nothing
        }
    }while(choice != 4);
}
void display(){
    for(int i=front;i<=rear;i++)
        cout << Queue[i] << " ";
    cout << "\n";
}
void Enqueue(int num){
    int c=0;
    for(int i=front;i<=rear;i++)
    {
        c++;
    }
    if(c > MAX-1)
        return;

    if(rear == -1 && front == -1)
        rear = front = 0;
    else if(front > rear)
            rear = front = 0;
         else
            rear++;
    Queue[rear] = num;
}
void Dequeue(){
    if(front <= rear)
        front = front + 1;
}

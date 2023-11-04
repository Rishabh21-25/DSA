#include <climits>
#include <iostream>

template <typename T>
class QueueUsingArray
{
private:
    T *data;
    int nextIndex;
    int firstIndex;
    int size;
    int capacity;

public:
    QueueUsingArray(int s)
    {
        data = new T[s];
        nextIndex = 0;
        firstIndex = -1;
        size = 0;
        capacity = s;
    }

    int getSize()
    {
        return size;
    }

    bool isEmpty()
    {
        return size == 0;
    }

    void enqueue(T element)
    {
        if (size == capacity)
        {
            cout << "Queue is Full" << endl;
            return;
        }

        data[nextIndex] = element;
        nextIndex = (nextIndex + 1) % capacity;

        if (firstIndex == -1)
        {
            firstIndex = 0;
        }

        size++;
    }

    T front()
    {
        if (isEmpty())
        {
            cout << "Queue is Empty !" << endl;
            return 0;
        }

        return data[firstIndex];
    }

    T dequeue()
    {
        if (isEmpty())
        {
            cout << "Queue is Empty !" << endl;
            return 0;
        }

        T ans = data[firstIndex];
        firstIndex = (firstIndex + 1) % capacity;
        size = (size - 1);

        if (size == 0)
        {
            firstIndex = -1;
            nextIndex = 0;
        }

        return ans;
    }
};

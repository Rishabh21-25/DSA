#include <iostream>
#include <vector>

struct MinHeap
{
    std::vector<int> heap;
    int parent(int index)
    {
        return (index - 1) / 2;
    }
    int leftChild(int index)
    {
        return 2 * index + 1;
    }
    int rightChild(int index)
    {
        return 2 * index + 2;
    }
    void heapifyUp(int index)
    {
        while (index > 0)
        {
            int parentIndex = parent(index);
            if (heap[index] < heap[parentIndex])
            {
                std::swap(heap[index], heap[parentIndex]);
                index = parentIndex;
            }
            else
            {
                break;
            }
        }
    }

    void insert(int value)
    {
        heap.push_back(value);
        heapifyUp(heap.size() - 1);
    }
    void display()
    {
        std::cout << "Binary Heap: ";
        for (int i = 0; i < heap.size(); ++i)
        {
            std::cout << heap[i] << " ";
        }
        std::cout << std::endl;
    }
};

int main()
{
    MinHeap minHeap;
    minHeap.insert(3);
    minHeap.insert(2);
    minHeap.insert(1);
    minHeap.insert(4);
    minHeap.display();
    return 0;
}

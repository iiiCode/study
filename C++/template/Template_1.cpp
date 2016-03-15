#include <stdio.h>

template <typename T>
class Stack {
    public:
        Stack();
        ~Stack();

        void push(T& item);
        T& pop();
        bool isEmpty();
        bool isFull();
    private:
        int mTop;
        enum { MAX = 16};
        T mItems[MAX];
};

template <typename T>
Stack<T>::Stack()
    : mTop(0)
{
}

template <typename T>
Stack<T>::~Stack()
{
    mTop = 0;
}

template <typename T>
void Stack<T>::push(T& item)
{
    mItems[mTop ++] = item;
}

template <typename T>
T& Stack<T>::pop()
{
    return mItems[-- mTop];
}

template <typename T>
bool Stack<T>::isEmpty()
{
    return mTop == 0;
}

template <typename T>
bool Stack<T>::isFull()
{
    return mTop == MAX;
}

int main(int argc, char *argv[])
{
    char ch;
    Stack<char> stack;

    while((ch = getchar()) != '\n') {

        if (! stack.isFull()) {
            stack.push(ch);
        }
    }

    while(! stack.isEmpty()) {
        putchar(stack.pop());
    }

    putchar('\n');

    return 0;
}

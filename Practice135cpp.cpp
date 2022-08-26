// 135. Reverse a Stack: You have been given two stacks that can store integers as the data. Out of the two given stacks, one is populated and the other one is empty. You are required to write a function that reverses the populated stack using the one which is empty.

void reverseStack(stack<int> &input, stack<int> &extra)
{

    if (input.empty())
    {

        return;
    }

    int temp = input.top();
    input.pop();

    reverseStack(input, extra);

    int size1 = input.size();

    for (int i = 0; i < size1; i++)
    {

        extra.push(input.top());
        input.pop();
    }

    input.push(temp);

    int size2 = extra.size();

    for (int i = 0; i < size2; i++)
    {

        input.push(extra.top());
        extra.pop();
    }
}
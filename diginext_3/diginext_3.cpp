#include <iostream>
using namespace std;

int findindex(int[], int);
void func(int[]);

int main()
{
    int array[7];

    for (int i = 0; i < 7; i++)
    {
        bool boolean = true;

        while (boolean)
        {
            // set data

            cout << "enter number [" << i << "] : ";
            cin >> array[i];

            // Validation

            if (array[i] <= 7 && array[i] >= 1)
            {
                boolean = false;

                for (int j = 0; j < i; j++)
                {
                    if (array[i] == array[j])
                    {
                        cout << "Please don't enter duplicate numbers !" << endl;
                        boolean = true;
                        break;
                    }
                }
            }
            else
            {
                cout << "please enter number between 1 to 7 !" << endl;
            }
        }
    }

    func(array);

    return 0;
}


int findindex(int arr[], int num)
{
    int Index;

    for (int i = 0; i < 7; i++)
    {
        if (arr[i] == num)
        {
            Index = i;
        }
    }

    return Index;
}


void func(int arr[])
{

    int counter = 0;

    for (int i = 0; i < 7; i++)
    {
        if (arr[i] != (i+1))
        {
            swap(arr[i], arr[findindex(arr, (i+1))]);
            counter++;
        }
    }

    cout << "minimum swap : " << counter << endl;

    for (size_t i = 0; i < 7; i++)
    {
        cout << arr[i];
    }
}

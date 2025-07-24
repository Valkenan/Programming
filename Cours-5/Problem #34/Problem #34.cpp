#include <iostream>
#include <ctime>

using namespace std;
int ReadNumber()
{
    int Number;
    cout << "\nPlease enter a number to search for?\n";
    cin >> Number;
    return Number;
}
int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

void FillArrayWithRandomNumbers(int arr[100], int& arrLength)
{
    cout << "\nEnter number of elements:\n";
    cin >> arrLength;

    for (int i = 0; i < arrLength; i++)
        arr[i] = RandomNumber(1, 100);
}

void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";

    cout << "\n";
}
short NumberPositionInArray(int arr[100], int arrLength,int Number)
{
    for (int i = 0; i < arrLength; i++)
    {
        if (arr[i] == Number)
        {
            return i;
        }
        
    }
    return -1;
}
int main() {
    srand((unsigned)time(NULL));
    int arr[100], arrLength;
    FillArrayWithRandomNumbers(arr, arrLength);
    cout << "\nArray Elements: ";
    PrintArray(arr, arrLength);
    int Number = ReadNumber();
    cout << "the number you are looking for is : " << Number << endl;

    


    
    short NumberPosition = NumberPositionInArray(arr, arrLength, Number);
    if (NumberPosition == -1)
    {
        cout << "The number is not found :-(\n";
    }
    else
    {
    cout << "the number found at position : " << NumberPosition << endl;
    cout << "the number found is order : " << NumberPosition + 1 << endl;
    }
    return 0;
}

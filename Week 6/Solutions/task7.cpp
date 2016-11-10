    // Example program
    #include <iostream>
    using namespace std;
    int findLength(char sentence[]) {
        int length = 0;
        while (sentence[length] != '\0') {
            length++;
        }
        return length;
    }

    int main()
    {
        int numberArray[20], size;
        cout << "Enter size of array: " << endl;
        cin >> size;
        cout << "Enter the elements of the array: " << endl;
        for (int i = 0; i < size; i++) {
            cin >> numberArray[i];
        }

        cout << "The even numbers in the array are: ";
        for (int i = 0; i < size; i++) {

            if (numberArray[i] % 2 == 0)
                cout << numberArray[i] << " ";
        }

     return 0;
    }

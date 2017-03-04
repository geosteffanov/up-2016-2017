    // Example program
    #include <iostream>
    using namespace std;
    int main()
    {
        int numberArray[20], size;
        cout << "Enter size of array: " << endl;
        cin >> size;
        cout << "Enter the elements of the array: " << endl;
        for (int i = 0; i < size; i++) {
            cin >> numberArray[i];
        }

        cout << "The reversed array is: ";
        for (int i = size - 1; i > -1 ; i--) {
            cout << numberArray[i] << " ";
        }





     return 0;
    }

    // Example program
    #include <iostream>
    using namespace std;

    int main()
    {
        int advancedArray[20], size;
        cout << "Enter the number of elements in the array: " << endl;
        cin >> size;
        cout << "Enter the elements of the array: " << endl;
        for (int i = 0; i < size; i++) {
            cin >> advancedArray[i];
        }

        int sum = 0;
        for (int i = 0; i < size; i++) {
            sum += advancedArray[i];
        }
        cout << "The sum is: " << sum;

     return 0;
    }

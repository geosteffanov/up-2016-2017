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

        int sum = 0;

        for (int i = 0; i < size; i++) {
            if ((i + 1) % 3 == 0) {
                sum += numberArray[i];
            }
        }

        cout << "The sum of the elements is: " << sum;



     return 0;
    }

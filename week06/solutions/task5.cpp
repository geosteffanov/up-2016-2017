    // Example program
    #include <iostream>
    using namespace std;

    int main()
    {
        char sentence[50];
        cout << "Enter the sentence: " << endl;
        cin >> sentence;
        if (sentence[0] >= 'A' && sentence[0]<= 'Z') {
            cout << "The string is: ";
            cout << sentence;
        } else {
            cout << "The string does not begin with a capital letter." << endl;
        }


     return 0;
    }

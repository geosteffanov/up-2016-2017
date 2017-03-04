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
        char sentence[50];


        cout << "Enter the sentence: " << endl;
        cin >> sentence;
        int length = findLength(sentence);


        switch(sentence[length - 1]) {
            case '.': cout <<"'"<< sentence << "' is declarative. " << endl;break;
            case '?': cout <<"'"<< sentence << "' is interrogative. " << endl;break;
            case '!': cout <<"'"<< sentence << "' is exclamatory/imperative. " << endl;break;
            default: cout <<"'"<< sentence << "' is not a sentence. " << endl;break;
        }


     return 0;
    }

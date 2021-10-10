#include <iostream> //preprocessor
using namespace std;  // чтобы писать cout просто

int lol() {
    std::cout << "Hello, World!" << std::endl;
    std::cout << "I'm a C++ program" <<std::endl;
    cout << "MAXIM \n";
    int num = 10, num_1, num_2,result;
    cout << "\n";
//    cout << "Num is" << num;
//    string name;
//    cin >> name;
//    cout << "Hello, " << name;
    cin >> num_1;
    cin >> num_2;
    result = num_1 + num_2;
    result++;
    cout << result << endl;

    if (result == 0) {
        cout << "Wow!!!";
    } else if (result < 15 && result > 13) {
        cout << "result is lower than 15 and bigger than 13";
    } else
        cout << "you are cool" << endl;

    switch (result) {
        case 1:
            cout << "====1====" << endl;
            break;
    }

    return 0;
}

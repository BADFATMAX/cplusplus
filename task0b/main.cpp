#include <iostream> // ввод вывод
#include <string>
#include <list>
#include <fstream> //read file

// argc - количество параметров, argv - сами параметры (значения)
int main(int argc, char **argv) {


    using namespace std;
    string name = argv[1];
    ifstream inputFile; // объявил объект ипут файла ифстрим
    inputFile.open(name);
    list<string> list_of_words;
    string str; // строка из фаила
    while (getline(inputFile, str)) {
        for (i = 0; i < str.length(); i++) {
            if (str[i] >= 'a' && str[i] <= 'z' ||
                str[i] >= 'A' && str[i] <= 'Z' ||
                str[i] >= '0' && str[i] <= '9')
        }
    }


    inputFile.close();
    return 0;
}

#include <iostream>
#include <random>
#include <fstream>

// Отдельный исполняемый файл

#define F_size 100000
using namespace std;
void generate_int_files(){
    /*
     * Создание файла с целочисленными данными
     */
    mt19937 gen(chrono::duration_cast<chrono::seconds>(chrono::system_clock::now().time_since_epoch()).count());
    uniform_int_distribution<int> dis(-1000000, 1000000);
    string filepath="resources/int/int";
    for(int i = 1;i<=10;i++){
        ofstream fout(filepath+ to_string(i)+".txt");
        for(int j=0;j<F_size*i;j++){
            fout<<dis(gen)<<' ';
        }
        fout.close();
    }
}

void generate_double_files(){
    /*
    * Создание файла с вещественными данными
    */
    mt19937 gen(chrono::duration_cast<chrono::seconds>(chrono::system_clock::now().time_since_epoch()).count());
    uniform_real_distribution<double> dis(-10000.0, 10000.0);
    string filepath="resources/double/double";
    for(int i = 1;i<=10;i++){
        ofstream fout(filepath+ to_string(i)+".txt");
        for(int j=0;j<F_size*i;j++){
            fout<<dis(gen)<<' ';
        }
        fout.close();
    }
}
void generate_char_files(){
    /*
    * Создание файла с символьными данными
    */
    mt19937 gen(chrono::duration_cast<chrono::seconds>(chrono::system_clock::now().time_since_epoch()).count());
    uniform_int_distribution<int> dis(33, 255);
    string filepath="resources/char/char";
    for(int i = 1;i<=10;i++){
        ofstream fout(filepath+ to_string(i)+".txt");
        for(int j=0;j<F_size*i;j++){
            fout<<(char)dis(gen)<<' ';
        }
        fout.close();
    }
}
void generate_string_files(){
    /*
    * Создание файла со строковыми данными
    */
    mt19937 gen(chrono::duration_cast<chrono::seconds>(chrono::system_clock::now().time_since_epoch()).count());
    uniform_int_distribution<int> dis(33, 255);
    uniform_int_distribution<int> len(20, 40);
    string filepath="resources/string/string";
    for(int i = 1;i<=10;i++){
        ofstream fout(filepath+ to_string(i)+".txt");
        for(int j=0;j<F_size*i;j++){
            for(int k=1;k<=len(gen);k++)
                fout<<(char)dis(gen);
            fout<<' ';
        }
        fout.close();
    }
}
int main(){
    generate_int_files();
    generate_double_files();
    generate_char_files();
    generate_string_files();
    return 0;
}
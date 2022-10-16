#include "data.h"

namespace Data{
    std::vector<char> load_vector_char(const std::string& path_file){
        std::ifstream fin;
        fin.open(path_file);
        std::vector<char> loaded_vector;
        char input;
        fin>>input;
        while(!fin.eof()){
            loaded_vector.push_back(input);
            fin>>input;
        }
        fin.close();
        return loaded_vector;
    }
    std::vector<int> load_vector_int(const std::string& path_file){
        std::ifstream fin;
        fin.open(path_file);
        std::vector<int> loaded_vector;
        int input;
        fin>>input;
        while(!fin.eof()){
            loaded_vector.push_back(input);
            fin>>input;
        }
        fin.close();
        return loaded_vector;
    }
    std::vector<double> load_vector_double(const std::string& path_file){
        std::ifstream fin;
        fin.open(path_file);
        std::vector<double> loaded_vector;
        double input;
        fin>>input;
        while(!fin.eof()){
            loaded_vector.push_back(input);
            fin>>input;
        }
        fin.close();
        return loaded_vector;
    }
    std::vector<std::string> load_vector_string(const std::string& path_file){
        std::ifstream fin;
        fin.open(path_file);
        std::vector<std::string> loaded_vector;
        std::string input;
        fin>>input;
        while(!fin.eof()){
            loaded_vector.push_back(input);
            fin>>input;
        }
        fin.close();
        return loaded_vector;
    }
    std::list<char> load_list_char(const std::string& path_file){
        std::ifstream fin;
        fin.open(path_file);
        std::list<char> loaded_list;
        char input;
        fin>>input;
        while(!fin.eof()){
            loaded_list.push_back(input);
            fin>>input;
        }
        fin.close();
        return loaded_list;
    }
    std::list<int> load_list_int(const std::string& path_file){
        std::ifstream fin;
        fin.open(path_file);
        std::list<int> loaded_list;
        int input;
        fin>>input;
        while(!fin.eof()){
            loaded_list.push_back(input);
            fin>>input;
        }
        fin.close();
        return loaded_list;
    }
    std::list<double> load_list_double(const std::string& path_file){
        std::ifstream fin;
        fin.open(path_file);
        std::list<double> loaded_list;
        double input;
        fin>>input;
        while(!fin.eof()){
            loaded_list.push_back(input);
            fin>>input;
        }
        fin.close();
        return loaded_list;
    }
    std::list<std::string> load_list_string(const std::string& path_file){
        std::ifstream fin;
        fin.open(path_file);
        std::list<std::string> loaded_list;
        std::string input;
        fin>>input;
        while(!fin.eof()){
            loaded_list.push_back(input);
            fin>>input;
        }
        fin.close();
        return loaded_list;
    }
    std::deque<char> load_deque_char(const std::string& path_file){
        std::ifstream fin;
        fin.open(path_file);
        std::deque<char> loaded_deque;
        char input;
        fin>>input;
        while(!fin.eof()){
            loaded_deque.push_back(input);
            fin>>input;
        }
        fin.close();
        return loaded_deque;
    }
    std::deque<int> load_deque_int(const std::string& path_file){
        std::ifstream fin;
        fin.open(path_file);
        std::deque<int> loaded_deque;
        int input;
        fin>>input;
        while(!fin.eof()){
            loaded_deque.push_back(input);
            fin>>input;
        }
        fin.close();
        return loaded_deque;
    }
    std::deque<double> load_deque_double(const std::string& path_file){
        std::ifstream fin;
        fin.open(path_file);
        std::deque<double> loaded_deque;
        double input;
        fin>>input;
        while(!fin.eof()){
            loaded_deque.push_back(input);
            fin>>input;
        }
        fin.close();
        return loaded_deque;
    }
    std::deque<std::string> load_deque_string(const std::string& path_file){
        std::ifstream fin;
        fin.open(path_file);
        std::deque<std::string> loaded_deque;
        std::string input;
        fin>>input;
        while(!fin.eof()){
            loaded_deque.push_back(input);
            fin>>input;
        }
        fin.close();
        return loaded_deque;
    }
}
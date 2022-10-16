#ifndef CONTAINERS_DATA_H
#define CONTAINERS_DATA_H
#include <iostream>
#include <fstream>
#include <string>
#include <list>
#include <vector>
#include <deque>
namespace Data{
    std::vector<char> load_vector_char(const std::string& path_file);// Загрузка вектора с символьными данными
    std::vector<int> load_vector_int(const std::string& path_file); // Загрузка вектора с целочисленными данными
    std::vector<double> load_vector_double(const std::string& path_file);// Загрузка вектора с вещественными данными
    std::vector<std::string> load_vector_string(const std::string& path_file);// Загрузка вектора со строковыми данными
    std::list<char> load_list_char(const std::string& path_file);// Загрузка списка с символьными данными
    std::list<int> load_list_int(const std::string& path_file);// Загрузка списка с целочисленными данными
    std::list<double> load_list_double(const std::string& path_file);// Загрузка списка с вещественными данными
    std::list<std::string> load_list_string(const std::string& path_file);// Загрузка списка со строковыми данными
    std::deque<char> load_deque_char(const std::string& path_file);// Загрузка deque с символьными данными
    std::deque<int> load_deque_int(const std::string& path_file);// Загрузка deque с целочисленными данными
    std::deque<double> load_deque_double(const std::string& path_file);// Загрузка deque с вещественными данными
    std::deque<std::string> load_deque_string(const std::string& path_file);// Загрузка deque со строковыми данными
};
#endif //CONTAINERS_DATA_H

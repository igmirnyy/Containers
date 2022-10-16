#ifndef CONTAINERS_EXPERIMENTS_H
#define CONTAINERS_EXPERIMENTS_H
#include "data.h"
#include "TimeLogger.h"
#include "algorithm"
namespace EXP{
    const int F_SIZE=100000;
    void find_char(const std::string& out_path_file, const std::string& in_directory);// Эксперимент поиска с типом данных char
    void find_int(const std::string& out_path_file, const std::string& in_directory);// Эксперимент поиска с типом данных int
    void find_double(const std::string& out_path_file, const std::string& in_directory);// Эксперимент поиска с типом данных double
    void find_string(const std::string& out_path_file, const std::string& in_directory);// Эксперимент поиска с типом данных string
    void find_experiment(const std::string& out_directory, const std::string& in_directory);//Выполнение экспериментов поиска для всех типов данных
    void sort_char(const std::string& out_path_file, const std::string& in_directory);// Эксперимент сортировки с типом данных char
    void sort_int(const std::string& out_path_file, const std::string& in_directory);// Эксперимент сортировки с типом данных int
    void sort_double(const std::string& out_path_file, const std::string& in_directory);// Эксперимент сортировки с типом данных double
    void sort_string(const std::string& out_path_file, const std::string& in_directory);// Эксперимент сортировки с типом данных string
    void sort_experiment(const std::string& out_directory, const std::string& in_directory);//Выполнение эксперимента сортировки для всех типов данных
    void push_back_char(const std::string& out_path_file, const std::string& in_directory);// Эксперимент добавления в конец с типом данных char
    void push_back_int(const std::string& out_path_file, const std::string& in_directory);// Эксперимент добавления в конец с типом данных int
    void push_back_double(const std::string& out_path_file, const std::string& in_directory);// Эксперимент добавления в конец с типом данных double
    void push_back_string(const std::string& out_path_file, const std::string& in_directory);// Эксперимент добавления в конец с типом данных string
    void push_back_experiment(const std::string& out_directory, const std::string& in_directory);//Выполнение эксперимента добавления в конец для всех типов данных
    void push_front_char(const std::string& out_path_file, const std::string& in_directory);// Эксперимент добавления в начало с типом данных char
    void push_front_int(const std::string& out_path_file, const std::string& in_directory);// Эксперимент добавления в начало с типом данных int
    void push_front_double(const std::string& out_path_file, const std::string& in_directory);// Эксперимент добавления в начало с типом данных double
    void push_front_string(const std::string& out_path_file, const std::string& in_directory);// Эксперимент добавления в начало с типом данных string
    void push_front_experiment(const std::string& out_directory, const std::string& in_directory);// /Выполнение эксперимента добавления в начало для всех типов данных
    void pop_front_char(const std::string& out_path_file, const std::string& in_directory);// Эксперимент удаления с начала с типом данных char
    void pop_front_int(const std::string& out_path_file, const std::string& in_directory);// Эксперимент удаления с начала с типом данных int
    void pop_front_double(const std::string& out_path_file, const std::string& in_directory);// Эксперимент удаления с начала с типом данных double
    void pop_front_string(const std::string& out_path_file, const std::string& in_directory);// Эксперимент удаления с начала с типом данных string
    void pop_front_experiment(const std::string& out_directory, const std::string& in_directory);// /Выполнение эксперимента удаления с начала для всех типов данных
    void pop_back_char(const std::string& out_path_file, const std::string& in_directory);// Эксперимент удаления с конца с типом данных char
    void pop_back_int(const std::string& out_path_file, const std::string& in_directory);// Эксперимент удаления с конца с типом данных int
    void pop_back_double(const std::string& out_path_file, const std::string& in_directory);// Эксперимент удаления с конца с типом данных double
    void pop_back_string(const std::string& out_path_file, const std::string& in_directory);// Эксперимент удаления с конца с типом данных string
    void pop_back_experiment(const std::string& out_directory, const std::string& in_directory);// /Выполнение эксперимента удаления с конца для всех типов данных
}
#endif //CONTAINERS_EXPERIMENTS_H

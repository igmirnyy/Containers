#ifndef CONTAINERS_TIMELOGGER_H
#define CONTAINERS_TIMELOGGER_H

#include <iostream>
#include <fstream>

namespace Duration{
    class TimeLogger {
        std::chrono::high_resolution_clock::time_point start;// Начало отсчета
        std::ofstream fout;// Файловый поток вывода
        const char sep=';';// Разделитель
    public:
        explicit TimeLogger(const std::string& filepath);// Конструктор
        void reset_start();// Обновление секундомера
        void log_duration(int size, const std::string& container_type);// Запись в файл без сообщения
        void log_duration(int size, const std::string& container_type, const std::string& optional_message);// Запись в файл с сообщением
        ~TimeLogger();// Деструктор
    };
}
#endif //CONTAINERS_TIMELOGGER_H

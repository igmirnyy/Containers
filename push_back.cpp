#include "Experiments.h"

namespace EXP{
    void push_back_char(const std::string& out_path_file, const std::string& in_directory){
        Duration::TimeLogger logger(out_path_file);
        for (int i = 1; i <= 10; i++) {
            const std::string in_path_file = in_directory + "char" + std::to_string(i) + ".txt";
            std::cout<<in_path_file<<std::endl;
            std::vector<char> data = Data::load_vector_char(in_path_file),ex_vector, reserve_vector;
            std::list<char> ex_list;
            std::deque<char> ex_deque;
            logger.reset_start();
            for (auto& j: data){
                ex_vector.push_back(j);
            }
            logger.log_duration(EXP::F_SIZE * i, "vector");
            reserve_vector.reserve(F_SIZE*i);
            logger.reset_start();
            for (auto& j: data){
                reserve_vector.push_back(j);
            }
            logger.log_duration(EXP::F_SIZE * i, "vector","with reserve");
            logger.reset_start();
            for (auto& j: data){
                ex_deque.push_back(j);
            }
            logger.log_duration(EXP::F_SIZE * i, "deque");
            logger.reset_start();
            for (auto& j: data){
                ex_list.push_back(j);
            }
            logger.log_duration(EXP::F_SIZE * i, "list");
        }
    }
    void push_back_int(const std::string& out_path_file, const std::string& in_directory){
        Duration::TimeLogger logger(out_path_file);
        for (int i = 1; i <= 10; i++) {
            const std::string in_path_file = in_directory + "int" + std::to_string(i) + ".txt";
            std::cout<<in_path_file<<std::endl;
            std::vector<int> data = Data::load_vector_int(in_path_file),ex_vector,reserve_vector;
            std::list<int> ex_list;
            std::deque<int> ex_deque;
            logger.reset_start();
            for (auto& j: data){
                ex_vector.push_back(j);
            }
            logger.log_duration(EXP::F_SIZE * i, "vector");
            reserve_vector.reserve(F_SIZE*i);
            logger.reset_start();
            for (auto& j: data){
                reserve_vector.push_back(j);
            }
            logger.log_duration(EXP::F_SIZE * i, "vector","with reserve");
            logger.reset_start();
            for (auto& j: data){
                ex_deque.push_back(j);
            }
            logger.log_duration(EXP::F_SIZE * i, "deque");
            logger.reset_start();
            for (auto& j: data){
                ex_list.push_back(j);
            }
            logger.log_duration(EXP::F_SIZE * i, "list");
        }
    }
    void push_back_double(const std::string& out_path_file, const std::string& in_directory){
        Duration::TimeLogger logger(out_path_file);
        for (int i = 1; i <= 10; i++) {
            const std::string in_path_file = in_directory + "double" + std::to_string(i) + ".txt";
            std::cout<<in_path_file<<std::endl;
            std::vector<double> data = Data::load_vector_double(in_path_file),ex_vector,reserve_vector;
            std::list<double> ex_list;
            std::deque<double> ex_deque;
            logger.reset_start();
            for (auto& j: data){
                ex_vector.push_back(j);
            }
            logger.log_duration(EXP::F_SIZE * i, "vector");
            reserve_vector.reserve(F_SIZE*i);
            logger.reset_start();
            for (auto& j: data){
                reserve_vector.push_back(j);
            }
            logger.log_duration(EXP::F_SIZE * i, "vector","with reserve");
            logger.reset_start();
            for (auto& j: data){
                ex_deque.push_back(j);
            }
            logger.log_duration(EXP::F_SIZE * i, "deque");
            logger.reset_start();
            for (auto& j: data){
                ex_list.push_back(j);
            }
            logger.log_duration(EXP::F_SIZE * i, "list");
        }
    }
    void push_back_string(const std::string& out_path_file, const std::string& in_directory){
        Duration::TimeLogger logger(out_path_file);
        for (int i = 1; i <= 10; i++) {
            const std::string in_path_file = in_directory + "string" + std::to_string(i) + ".txt";
            std::cout<<in_path_file<<std::endl;
            std::vector<std::string> data = Data::load_vector_string(in_path_file),ex_vector,reserve_vector;
            std::list<std::string> ex_list;
            std::deque<std::string> ex_deque;
            logger.reset_start();
            for (auto& j: data){
                ex_vector.push_back(j);
            }
            logger.log_duration(EXP::F_SIZE * i, "vector");
            reserve_vector.reserve(F_SIZE*i);
            logger.reset_start();
            for (auto& j: data){
                reserve_vector.push_back(j);
            }
            logger.log_duration(EXP::F_SIZE * i, "vector","with reserve");
            logger.reset_start();
            for (auto& j: data){
                ex_deque.push_back(j);
            }
            logger.log_duration(EXP::F_SIZE * i, "deque");
            logger.reset_start();
            for (auto& j: data){
                ex_list.push_back(j);
            }
            logger.log_duration(EXP::F_SIZE * i, "list");
        }
    }
    void push_back_experiment(const std::string& out_directory, const std::string& in_directory){
        std::cout<<"push_back_experiment"<<std::endl;
        push_back_char(out_directory+"char.csv",in_directory+"char/");
        push_back_int(out_directory+"int.csv",in_directory+"int/");
        push_back_double(out_directory+"double.csv",in_directory+"double/");
        push_back_string(out_directory+"string.csv",in_directory+"string/");
    }
}
#include "Experiments.h"
namespace EXP {
    void sort_char(const std::string &out_path_file, const std::string &in_directory) {
        Duration::TimeLogger logger(out_path_file);
        for (int i = 1; i <= 10; i++) {
            const std::string in_path_file = in_directory + "char" + std::to_string(i) + ".txt";
            std::cout<<in_path_file<<std::endl;
            std::vector<char> ex_vector = Data::load_vector_char(in_path_file);
            std::list<char> ex_list = Data::load_list_char(in_path_file);
            std::deque<char> ex_deque = Data::load_deque_char(in_path_file);
            logger.reset_start();
            std::sort(ex_vector.begin(), ex_vector.end());
            logger.log_duration(EXP::F_SIZE * i, "vector");
            logger.reset_start();
            std::sort(ex_deque.begin(), ex_deque.end());
            logger.log_duration(EXP::F_SIZE * i, "deque");
            logger.reset_start();
            ex_list.sort();
            logger.log_duration(EXP::F_SIZE * i, "list");
        }
    }

    void sort_int(const std::string &out_path_file, const std::string &in_directory) {
        Duration::TimeLogger logger(out_path_file);
        for (int i = 1; i <= 10; i++) {
            const std::string in_path_file = in_directory + "int" + std::to_string(i) + ".txt";
            std::cout << in_path_file<<std::endl;
            std::vector<int> ex_vector = Data::load_vector_int(in_path_file);
            std::list<int> ex_list = Data::load_list_int(in_path_file);
            std::deque<int> ex_deque = Data::load_deque_int(in_path_file);
            logger.reset_start();
            std::sort(ex_vector.begin(), ex_vector.end());
            logger.log_duration(EXP::F_SIZE * i, "vector");
            logger.reset_start();
            std::sort(ex_deque.begin(), ex_deque.end());
            logger.log_duration(EXP::F_SIZE * i, "deque");
            logger.reset_start();
            ex_list.sort();
            logger.log_duration(EXP::F_SIZE * i, "list");
        }
    }

    void sort_double(const std::string &out_path_file, const std::string &in_directory){
        Duration::TimeLogger logger(out_path_file);
        for (int i = 1; i <= 10; i++) {
            const std::string in_path_file = in_directory + "double" + std::to_string(i) + ".txt";
            std::cout<<in_path_file<<std::endl;
            std::vector<double> ex_vector = Data::load_vector_double(in_path_file);
            std::list<double> ex_list = Data::load_list_double(in_path_file);
            std::deque<double> ex_deque = Data::load_deque_double(in_path_file);
            logger.reset_start();
            std::sort(ex_vector.begin(), ex_vector.end());
            logger.log_duration(EXP::F_SIZE * i, "vector");
            logger.reset_start();
            std::sort(ex_deque.begin(), ex_deque.end());
            logger.log_duration(EXP::F_SIZE * i, "deque");
            logger.reset_start();
            ex_list.sort();
            logger.log_duration(EXP::F_SIZE * i, "list");
        }
    }

    void sort_string(const std::string &out_path_file, const std::string &in_directory){
        Duration::TimeLogger logger(out_path_file);
        for (int i = 1; i <= 10; i++) {
            const std::string in_path_file = in_directory + "string" + std::to_string(i) + ".txt";
            std::cout<<in_path_file<<std::endl;
            std::vector<std::string> ex_vector = Data::load_vector_string(in_path_file);
            std::list<std::string> ex_list = Data::load_list_string(in_path_file);
            std::deque<std::string> ex_deque = Data::load_deque_string(in_path_file);
            logger.reset_start();
            std::sort(ex_vector.begin(), ex_vector.end());
            logger.log_duration(EXP::F_SIZE * i, "vector");
            logger.reset_start();
            std::sort(ex_deque.begin(), ex_deque.end());
            logger.log_duration(EXP::F_SIZE * i, "deque");
            logger.reset_start();
            ex_list.sort();
            logger.log_duration(EXP::F_SIZE * i, "list");
        }
    }

    void sort_experiment(const std::string &out_directory, const std::string &in_directory) {
        std::cout<<"sort_experiment"<<std::endl;
        sort_char(out_directory+"char.csv",in_directory+"char/");
        sort_int(out_directory+"int.csv",in_directory+"int/");
        sort_double(out_directory+"double.csv",in_directory+"double/");
        sort_string(out_directory+"string.csv",in_directory+"string/");
    }
}
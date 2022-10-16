#include "Experiments.h"
namespace EXP {
    void find_char(const std::string &out_path_file, const std::string &in_directory) {
        Duration::TimeLogger logger(out_path_file);
        for (int i = 1; i <= 10; i++) {
            const std::string in_path_file = in_directory + "char" + std::to_string(i) + ".txt";
            std::cout<<in_path_file<<std::endl;
            std::vector<char> ex_vector = Data::load_vector_char(in_path_file);
            std::list<char> ex_list = Data::load_list_char(in_path_file);
            std::deque<char> ex_deque = Data::load_deque_char(in_path_file);
            logger.reset_start();
            auto a = std::find(ex_vector.begin(), ex_vector.end(),'\0');
            logger.log_duration(EXP::F_SIZE * i, "vector");
            logger.reset_start();
            auto b = std::find(ex_deque.begin(), ex_deque.end(),'\0');
            logger.log_duration(EXP::F_SIZE * i, "deque");
            logger.reset_start();
            auto c = std::find(ex_list.begin(), ex_list.end(),'\0');
            logger.log_duration(EXP::F_SIZE * i, "list");
            if (a==ex_vector.end() and b==ex_deque.end() and  c==ex_list.end())
                std::cout<<"Worked correctly"<<std::endl;
            else
                std::cout<<"Some errors occurred"<<std::endl;
        }
    }
    void find_int(const std::string &out_path_file, const std::string &in_directory) {
        Duration::TimeLogger logger(out_path_file);
        for (int i = 1; i <= 10; i++) {
            const std::string in_path_file = in_directory + "int" + std::to_string(i) + ".txt";
            std::cout << in_path_file<<std::endl;
            std::vector<int> ex_vector = Data::load_vector_int(in_path_file);
            std::list<int> ex_list = Data::load_list_int(in_path_file);
            std::deque<int> ex_deque = Data::load_deque_int(in_path_file);
            logger.reset_start();
            auto a = std::find(ex_vector.begin(), ex_vector.end(),10000000);
            logger.log_duration(EXP::F_SIZE * i, "vector");
            logger.reset_start();
            auto b = std::find(ex_deque.begin(), ex_deque.end(),10000000);
            logger.log_duration(EXP::F_SIZE * i, "deque");
            logger.reset_start();
            auto c = std::find(ex_list.begin(),ex_list.end(),10000000);
            logger.log_duration(EXP::F_SIZE * i, "list");
            a==ex_vector.end()? std::cout<<"a nope"<<std::endl : std::cout<<"a yep"<<std::endl;
            b==ex_deque.end()? std::cout<<"b nope"<<std::endl : std::cout<<"b yep"<<std::endl;
            c==ex_list.end()? std::cout<<"c nope"<<std::endl : std::cout<<"c yep"<<std::endl;
        }
    }

    void find_double(const std::string &out_path_file, const std::string &in_directory){
        Duration::TimeLogger logger(out_path_file);
        for (int i = 1; i <= 10; i++) {
            const std::string in_path_file = in_directory + "double" + std::to_string(i) + ".txt";
            std::cout<<in_path_file<<std::endl;
            std::vector<double> ex_vector = Data::load_vector_double(in_path_file);
            std::list<double> ex_list = Data::load_list_double(in_path_file);
            std::deque<double> ex_deque = Data::load_deque_double(in_path_file);
            logger.reset_start();
            auto a = std::find(ex_vector.begin(), ex_vector.end(),10000000.0);
            logger.log_duration(EXP::F_SIZE * i, "vector");
            logger.reset_start();
            auto b = std::find(ex_deque.begin(), ex_deque.end(),10000000.0);
            logger.log_duration(EXP::F_SIZE * i, "deque");
            logger.reset_start();
            auto c = std::find(ex_list.begin(),ex_list.end(),10000000.0);
            logger.log_duration(EXP::F_SIZE * i, "list");
            a==ex_vector.end()? std::cout<<"a nope"<<std::endl : std::cout<<"a yep"<<std::endl;
            b==ex_deque.end()? std::cout<<"b nope"<<std::endl : std::cout<<"b yep"<<std::endl;
            c==ex_list.end()? std::cout<<"c nope"<<std::endl : std::cout<<"c yep"<<std::endl;
        }
    }

    void find_string(const std::string &out_path_file, const std::string &in_directory){
        Duration::TimeLogger logger(out_path_file);
        for (int i = 1; i <= 10; i++) {
            const std::string in_path_file = in_directory + "string" + std::to_string(i) + ".txt";
            std::cout<<in_path_file<<std::endl;
            std::vector<std::string> ex_vector = Data::load_vector_string(in_path_file);
            std::list<std::string> ex_list = Data::load_list_string(in_path_file);
            std::deque<std::string> ex_deque = Data::load_deque_string(in_path_file);
            logger.reset_start();
            auto a = std::find(ex_vector.begin(), ex_vector.end(),"abc");
            logger.log_duration(EXP::F_SIZE * i, "vector");
            logger.reset_start();
            auto b = std::find(ex_deque.begin(), ex_deque.end(),"abc");
            logger.log_duration(EXP::F_SIZE * i, "deque");
            logger.reset_start();
            auto c = std::find(ex_list.begin(),ex_list.end(),"abc");
            logger.log_duration(EXP::F_SIZE * i, "list");
            a==ex_vector.end()? std::cout<<"a nope"<<std::endl : std::cout<<"a yep"<<std::endl;
            b==ex_deque.end()? std::cout<<"b nope"<<std::endl : std::cout<<"b yep"<<std::endl;
            c==ex_list.end()? std::cout<<"c nope"<<std::endl : std::cout<<"c yep"<<std::endl;
        }
    }

    void find_experiment(const std::string &out_directory, const std::string &in_directory) {
        std::cout<<"find_experiment"<<std::endl;
        find_char(out_directory+"char.csv",in_directory+"char/");
        find_int(out_directory+"int.csv",in_directory+"int/");
        find_double(out_directory+"double.csv",in_directory+"double/");
        find_string(out_directory+"string.csv",in_directory+"string/");
    }
}
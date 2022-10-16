#include "TimeLogger.h"
namespace Duration{

    TimeLogger::TimeLogger(const std::string& filepath) {
        start = std::chrono::high_resolution_clock::now();
        fout.open(filepath);
        fout<<"sep=\'"<<sep<<"\'\n";
        fout<<"duration, ns"<<sep<<"size"<<sep<<"Container type"<<sep<<"Optional message"<<'\n';
    }

    void TimeLogger::reset_start() {
        start = std::chrono::high_resolution_clock::now();
    }

    void TimeLogger::log_duration(int size, const std::string &container_type) {
        auto diff = std::chrono::high_resolution_clock::now() - start;
        fout<<std::chrono::duration_cast<std::chrono::nanoseconds>(diff).count()<<sep<<size<<sep<<container_type<<sep<<'\n';
    }

    void TimeLogger::log_duration(int size, const std::string &container_type, const std::string &optional_message) {
        auto diff = std::chrono::high_resolution_clock::now() - start;
        fout<<std::chrono::duration_cast<std::chrono::nanoseconds>(diff).count()<<sep<<size<<sep<<container_type<<sep
        <<optional_message<<'\n';
    }

    TimeLogger::~TimeLogger() {
        fout.close();
    }
}
#include "Experiments.h"

int main() {
    EXP::sort_experiment("results/sort/", "resources/");
    EXP::push_back_experiment("results/push_back/", "resources/");
    EXP::pop_back_experiment("results/pop_back/", "resources/");
    EXP::push_front_experiment("results/push_front/", "resources/");
    EXP::pop_front_experiment("results/pop_front/", "resources/");
    EXP::find_experiment("results/find/", "resources/");
    return 0;
}
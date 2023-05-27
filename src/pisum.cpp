#include <benchmark.h>
#include <iostream>
#include <string>
#include <vector>

int main(int argc, char **argv) {
    std::vector<std::string> args;
    for(int i = 1; i < argc; i++) {
        args.push_back(argv[i]);
    }
    if(args.size() < 2) {
        std::cerr << "less than 2 arguments given\n";
        exit(1);
    }
    int64_t n = stoll(args.at(0));
    int64_t e = stoll(args.at(1));
    for(int i = 0; i < n; i++) {
        picalc::benchmark(100, e);
    }
    return 0;
}

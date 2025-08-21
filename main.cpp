#include <fmt/core.h>
#include <spdlog/spdlog.h>

int main(int, char**){
    spdlog::info("Hello, World from spdlog!");
    fmt::print("Hello, World from fmt!\n");

    return 0;
}

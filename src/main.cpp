#include <cplate/classic.h>
#include <fmt/format.h>
#include <string>

int main() {
    std::string s = fmt::format( "I'd rather be {1} than {0}.", "right", "happy" );
    fmt::print( s );    // Python-like format string syntax
}

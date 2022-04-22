#include <string>
#include <cstdint>

namespace logfwd {

typedef enum {
    NONE = 0,
    FATAL,
    ERROR,
    WARN,
    INFO,
#pragma push_macro("DEBUG")
#undef DEBUG
    DEBUG,
#pragma pop_macro("DEBUG")
    VERBOSE_0,
    VERBOSE_1,
    VERBOSE_2,
    VERBOSE_3,
} Level;

void forward(Level level, const std::string &module, const std::string &file, uint32_t line, const std::string& function, const std::string& message);

}  // namespace logfwd

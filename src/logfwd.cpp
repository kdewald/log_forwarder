#include <logfwd/logfwd.hpp>

#define __WEAK __attribute__((weak))


namespace logfwd {

void forward(Level level, const std::string& module, const std::string& file, uint32_t line,
             const std::string& function, const std::string& message) {
}
}  // namespace logfwd

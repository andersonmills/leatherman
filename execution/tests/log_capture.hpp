#pragma once

#include <sstream>
#include <string>
#include <leatherman/logging/logging.hpp>

namespace leatherman { namespace execution { namespace testing {

    /**
     * Utility class for capturing facter log output.
     */
    struct log_capture
    {
        /**
         * Constructs the log capture and starts capturing log output.
         * @param level The log level to capture.
         */
        explicit log_capture(logging::log_level level);

        /**
         * Destructs the log capture and stops capturing log output.
         */
        ~log_capture();

        /**
         * Gets the captured log.
         * @return Returns the captured log as a single string.
         */
        std::string result() const;

     private:
        std::ostringstream _stream;
    };

}}}  // namespace leatherman::execution::testing

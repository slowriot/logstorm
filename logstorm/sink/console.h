#ifndef LOGSTORM_SINK_CONSOLE_H_INCLUDED
#define LOGSTORM_SINK_CONSOLE_H_INCLUDED

#include "base.h"
#ifndef LOGSTORM_SINGLE_THREADED
  #include <mutex>
#endif // LOGSTORM_SINGLE_THREADED
#include "logstorm/timestamp.h"

namespace logstorm::sink {

class console final : public base {
  #ifndef LOGSTORM_SINGLE_THREADED
    std::mutex output_mutex;
  #endif // LOGSTORM_SINGLE_THREADED

public:
  explicit console(timestamp::types timestamp_type = timestamp::types::NONE);
  virtual ~console() override final;

  virtual void log(std::string const &log_entry) override final;
  virtual void log_fragment(std::string const &log_entry) override final;
};

}

#endif // LOGSTORM_SINK_CONSOLE_H_INCLUDED

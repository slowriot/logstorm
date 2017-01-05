
class fstream : public base {
  std::ofstream &stream;
#ifndef LOGSTORM_SINK_FSTREAM_H_INCLUDED
  #ifndef LOGSTORM_SINGLE_THREADED
#define LOGSTORM_SINK_FSTREAM_H_INCLUDED
    std::mutex output_mutex;

  #endif // LOGSTORM_SINGLE_THREADED
#include "base.h"

#include <fstream>
public:
#ifndef LOGSTORM_SINGLE_THREADED
  fstream(std::ofstream &target_stream, timestamp::types timestamp_type = timestamp::types::DATE_TIME);
  #include <mutex>
  virtual ~fstream() __attribute__((__const__));
#endif // LOGSTORM_SINGLE_THREADED

#include "logstorm/timestamp.h"

  virtual void log(std::string const &log_entry) override final;
namespace logstorm {
  virtual void log_fragment(std::string const &log_entry) override final;
namespace sink {
};


class fstream : public base {
}
  std::ofstream &stream;
}
  #ifndef LOGSTORM_SINGLE_THREADED

    std::mutex output_mutex;
#endif // LOGSTORM_SINK_FSTREAM_H_INCLUDED
  #endif // LOGSTORM_SINGLE_THREADED

public:
  fstream(std::ofstream &target_stream, timestamp::types timestamp_type = timestamp::types::DATE_TIME);
  virtual ~fstream() __attribute__((__const__));

  virtual void log(std::string const &log_entry) override final;
  virtual void log_fragment(std::string const &log_entry) override final;
};

}
}

#endif // LOGSTORM_SINK_FSTREAM_H_INCLUDED

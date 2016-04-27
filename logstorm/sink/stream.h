#ifndef LOGSTORM_SINK_STREAM_H_INCLUDED
#define LOGSTORM_SINK_STREAM_H_INCLUDED

#include "base.h"
#include <ostream>
#include "logstorm/timestamp.h"

namespace logstorm {
namespace sink {

class stream : public base {
private:
  std::ostream &ostream;

public:
  stream(std::ostream &target_ostream, timestamp::types timestamp_type = timestamp::types::NONE);
  virtual ~stream();

  virtual void log(std::string const &log_entry) override final;
  virtual void log_fragment(std::string const &log_entry) override final;
};

}
}

#endif // LOGSTORM_SINK_STREAM_H_INCLUDED
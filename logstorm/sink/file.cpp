#include "file.h"
#include <iostream>

namespace logstorm {
namespace sink {

file::file(std::string const &target_filename, timestamp::types timestamp_type)
  : base(timestamp_type),
    stream(target_filename, std::ios_base::app) {
  /// Default constructor
  if(!stream.good()) {
    std::cout << "LogStorm: WARNING: Couldn't open logfile" << target_filename << std::endl;
  }
}

file::~file() {
  /// Default destructor
  stream.close();
}

void file::log(std::string const &log_entry) {
  /// Log this line
  if(stream.good()) {
    stream << time() << log_entry << std::endl;
  }
}
void file::log_fragment(std::string const &log_entry) {
  /// Log this fragment without ending the line
  if(stream.good()) {
    stream << log_entry;
  }
}

}
}
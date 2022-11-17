#ifndef CMDUUID_CLASS_HPP
#define CMDUUID_CLASS_HPP

#include <string>

class cmdUUID {
public :
  enum cmd_code {
    eErr,
    ePing,
  };
  cmd_code resolver (std::string inCmd);
};

#endif //!CMDUUID_CLASS_HPP

#include "cmdUUID.hpp"

cmdUUID::cmd_code cmdUUID::resolver (std::string inCmd) {
  if (inCmd == "ping") return ePing;
  return eErr;
}

#include "client.hpp"
#include "bot-functions.hpp"
#include "dotenv.h"

void Client::onMessage(SleepyDiscord::Message message) {
  dotenv::env.load_dotenv();
  if (message.startsWith(dotenv::env["PREFIX"])) {
    // Get the message without the prefix
    std::string msgcontent = message.content.erase(0, dotenv::env["PREFIX"].length());
    std::cout << msgcontent << std::endl;
    // Seperate the message into command, and arguments(if any)
    std::string command;
    std::string arguments = "";
    if (wordCount(msgcontent) == 1) {
      command = msgcontent;
      arguments = "";
    } else {
      command = msgcontent.substr(0, msgcontent.find(' '));
      arguments = msgcontent.substr(msgcontent.find(' ') + 1, msgcontent.length());
    }
    cmdUUID id;
    switch ( id.resolver(command) ) {
      case id.ePing :
        std::cout << "Pong!" << std::endl;
        break;
      case id.eErr :
      default :
        std::cout << "Not a function..." << std::endl;
    }
  }
}

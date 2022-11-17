#ifndef COMMANDS_CLASS_H
#define COMMANDS_CLASS_H

#include "sleepy_discord/sleepy_discord.h"

class Client : public SleepyDiscord::DiscordClient {
public:
using SleepyDiscord::DiscordClient::DiscordClient;
  void onMessage(SleepyDiscord::Message message);
};

#endif //!COMMANDS_CLASS

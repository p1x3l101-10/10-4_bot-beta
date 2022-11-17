#ifndef MY_CLIENT_CLASS_CPP
#define MY_CLIENT_CLASS_CPP
#include "sleepy_discord/sleepy_discord.h"

class MyClientClass : public SleepyDiscord::DiscordClient {
public:
using SleepyDiscord::DiscordClient::DiscordClient;
	void onMessage(SleepyDiscord::Message message) override {
		if (message.startsWith("whcg hello"))
			sendMessage(message.channelID, "Hello " + message.author.username);
	}
};
#endif //!MY_CLIENT_CLASS_CPP

#include "sleepy_discord/sleepy_discord.h"
#include "bot-functions.hpp"
#include "dotenv.h"

int main() {
  dotenv::env.load_dotenv();
  Client client(dotenv::env["TOKEN"], SleepyDiscord::USER_CONTROLED_THREADS);
	client.setIntents(SleepyDiscord::Intent::SERVER_MESSAGES);
	client.run();
}

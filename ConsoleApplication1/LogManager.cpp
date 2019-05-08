#include "LogManager.h"
#include <iostream>

LogManager::LogManager()
{
}


LogManager::~LogManager()
{
}

LogManager& LogManager::operator=(const LogManager& logger) {
	return *LogManager::logInstance;
}

CRITICAL_SECTION LogManager::cs;
LogManager* LogManager::logInstance = nullptr;

void LogManager::init() {
	InitializeCriticalSection(&LogManager::cs);
}

LogManager* LogManager::sharedInstance() {
	EnterCriticalSection(&LogManager::cs);

	if (LogManager::logInstance == nullptr) {
		LogManager::logInstance = new LogManager();
	}

	LeaveCriticalSection(&LogManager::cs);
	return LogManager::logInstance;
}

void LogManager::log(std::string &string) {
	std::cout << "Log " << string << "done!" << " this: " << this << std::endl;
}
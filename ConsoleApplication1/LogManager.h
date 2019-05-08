#pragma once
#include <string>
#include <Windows.h>

class LogManager
{
public:
	~LogManager();

	static void init();
	static LogManager* sharedInstance();

	void log(std::string& string);
private:
	// private constructor and copy constructor
	LogManager();
	LogManager(const LogManager& logger);
	// private assignment operator
	LogManager& operator=(const LogManager& logger);

	static LogManager* logInstance;
	static CRITICAL_SECTION cs;
};


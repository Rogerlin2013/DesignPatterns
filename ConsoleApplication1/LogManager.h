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
	LogManager();

	static LogManager* logInstance;
	static CRITICAL_SECTION cs;
};


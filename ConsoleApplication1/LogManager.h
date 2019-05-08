#pragma once
#include <string>
#include <Windows.h>

class LogManager
{
public:
	~LogManager();

	// Avoiding implicit generation of the copy constructor
	LogManager(const LogManager& logger) = delete;
	// Avoiding copy assignment
	LogManager& operator=(const LogManager& logger) = delete;

	static void init();
	static LogManager* sharedInstance();

	void log(std::string& string);
private:
	// private constructor
	LogManager();

	static LogManager* logInstance;
	static CRITICAL_SECTION cs;
};


#ifndef UNITTEST_PRINTFTEST_REPORTER
#define UNITTEST_PRINTFTEST_REPORTER

#include "TestReporter.h"

namespace UnitTest
{

class PrintfTestReporter : public TestReporter
{
private:
    virtual void ReportFailure(char const* file, int line, char const* testName, char const* failure);
    virtual void ReportSingleResult(const std::string& testName, bool failed);
    virtual void ReportSummary(int testCount, int failureCount, float secondsElapsed);
};

}

#endif 


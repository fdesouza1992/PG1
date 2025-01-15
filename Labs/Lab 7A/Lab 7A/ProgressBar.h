#pragma once

#ifdef PROGRESSBAR_EXPORTS
    #define PROGRESSBAR_API __declspec(dllexport)
#else
    #define PROGRESSBAR_API __declspec(dllimport)
#endif

#include <windows.h>

class PROGRESSBAR_API ProgressBar
{
public:
    ProgressBar(int size, int speed = 1);

    void Show();
    void Update(double pointsEarned, double pointsTotal);

private:
    int mSize;
    int mSpeed;

    void RedrawBar(int currentProgress, WORD color);
    void BarShine();
    void CurveFillSpeed(double current, double end);
};

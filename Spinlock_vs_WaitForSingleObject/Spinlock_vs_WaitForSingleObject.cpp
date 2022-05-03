#include <iostream>
#include <Windows.h>
#include <chrono>

using namespace std;

void* g_pThreads[8]{};
unsigned long g_pThreadIDs[8]{};

long long g_pExitThreads0 = 0ll;
chrono::system_clock::time_point g_StartTime0{};
void* g_pEvent0 = nullptr;
long long g_pPadding0[8]{};

long long g_pExitThreads1 = 0ll;
chrono::system_clock::time_point g_StartTime1{};
void* g_pEvent1 = nullptr;
long long g_pPadding1[8]{};

long long g_pExitThreads2 = 0ll;
chrono::system_clock::time_point g_StartTime2{};
void* g_pEvent2 = nullptr;
long long g_pPadding2[8]{};

long long g_pExitThreads3 = 0ll;
chrono::system_clock::time_point g_StartTime3{};
void* g_pEvent3 = nullptr;
long long g_pPadding3[8]{};

long long g_pExitThreads4 = 0ll;
chrono::system_clock::time_point g_StartTime4{};
void* g_pEvent4 = nullptr;
long long g_pPadding4[8]{};

long long g_pExitThreads5 = 0ll;
chrono::system_clock::time_point g_StartTime5{};
void* g_pEvent5 = nullptr;
long long g_pPadding5[8]{};

long long g_pExitThreads6 = 0ll;
chrono::system_clock::time_point g_StartTime6{};
void* g_pEvent6 = nullptr;
long long g_pPadding6[8]{};

long long g_pExitThreads7 = 0ll;
chrono::system_clock::time_point g_StartTime7{};
void* g_pEvent7 = nullptr;
long long g_pPadding7[8]{};

unsigned long __stdcall Func0(void* const _pParameter)
{
    const unsigned long long ullThreadIndex = reinterpret_cast<unsigned long long>(_pParameter);

    unsigned long long ullThreadSpinCount = 0ull;

    while (true)
    {
        //if (_InterlockedCompareExchange64(&g_pExitThreads0,
        //                                  0ll,
        //                                  1ll) != 0ll)
        //{
        //    chrono::duration<double> dDuration = chrono::duration_cast<chrono::nanoseconds>(chrono::system_clock::now() - g_StartTime0);
        //    wcout << L"[" << ullThreadIndex << L"]\t" << dDuration.count() << endl;
        //    break;
        //}
        //else
        //{
        //    Sleep(0ul);
        //}

        if (WaitForSingleObject(g_pEvent0, INFINITE) == WAIT_OBJECT_0)
        {
            chrono::duration<double> dDuration = chrono::duration_cast<chrono::nanoseconds>(chrono::system_clock::now() - g_StartTime0);
            wcout << L"[" << ullThreadIndex << L"]\t" << dDuration.count() << endl;
            break;
        }
    }

    return 0ul;
}

unsigned long __stdcall Func1(void* const _pParameter)
{
    const unsigned long long ullThreadIndex = reinterpret_cast<unsigned long long>(_pParameter);

    unsigned long long ullThreadSpinCount = 0ull;

    while (true)
    {
        //if (_InterlockedCompareExchange64(&g_pExitThreads1,
        //                                  0ll,
        //                                  1ll) != 0ll)
        //{
        //    chrono::duration<double> dDuration = chrono::duration_cast<chrono::nanoseconds>(chrono::system_clock::now() - g_StartTime1);
        //    wcout << L"[" << ullThreadIndex << L"]\t" << dDuration.count() << endl;
        //    break;
        //}
        //else
        //{
        //    Sleep(0ul);
        //}

        if (WaitForSingleObject(g_pEvent1, INFINITE) == WAIT_OBJECT_0)
        {
            chrono::duration<double> dDuration = chrono::duration_cast<chrono::nanoseconds>(chrono::system_clock::now() - g_StartTime1);
            wcout << L"[" << ullThreadIndex << L"]\t" << dDuration.count() << endl;
            break;
        }
    }

    return 0ul;
}

unsigned long __stdcall Func2(void* const _pParameter)
{
    const unsigned long long ullThreadIndex = reinterpret_cast<unsigned long long>(_pParameter);

    unsigned long long ullThreadSpinCount = 0ull;

    while (true)
    {
        //if (_InterlockedCompareExchange64(&g_pExitThreads2,
        //                                  0ll,
        //                                  1ll) != 0ll)
        //{
        //    chrono::duration<double> dDuration = chrono::duration_cast<chrono::nanoseconds>(chrono::system_clock::now() - g_StartTime2);
        //    wcout << L"[" << ullThreadIndex << L"]\t" << dDuration.count() << endl;
        //    break;
        //}
        //else
        //{
        //    Sleep(0ul);
        //}

        if (WaitForSingleObject(g_pEvent2, INFINITE) == WAIT_OBJECT_0)
        {
            chrono::duration<double> dDuration = chrono::duration_cast<chrono::nanoseconds>(chrono::system_clock::now() - g_StartTime2);
            wcout << L"[" << ullThreadIndex << L"]\t" << dDuration.count() << endl;
            break;
        }
    }

    return 0ul;
}

unsigned long __stdcall Func3(void* const _pParameter)
{
    const unsigned long long ullThreadIndex = reinterpret_cast<unsigned long long>(_pParameter);

    unsigned long long ullThreadSpinCount = 0ull;

    while (true)
    {
        //if (_InterlockedCompareExchange64(&g_pExitThreads3,
        //                                  0ll,
        //                                  1ll) != 0ll)
        //{
        //    chrono::duration<double> dDuration = chrono::duration_cast<chrono::nanoseconds>(chrono::system_clock::now() - g_StartTime3);
        //    wcout << L"[" << ullThreadIndex << L"]\t" << dDuration.count() << endl;
        //    break;
        //}
        //else
        //{
        //    Sleep(0ul);
        //}

        if (WaitForSingleObject(g_pEvent3, INFINITE) == WAIT_OBJECT_0)
        {
            chrono::duration<double> dDuration = chrono::duration_cast<chrono::nanoseconds>(chrono::system_clock::now() - g_StartTime3);
            wcout << L"[" << ullThreadIndex << L"]\t" << dDuration.count() << endl;
            break;
        }
    }

    return 0ul;
}

unsigned long __stdcall Func4(void* const _pParameter)
{
    const unsigned long long ullThreadIndex = reinterpret_cast<unsigned long long>(_pParameter);

    unsigned long long ullThreadSpinCount = 0ull;

    while (true)
    {
        //if (_InterlockedCompareExchange64(&g_pExitThreads4,
        //                                  0ll,
        //                                  1ll) != 0ll)
        //{
        //    chrono::duration<double> dDuration = chrono::duration_cast<chrono::nanoseconds>(chrono::system_clock::now() - g_StartTime4);
        //    wcout << L"[" << ullThreadIndex << L"]\t" << dDuration.count() << endl;
        //    break;
        //}
        //else
        //{
        //    Sleep(0ul);
        //}

        if (WaitForSingleObject(g_pEvent4, INFINITE) == WAIT_OBJECT_0)
        {
            chrono::duration<double> dDuration = chrono::duration_cast<chrono::nanoseconds>(chrono::system_clock::now() - g_StartTime4);
            wcout << L"[" << ullThreadIndex << L"]\t" << dDuration.count() << endl;
            break;
        }
    }

    return 0ul;
}

unsigned long __stdcall Func5(void* const _pParameter)
{
    const unsigned long long ullThreadIndex = reinterpret_cast<unsigned long long>(_pParameter);

    unsigned long long ullThreadSpinCount = 0ull;

    while (true)
    {
        //if (_InterlockedCompareExchange64(&g_pExitThreads5,
        //                                  0ll,
        //                                  1ll) != 0ll)
        //{
        //    chrono::duration<double> dDuration = chrono::duration_cast<chrono::nanoseconds>(chrono::system_clock::now() - g_StartTime5);
        //    wcout << L"[" << ullThreadIndex << L"]\t" << dDuration.count() << endl;
        //    break;
        //}
        //else
        //{
        //    Sleep(0ul);
        //}

        if (WaitForSingleObject(g_pEvent5, INFINITE) == WAIT_OBJECT_0)
        {
            chrono::duration<double> dDuration = chrono::duration_cast<chrono::nanoseconds>(chrono::system_clock::now() - g_StartTime5);
            wcout << L"[" << ullThreadIndex << L"]\t" << dDuration.count() << endl;
            break;
        }
    }

    return 0ul;
}

unsigned long __stdcall Func6(void* const _pParameter)
{
    const unsigned long long ullThreadIndex = reinterpret_cast<unsigned long long>(_pParameter);

    unsigned long long ullThreadSpinCount = 0ull;

    while (true)
    {
        //if (_InterlockedCompareExchange64(&g_pExitThreads6,
        //                                  0ll,
        //                                  1ll) != 0ll)
        //{
        //    chrono::duration<double> dDuration = chrono::duration_cast<chrono::nanoseconds>(chrono::system_clock::now() - g_StartTime6);
        //    wcout << L"[" << ullThreadIndex << L"]\t" << dDuration.count() << endl;
        //    break;
        //}
        //else
        //{
        //    Sleep(0ul);
        //}

        if (WaitForSingleObject(g_pEvent6, INFINITE) == WAIT_OBJECT_0)
        {
            chrono::duration<double> dDuration = chrono::duration_cast<chrono::nanoseconds>(chrono::system_clock::now() - g_StartTime6);
            wcout << L"[" << ullThreadIndex << L"]\t" << dDuration.count() << endl;
            break;
        }
    }

    return 0ul;
}

unsigned long __stdcall Func7(void* const _pParameter)
{
    const unsigned long long ullThreadIndex = reinterpret_cast<unsigned long long>(_pParameter);

    unsigned long long ullThreadSpinCount = 0ull;

    while (true)
    {
        //if (_InterlockedCompareExchange64(&g_pExitThreads7,
        //                                  0ll,
        //                                  1ll) != 0ll)
        //{
        //    chrono::duration<double> dDuration = chrono::duration_cast<chrono::nanoseconds>(chrono::system_clock::now() - g_StartTime7);
        //    wcout << L"[" << ullThreadIndex << L"]\t" << dDuration.count() << endl;
        //    break;
        //}
        //else
        //{
        //    Sleep(0ul);
        //}

        if (WaitForSingleObject(g_pEvent7, INFINITE) == WAIT_OBJECT_0)
        {
            chrono::duration<double> dDuration = chrono::duration_cast<chrono::nanoseconds>(chrono::system_clock::now() - g_StartTime7);
            wcout << L"[" << ullThreadIndex << L"]\t" << dDuration.count() << endl;
            break;
        }
    }

    return 0ul;
}

int main()
{
    g_pEvent0 = CreateEventW(nullptr, 0, 0, nullptr);
    g_pEvent1 = CreateEventW(nullptr, 0, 0, nullptr);
    g_pEvent2 = CreateEventW(nullptr, 0, 0, nullptr);
    g_pEvent3 = CreateEventW(nullptr, 0, 0, nullptr);
    g_pEvent4 = CreateEventW(nullptr, 0, 0, nullptr);
    g_pEvent5 = CreateEventW(nullptr, 0, 0, nullptr);
    g_pEvent6 = CreateEventW(nullptr, 0, 0, nullptr);
    g_pEvent7 = CreateEventW(nullptr, 0, 0, nullptr);
    
    g_pThreads[0] = CreateThread(nullptr,
                                 0ull,
                                 Func0,
                                 reinterpret_cast<void*>(0),
                                 0ul,
                                 &g_pThreadIDs[0]);

    g_pThreads[1] = CreateThread(nullptr,
                                 0ull,
                                 Func1,
                                 reinterpret_cast<void*>(1),
                                 0ul,
                                 &g_pThreadIDs[1]);

    g_pThreads[2] = CreateThread(nullptr,
                                 0ull,
                                 Func2,
                                 reinterpret_cast<void*>(2),
                                 0ul,
                                 &g_pThreadIDs[2]);

    g_pThreads[3] = CreateThread(nullptr,
                                 0ull,
                                 Func3,
                                 reinterpret_cast<void*>(3),
                                 0ul,
                                 &g_pThreadIDs[3]);

    g_pThreads[4] = CreateThread(nullptr,
                                 0ull,
                                 Func4,
                                 reinterpret_cast<void*>(4),
                                 0ul,
                                 &g_pThreadIDs[4]);

    g_pThreads[5] = CreateThread(nullptr,
                                 0ull,
                                 Func5,
                                 reinterpret_cast<void*>(5),
                                 0ul,
                                 &g_pThreadIDs[5]);

    g_pThreads[6] = CreateThread(nullptr,
                                 0ull,
                                 Func6,
                                 reinterpret_cast<void*>(6),
                                 0ul,
                                 &g_pThreadIDs[6]);

    g_pThreads[7] = CreateThread(nullptr,
                                 0ull,
                                 Func7,
                                 reinterpret_cast<void*>(7),
                                 0ul,
                                 &g_pThreadIDs[7]);

    wcout << fixed;
    wcout.precision(9);
    Sleep(1000ul);

    g_StartTime0 = chrono::system_clock::now();
    //_InterlockedExchange64(&g_pExitThreads0, 1ll);
    SetEvent(g_pEvent0);

    g_StartTime1 = chrono::system_clock::now();
    //_InterlockedExchange64(&g_pExitThreads1, 1ll);
    SetEvent(g_pEvent1);

    g_StartTime2 = chrono::system_clock::now();
    //_InterlockedExchange64(&g_pExitThreads2, 1ll);
    SetEvent(g_pEvent2);

    g_StartTime3 = chrono::system_clock::now();
    //_InterlockedExchange64(&g_pExitThreads3, 1ll);
    SetEvent(g_pEvent3);

    g_StartTime4 = chrono::system_clock::now();
    //_InterlockedExchange64(&g_pExitThreads4, 1ll);
    SetEvent(g_pEvent4);

    g_StartTime5 = chrono::system_clock::now();
    //_InterlockedExchange64(&g_pExitThreads5, 1ll);
    SetEvent(g_pEvent5);

    g_StartTime6 = chrono::system_clock::now();
    //_InterlockedExchange64(&g_pExitThreads6, 1ll);
    SetEvent(g_pEvent6);

    g_StartTime7 = chrono::system_clock::now();
    //_InterlockedExchange64(&g_pExitThreads7, 1ll);
    SetEvent(g_pEvent7);

    unsigned long ulExitCode = 10ul;
    while (true)
    {
        GetExitCodeThread(g_pThreads[0], &ulExitCode);
        if (ulExitCode == 0ul)
        {
            break;
        }
    }

    while (true)
    {
        GetExitCodeThread(g_pThreads[1], &ulExitCode);
        if (ulExitCode == 0ul)
        {
            break;
        }
    }

    while (true)
    {
        GetExitCodeThread(g_pThreads[2], &ulExitCode);
        if (ulExitCode == 0ul)
        {
            break;
        }
    }

    while (true)
    {
        GetExitCodeThread(g_pThreads[3], &ulExitCode);
        if (ulExitCode == 0ul)
        {
            break;
        }
    }

    while (true)
    {
        GetExitCodeThread(g_pThreads[4], &ulExitCode);
        if (ulExitCode == 0ul)
        {
            break;
        }
    }

    while (true)
    {
        GetExitCodeThread(g_pThreads[5], &ulExitCode);
        if (ulExitCode == 0ul)
        {
            break;
        }
    }

    while (true)
    {
        GetExitCodeThread(g_pThreads[6], &ulExitCode);
        if (ulExitCode == 0ul)
        {
            break;
        }
    }

    while (true)
    {
        GetExitCodeThread(g_pThreads[7], &ulExitCode);
        if (ulExitCode == 0ul)
        {
            break;
        }
    }
    
    return 0;
}
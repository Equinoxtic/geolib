unsigned get_sleep_time(unsigned ms)
{
	return (ms * 1000);
}

#ifdef _WIN32

#include<Windows.h>

void sleep(unsigned ms)
{
	Sleep(get_sleep_time(ms));
}

void nsleep(unsigned ms)
{
	Sleep(ms);
}

#else

#include<unistd.h>

void sleep(unsigned ms)
{
	usleep(get_sleep_time(ms));
}

void nsleep(unsigned ms)
{
	usleep(ms);
}

#endif

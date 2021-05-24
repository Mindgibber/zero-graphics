// Include TTF module

#include <stddef.h>

// #define NULL ((void*)0)
// typedef unsigned long long size_t;

extern void zerog_panic(char const * msg);

void * zerog_renderer2d_alloc(void * c_void, size_t size);
void zerog_renderer2d_free(void * user_data, void * ptr);


int zerog_ifloor(double v);
int zerog_iceil(double v);
double zerog_sqrt(double v);
double zerog_pow(double a, double b);
double zerog_fmod(double a, double b);
double zerog_cos(double v);
double zerog_acos(double v);
double zerog_fabs(double v);
size_t zerog_strlen(char const * str);

void * zerog_memcpy(void * dst, void const * src, size_t num);
void * zerog_memset(void * ptr, int value, size_t num);

#define STBTT_ifloor(x)    zerog_ifloor(x)
#define STBTT_iceil(x)     zerog_iceil(x)
#define STBTT_sqrt(x)      zerog_sqrt(x)
#define STBTT_pow(x,y)     zerog_pow(x,y)
#define STBTT_fmod(x,y)    zerog_fmod(x,y)
#define STBTT_cos(x)       zerog_cos(x)
#define STBTT_acos(x)      zerog_acos(x)
#define STBTT_fabs(x)      zerog_fabs(x)
#define STBTT_strlen(x)    zerog_strlen(x)
#define STBTT_memcpy       zerog_memcpy
#define STBTT_memset       zerog_memset

#define STBTT_malloc(_Size, _UserData) zerog_renderer2d_alloc(_UserData, _Size)
#define STBTT_free(_Ptr, _UserData) zerog_renderer2d_free(_UserData, _Ptr)
#define STBTT_assert(_Assertion) do { if((_Assertion) == 0) zerog_panic("Assertion " #_Assertion " failed!");  } while(0)
#define STB_TRUETYPE_IMPLEMENTATION

#include <stb_truetype.h>

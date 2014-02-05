#ifdef MATHFUNCSDLL_EXPORTS
#define PROCESSINGDLL_API __declspec(dllexport) 
#else
#define PROCESSINGDLL_API __declspec(dllimport) 
#endif

namespace LibProcessing
{
	class LibProcessing
	{
		static PROCESSINGDLL_API void TestFunction();
	};
}
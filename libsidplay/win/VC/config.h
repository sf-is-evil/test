/* Setup for Microsoft Visual C++ Version 5 */
#ifndef _config_h_
#define _config_h_

#define PACKAGE "libsidplay"
#define VERSION "2.1.0a3"

/* Define if your C++ compiler implements exception-handling.  */
/* Note: exception specification is only available for MSVC > 6 */
#if _MSC_VER > 1200
#  define HAVE_EXCEPTIONS
#endif

/* Define if you support file names longer than 14 characters.  */
#define HAVE_LONG_FILE_NAMES

/* Define if you have the <strstrea.h> header file.  */
#define HAVE_STRSTREA_H

/* Define if ``ios::nocreate'' is supported. */
//#define HAVE_IOS_NOCREATE

#endif // _config_h_

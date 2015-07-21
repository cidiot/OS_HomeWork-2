/**----------------------------------------------------------------------------
 * 
 *-----------------------------------------------------------------------------
 * All rights reserved by Noh,Yonghwan (fixbrain@gmail.com, unsorted@msn.com)
 *-----------------------------------------------------------------------------
 *
**---------------------------------------------------------------------------*/

// read 
// https://msdn.microsoft.com/en-us/library/windows/desktop/aa366542(v=vs.85).aspx


#include "stdafx.h"
#include "StopWatch.h"
#include "mmio.h"
#include <conio.h>
#include "FIleIoHelperClass.h"
#include <crtdbg.h>

int _tmain(int argc, _TCHAR* argv[])
{
//	printf( "Hello~ _tmain\n" );
//	read_file_memory();

	_ASSERTE( create_very_big_file( L"c:\\tmp\\big.txt", 1000 ) );
	/*
	StopWatch sw;
	sw.Start();
	_ASSERTE( file_copy_using_read_write( L"c:\\tmp\\big.txt", L"c:\\tmp\\big2.txt" ) );
	sw.Stop();

	print( "[Info] time elapsed = %f", sw.GetDurationSecond() );
	*/
	StopWatch sw2;
	sw2.Start();
	
	LARGE_INTEGER offset;
	offset.QuadPart = 0;
	LARGE_INTEGER size;
	//size.QuadPart = GetFileSize(d,);
	FileIoHelper* fh = new FileIoHelper();

	while( offset.QuadPart >= size.QuadPart )
	{
		FIOReadFromFile( offset, ( 512 * 1024 ), );
	}

	//_ASSERTE( file_copy_using_memory_map( L"c:\\tmp\\big.txt", L"c:\\tmp\\big2.txt" ) );
	sw2.Stop();
	
	print( "[Info] time elapsed = %f", sw2.GetDurationSecond() );

	return 0;
}


# Created by Diogo Rodrigues Roessler
#

# MinGW compiler
GCC = g++

# I do no compile header file
INCLUDE = \
	Inc/ipv4_inc/*.h

# Compile source path
SOURCE = \
	Source/*.cpp \
	Source/ipv4_src/*.cpp

OUT = \
	-o Bin64/

# MinGW compiler
# Tester Mingw64 default
mingw =Mingw64_test.exe

# MinGW release
mingw_release =Mingw64_release.exe

gw:
	$(GCC) $(SOURCE) $(INCLUDE) $(OUT)$(mingw)

gw_release:
	$(GCC) $(SOURCE) $(INCLUDE) $(OUT)$(mingw_release)


# MS VC++ compiler
# MSVC
#MSVC = cl.exe
#MSVC_LINK = link.exe /ERRORREPORT:PROMPT /OUT:"Bin64/vc_test.exe" /INCREMENTAL /NOLOGO \
#	/MANIFESTUAC:"level='asInvoker' uiAccess='false'" /SUBSYSTEM:CONSOLE \
#	/TLBID:1 /DYNAMICBASE /NXCOMPAT /MACHINE:X64
#
#MSVC_LINK_OPTIONS = \
#	kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib
#
#MSVC_OPTION = /EHsc /link
#
#MSVC_OUT = /out:
#
#MSVC_BIN64_PATH = Bin64/
#
## Tester VC++ default
#vc_bin_test =vc_test.exe
#
## VC++ release
#vc_bin_release =vc_release.exe
#
## Tester command line
#vc:
#	cd $(MSVC_BIN64_PATH)
#	$(MSVC) /c $(SOURCE) $(MSVC_OPTION) $(MSVC_OUT)$(vc_bin_test)
#	$(MSVC_LINK) $(MSVC_LINK_OPTIONS)
#
## Release command line
#vc_release:
#	$(MSVC) $(SOURCE) $(MSVC_OPTION) $(MSVC_OUT)$(vc_bin_release)
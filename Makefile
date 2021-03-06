#############################################################################
# Makefile for building: EmptyQT
# Generated by qmake (2.01a) (Qt 4.8.7) on: Thu Oct 6 15:37:51 2016
# Project:  EmptyQT.pro
# Template: app
# Command: /usr/local/Trolltech/Qt-4.8.7/bin/qmake -o Makefile EmptyQT.pro
#############################################################################

####### Compiler, tools and options

CC            = gcc
CXX           = g++
DEFINES       = -DQT_NO_DEBUG -DQT_GUI_LIB -DQT_CORE_LIB -DQT_SHARED
CFLAGS        = -pipe -O2 -Wall -W -D_REENTRANT $(DEFINES)
CXXFLAGS      = -pipe -O2 -Wall -W -D_REENTRANT $(DEFINES)
INCPATH       = -I/usr/local/Trolltech/Qt-4.8.7/mkspecs/linux-g++ -I. -I/usr/local/Trolltech/Qt-4.8.7/include/QtCore -I/usr/local/Trolltech/Qt-4.8.7/include/QtGui -I/usr/local/Trolltech/Qt-4.8.7/include -I.
LINK          = g++
LFLAGS        = -Wl,-O1 -Wl,-rpath,/usr/local/Trolltech/Qt-4.8.7/lib
LIBS          = $(SUBLIBS)  -L/usr/local/Trolltech/Qt-4.8.7/lib -lQtGui -L/usr/local/Trolltech/Qt-4.8.7/lib -L/usr/X11R6/lib -lQtCore -lpthread 
AR            = ar cqs
RANLIB        = 
QMAKE         = /usr/local/Trolltech/Qt-4.8.7/bin/qmake
TAR           = tar -cf
COMPRESS      = gzip -9f
COPY          = cp -f
SED           = sed
COPY_FILE     = $(COPY)
COPY_DIR      = $(COPY) -r
STRIP         = strip
INSTALL_FILE  = install -m 644 -p
INSTALL_DIR   = $(COPY_DIR)
INSTALL_PROGRAM = install -m 755 -p
DEL_FILE      = rm -f
SYMLINK       = ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p

####### Output directory

OBJECTS_DIR   = ./

####### Files

SOURCES       = emptyqtsrc.cpp \
		cmainwindow.cpp \
		mainwindow.cpp \
		thumbnildialog.cpp \
		stackeddialog.cpp \
		fullviewdlg.cpp \
		window.cpp \
		imageviewlistener.cpp moc_mainwindow.cpp \
		moc_cmainwindow.cpp \
		moc_thumbnildialog.cpp \
		moc_stackeddialog.cpp \
		moc_fullviewdlg.cpp \
		moc_window.cpp \
		moc_imageviewlistener.cpp
OBJECTS       = emptyqtsrc.o \
		cmainwindow.o \
		mainwindow.o \
		thumbnildialog.o \
		stackeddialog.o \
		fullviewdlg.o \
		window.o \
		imageviewlistener.o \
		moc_mainwindow.o \
		moc_cmainwindow.o \
		moc_thumbnildialog.o \
		moc_stackeddialog.o \
		moc_fullviewdlg.o \
		moc_window.o \
		moc_imageviewlistener.o
DIST          = /usr/local/Trolltech/Qt-4.8.7/mkspecs/common/unix.conf \
		/usr/local/Trolltech/Qt-4.8.7/mkspecs/common/linux.conf \
		/usr/local/Trolltech/Qt-4.8.7/mkspecs/common/gcc-base.conf \
		/usr/local/Trolltech/Qt-4.8.7/mkspecs/common/gcc-base-unix.conf \
		/usr/local/Trolltech/Qt-4.8.7/mkspecs/common/g++-base.conf \
		/usr/local/Trolltech/Qt-4.8.7/mkspecs/common/g++-unix.conf \
		/usr/local/Trolltech/Qt-4.8.7/mkspecs/qconfig.pri \
		/usr/local/Trolltech/Qt-4.8.7/mkspecs/features/qt_functions.prf \
		/usr/local/Trolltech/Qt-4.8.7/mkspecs/features/qt_config.prf \
		/usr/local/Trolltech/Qt-4.8.7/mkspecs/features/exclusive_builds.prf \
		/usr/local/Trolltech/Qt-4.8.7/mkspecs/features/default_pre.prf \
		/usr/local/Trolltech/Qt-4.8.7/mkspecs/features/release.prf \
		/usr/local/Trolltech/Qt-4.8.7/mkspecs/features/default_post.prf \
		/usr/local/Trolltech/Qt-4.8.7/mkspecs/features/shared.prf \
		/usr/local/Trolltech/Qt-4.8.7/mkspecs/features/unix/gdb_dwarf_index.prf \
		/usr/local/Trolltech/Qt-4.8.7/mkspecs/features/warn_on.prf \
		/usr/local/Trolltech/Qt-4.8.7/mkspecs/features/qt.prf \
		/usr/local/Trolltech/Qt-4.8.7/mkspecs/features/unix/thread.prf \
		/usr/local/Trolltech/Qt-4.8.7/mkspecs/features/moc.prf \
		/usr/local/Trolltech/Qt-4.8.7/mkspecs/features/resources.prf \
		/usr/local/Trolltech/Qt-4.8.7/mkspecs/features/uic.prf \
		/usr/local/Trolltech/Qt-4.8.7/mkspecs/features/yacc.prf \
		/usr/local/Trolltech/Qt-4.8.7/mkspecs/features/lex.prf \
		/usr/local/Trolltech/Qt-4.8.7/mkspecs/features/include_source_dir.prf \
		EmptyQT.pro
QMAKE_TARGET  = EmptyQT
DESTDIR       = 
TARGET        = EmptyQT

first: all
####### Implicit rules

.SUFFIXES: .o .c .cpp .cc .cxx .C

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.C.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.c.o:
	$(CC) -c $(CFLAGS) $(INCPATH) -o "$@" "$<"

####### Build rules

all: Makefile $(TARGET)

$(TARGET):  $(OBJECTS)  
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)

Makefile: EmptyQT.pro  /usr/local/Trolltech/Qt-4.8.7/mkspecs/linux-g++/qmake.conf /usr/local/Trolltech/Qt-4.8.7/mkspecs/common/unix.conf \
		/usr/local/Trolltech/Qt-4.8.7/mkspecs/common/linux.conf \
		/usr/local/Trolltech/Qt-4.8.7/mkspecs/common/gcc-base.conf \
		/usr/local/Trolltech/Qt-4.8.7/mkspecs/common/gcc-base-unix.conf \
		/usr/local/Trolltech/Qt-4.8.7/mkspecs/common/g++-base.conf \
		/usr/local/Trolltech/Qt-4.8.7/mkspecs/common/g++-unix.conf \
		/usr/local/Trolltech/Qt-4.8.7/mkspecs/qconfig.pri \
		/usr/local/Trolltech/Qt-4.8.7/mkspecs/features/qt_functions.prf \
		/usr/local/Trolltech/Qt-4.8.7/mkspecs/features/qt_config.prf \
		/usr/local/Trolltech/Qt-4.8.7/mkspecs/features/exclusive_builds.prf \
		/usr/local/Trolltech/Qt-4.8.7/mkspecs/features/default_pre.prf \
		/usr/local/Trolltech/Qt-4.8.7/mkspecs/features/release.prf \
		/usr/local/Trolltech/Qt-4.8.7/mkspecs/features/default_post.prf \
		/usr/local/Trolltech/Qt-4.8.7/mkspecs/features/shared.prf \
		/usr/local/Trolltech/Qt-4.8.7/mkspecs/features/unix/gdb_dwarf_index.prf \
		/usr/local/Trolltech/Qt-4.8.7/mkspecs/features/warn_on.prf \
		/usr/local/Trolltech/Qt-4.8.7/mkspecs/features/qt.prf \
		/usr/local/Trolltech/Qt-4.8.7/mkspecs/features/unix/thread.prf \
		/usr/local/Trolltech/Qt-4.8.7/mkspecs/features/moc.prf \
		/usr/local/Trolltech/Qt-4.8.7/mkspecs/features/resources.prf \
		/usr/local/Trolltech/Qt-4.8.7/mkspecs/features/uic.prf \
		/usr/local/Trolltech/Qt-4.8.7/mkspecs/features/yacc.prf \
		/usr/local/Trolltech/Qt-4.8.7/mkspecs/features/lex.prf \
		/usr/local/Trolltech/Qt-4.8.7/mkspecs/features/include_source_dir.prf \
		/usr/local/Trolltech/Qt-4.8.7/lib/libQtGui.prl \
		/usr/local/Trolltech/Qt-4.8.7/lib/libQtCore.prl
	$(QMAKE) -o Makefile EmptyQT.pro
/usr/local/Trolltech/Qt-4.8.7/mkspecs/common/unix.conf:
/usr/local/Trolltech/Qt-4.8.7/mkspecs/common/linux.conf:
/usr/local/Trolltech/Qt-4.8.7/mkspecs/common/gcc-base.conf:
/usr/local/Trolltech/Qt-4.8.7/mkspecs/common/gcc-base-unix.conf:
/usr/local/Trolltech/Qt-4.8.7/mkspecs/common/g++-base.conf:
/usr/local/Trolltech/Qt-4.8.7/mkspecs/common/g++-unix.conf:
/usr/local/Trolltech/Qt-4.8.7/mkspecs/qconfig.pri:
/usr/local/Trolltech/Qt-4.8.7/mkspecs/features/qt_functions.prf:
/usr/local/Trolltech/Qt-4.8.7/mkspecs/features/qt_config.prf:
/usr/local/Trolltech/Qt-4.8.7/mkspecs/features/exclusive_builds.prf:
/usr/local/Trolltech/Qt-4.8.7/mkspecs/features/default_pre.prf:
/usr/local/Trolltech/Qt-4.8.7/mkspecs/features/release.prf:
/usr/local/Trolltech/Qt-4.8.7/mkspecs/features/default_post.prf:
/usr/local/Trolltech/Qt-4.8.7/mkspecs/features/shared.prf:
/usr/local/Trolltech/Qt-4.8.7/mkspecs/features/unix/gdb_dwarf_index.prf:
/usr/local/Trolltech/Qt-4.8.7/mkspecs/features/warn_on.prf:
/usr/local/Trolltech/Qt-4.8.7/mkspecs/features/qt.prf:
/usr/local/Trolltech/Qt-4.8.7/mkspecs/features/unix/thread.prf:
/usr/local/Trolltech/Qt-4.8.7/mkspecs/features/moc.prf:
/usr/local/Trolltech/Qt-4.8.7/mkspecs/features/resources.prf:
/usr/local/Trolltech/Qt-4.8.7/mkspecs/features/uic.prf:
/usr/local/Trolltech/Qt-4.8.7/mkspecs/features/yacc.prf:
/usr/local/Trolltech/Qt-4.8.7/mkspecs/features/lex.prf:
/usr/local/Trolltech/Qt-4.8.7/mkspecs/features/include_source_dir.prf:
/usr/local/Trolltech/Qt-4.8.7/lib/libQtGui.prl:
/usr/local/Trolltech/Qt-4.8.7/lib/libQtCore.prl:
qmake:  FORCE
	@$(QMAKE) -o Makefile EmptyQT.pro

dist: 
	@$(CHK_DIR_EXISTS) .tmp/EmptyQT1.0.0 || $(MKDIR) .tmp/EmptyQT1.0.0 
	$(COPY_FILE) --parents $(SOURCES) $(DIST) .tmp/EmptyQT1.0.0/ && $(COPY_FILE) --parents mainwindow.h cmainwindow.h thumbnildialog.h stackeddialog.h fullviewdlg.h window.h imageviewlistener.h .tmp/EmptyQT1.0.0/ && $(COPY_FILE) --parents emptyqtsrc.cpp cmainwindow.cpp mainwindow.cpp thumbnildialog.cpp stackeddialog.cpp fullviewdlg.cpp window.cpp imageviewlistener.cpp .tmp/EmptyQT1.0.0/ && (cd `dirname .tmp/EmptyQT1.0.0` && $(TAR) EmptyQT1.0.0.tar EmptyQT1.0.0 && $(COMPRESS) EmptyQT1.0.0.tar) && $(MOVE) `dirname .tmp/EmptyQT1.0.0`/EmptyQT1.0.0.tar.gz . && $(DEL_FILE) -r .tmp/EmptyQT1.0.0


clean:compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


####### Sub-libraries

distclean: clean
	-$(DEL_FILE) $(TARGET) 
	-$(DEL_FILE) Makefile


check: first

mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

compiler_moc_header_make_all: moc_mainwindow.cpp moc_cmainwindow.cpp moc_thumbnildialog.cpp moc_stackeddialog.cpp moc_fullviewdlg.cpp moc_window.cpp moc_imageviewlistener.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) moc_mainwindow.cpp moc_cmainwindow.cpp moc_thumbnildialog.cpp moc_stackeddialog.cpp moc_fullviewdlg.cpp moc_window.cpp moc_imageviewlistener.cpp
moc_mainwindow.cpp: mainwindow.h
	/usr/local/Trolltech/Qt-4.8.7/bin/moc $(DEFINES) $(INCPATH) mainwindow.h -o moc_mainwindow.cpp

moc_cmainwindow.cpp: cmainwindow.h
	/usr/local/Trolltech/Qt-4.8.7/bin/moc $(DEFINES) $(INCPATH) cmainwindow.h -o moc_cmainwindow.cpp

moc_thumbnildialog.cpp: thumbnildialog.h
	/usr/local/Trolltech/Qt-4.8.7/bin/moc $(DEFINES) $(INCPATH) thumbnildialog.h -o moc_thumbnildialog.cpp

moc_stackeddialog.cpp: thumbnildialog.h \
		stackeddialog.h
	/usr/local/Trolltech/Qt-4.8.7/bin/moc $(DEFINES) $(INCPATH) stackeddialog.h -o moc_stackeddialog.cpp

moc_fullviewdlg.cpp: fullviewdlg.h
	/usr/local/Trolltech/Qt-4.8.7/bin/moc $(DEFINES) $(INCPATH) fullviewdlg.h -o moc_fullviewdlg.cpp

moc_window.cpp: window.h
	/usr/local/Trolltech/Qt-4.8.7/bin/moc $(DEFINES) $(INCPATH) window.h -o moc_window.cpp

moc_imageviewlistener.cpp: imageviewlistener.h
	/usr/local/Trolltech/Qt-4.8.7/bin/moc $(DEFINES) $(INCPATH) imageviewlistener.h -o moc_imageviewlistener.cpp

compiler_rcc_make_all:
compiler_rcc_clean:
compiler_image_collection_make_all: qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) qmake_image_collection.cpp
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all:
compiler_uic_clean:
compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_moc_header_clean 

####### Compile

emptyqtsrc.o: emptyqtsrc.cpp window.h \
		mainwindow.h \
		emptyqtsrc.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o emptyqtsrc.o emptyqtsrc.cpp

cmainwindow.o: cmainwindow.cpp cmainwindow.h \
		stackeddialog.h \
		thumbnildialog.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o cmainwindow.o cmainwindow.cpp

mainwindow.o: mainwindow.cpp mainwindow.h \
		stackeddialog.h \
		thumbnildialog.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o mainwindow.o mainwindow.cpp

thumbnildialog.o: thumbnildialog.cpp thumbnildialog.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o thumbnildialog.o thumbnildialog.cpp

stackeddialog.o: stackeddialog.cpp stackeddialog.h \
		thumbnildialog.h \
		fullviewdlg.h \
		imageviewlistener.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o stackeddialog.o stackeddialog.cpp

fullviewdlg.o: fullviewdlg.cpp fullviewdlg.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o fullviewdlg.o fullviewdlg.cpp

window.o: window.cpp window.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o window.o window.cpp

imageviewlistener.o: imageviewlistener.cpp imageviewlistener.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o imageviewlistener.o imageviewlistener.cpp

moc_mainwindow.o: moc_mainwindow.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_mainwindow.o moc_mainwindow.cpp

moc_cmainwindow.o: moc_cmainwindow.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_cmainwindow.o moc_cmainwindow.cpp

moc_thumbnildialog.o: moc_thumbnildialog.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_thumbnildialog.o moc_thumbnildialog.cpp

moc_stackeddialog.o: moc_stackeddialog.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_stackeddialog.o moc_stackeddialog.cpp

moc_fullviewdlg.o: moc_fullviewdlg.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_fullviewdlg.o moc_fullviewdlg.cpp

moc_window.o: moc_window.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_window.o moc_window.cpp

moc_imageviewlistener.o: moc_imageviewlistener.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_imageviewlistener.o moc_imageviewlistener.cpp

####### Install

install:   FORCE

uninstall:   FORCE

FORCE:


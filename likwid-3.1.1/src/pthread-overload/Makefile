# =======================================================================================
#  
#      Filename:  Makefile
# 
#      Description:  pthread-overload Makefile
# 
#      Version:   3.1.1
#      Released:  12.2.2014
# 
#      Author:  Jan Treibig (jt), jan.treibig@gmail.com
#      Project:  likwid
#
#      Copyright (C) 2014 Jan Treibig
#
#      This program is free software: you can redistribute it and/or modify it under
#      the terms of the GNU General Public License as published by the Free Software
#      Foundation, either version 3 of the License, or (at your option) any later
#      version.
#
#      This program is distributed in the hope that it will be useful, but WITHOUT ANY
#      WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
#      PARTICULAR PURPOSE.  See the GNU General Public License for more details.
#
#      You should have received a copy of the GNU General Public License along with
#      this program.  If not, see <http://www.gnu.org/licenses/>.
#
# =======================================================================================

include  ../../config.mk
include  ../../make/include_$(COMPILER).mk

TARGET   = liblikwidpin.so

ifneq ($(COLOR),NONE)
DEFINES += -DCOLOR=$(COLOR)
endif

DEFINES  += -DMAX_NUM_THREADS=$(MAX_NUM_THREADS)
INCLUDES += -I../includes
LIBS     += -ldl
CPPFLAGS := $(CPPFLAGS) $(DEFINES) $(INCLUDES) 

all: $(TARGET)

$(TARGET): pthread-overload.c
	$(CC) $(CFLAGS) $(ANSI_CFLAGS) $(CPPFLAGS) $(INCLUDES) $(SHARED_CFLAGS) $(SHARED_LFLAGS) -o ../../$(TARGET) pthread-overload.c $(LIBS)


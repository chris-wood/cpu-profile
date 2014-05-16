/*
 * =======================================================================================
 *
 *      Filename:  likwid_f90_interface.c
 *
 *      Description: F90 interface for marker API
 *
 *      Version:   3.1.1
 *      Released:  12.2.2014
 *
 *      Author:  Jan Treibig (jt), jan.treibig@gmail.com
 *      Project:  likwid
 *
 *      Copyright (C) 2014 Jan Treibig
 *
 *      This program is free software: you can redistribute it and/or modify it under
 *      the terms of the GNU General Public License as published by the Free Software
 *      Foundation, either version 3 of the License, or (at your option) any later
 *      version.
 *
 *      This program is distributed in the hope that it will be useful, but WITHOUT ANY
 *      WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
 *      PARTICULAR PURPOSE.  See the GNU General Public License for more details.
 *
 *      You should have received a copy of the GNU General Public License along with
 *      this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * =======================================================================================
 */

#include <stdlib.h>
#include <string.h>

#include <likwid.h>

void likwid_markerinit_(void)
{
    likwid_markerInit();
}

void likwid_markerthreadinit_(void)
{
    likwid_markerThreadInit();
}

void likwid_markerclose_(void)
{
    likwid_markerClose();
}

void likwid_markerstartregion_(char* regionTag, int len)
{
    char* tmp = (char*) malloc((len+1) * sizeof(char) );
    strncpy(tmp, regionTag, len * sizeof(char) );

    for (int i=(len-1); len > 0; len--)
    {
        if (tmp[i] != ' ') {
            tmp[i+1] = 0;
            break;
        }
    }

    likwid_markerStartRegion( tmp );
	free(tmp);
}

void likwid_markerstopregion_(char* regionTag, int len)
{
    char* tmp = (char*) malloc((len+1) * sizeof(char));
    strncpy(tmp, regionTag, len * sizeof(char) );

    for (int i=(len-1); len > 0; len--)
    {
        if (tmp[i] != ' ') {
            tmp[i+1] = 0;
            break;
        }
    }

    likwid_markerStopRegion( tmp );
	free(tmp);
}


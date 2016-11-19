/*
    bench.h - Demo program to benchmark open-source compression algorithm
    Copyright (C) Yann Collet 2012-2015

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License along
    with this program; if not, write to the Free Software Foundation, Inc.,
    51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.

    You can contact the author at :
    - LZ5 source repository : https://github.com/inikep/lz5
*/
#ifndef BENCH_H_1212
#define BENCH_H_1212

/* Main function */
int BMK_benchFiles(const char** fileNamesTable, unsigned nbFiles, int cLevel, int cLevelLast);

/* Set Parameters */
void BMK_SetBlockSize(size_t bsize);
void BMK_SetNbIterations(unsigned nbLoops);


#endif   /* BENCH_H_1212 */ 
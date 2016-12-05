/*
    Copyright 2016-2017 StapleButter

    This file is part of melonDS.

    melonDS is free software: you can redistribute it and/or modify it under
    the terms of the GNU General Public License as published by the Free
    Software Foundation, either version 3 of the License, or (at your option)
    any later version.

    melonDS is distributed in the hope that it will be useful, but WITHOUT ANY
    WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
    FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.

    You should have received a copy of the GNU General Public License along
    with melonDS. If not, see http://www.gnu.org/licenses/.
*/

#ifndef ARMINTERPRETER_H
#define ARMINTERPRETER_H

#include "types.h"
#include "ARM.h"

namespace ARMInterpreter
{

s32 A_MSR_IMM(ARM* cpu);
s32 A_MSR_REG(ARM* cpu);
s32 A_MRS(ARM* cpu);

extern s32 (*ARMInstrTable[4096])(ARM* cpu);
extern s32 (*THUMBInstrTable[1024])(ARM* cpu);

s32 A_BLX_IMM(ARM* cpu); // I'm a special one look at me

}

#endif // ARMINTERPRETER_H
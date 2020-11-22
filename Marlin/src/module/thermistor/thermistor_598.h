/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

// 100k Zonestar thermistor. Adjusted By wmariz (HOTEND)
const temp_entry_t temptable_598[] PROGMEM = {
   { OV(   1), 713 },
   { OV(  14), 300 }, // Top rating 300C
   { OV(  16), 290 },
   { OV(  19), 286 },
   { OV(  23), 274 },
   { OV(  27), 264 },
   { OV(  31), 254 },
   { OV(  37), 243 },
   { OV(  47), 231 },
   { OV(  57), 222 },
   { OV(  68), 213 },
   { OV(  84), 203 },
   { OV( 100), 194 },
   { OV( 128), 183 },
   { OV( 155), 174 },
   { OV( 189), 162 },
   { OV( 230), 152 },
   { OV( 278), 142 },
   { OV( 336), 132 }, 
   { OV( 405), 121 },
   { OV( 475), 112 },
   { OV( 555), 100 },
   { OV( 636),  91 },
   { OV( 712),  80 },
   { OV( 783),  71 },
   { OV( 842),  61 },
   { OV( 895),  50 },
   { OV( 933),  41 },
   { OV( 962),  30 },
   { OV( 981),  24 },
   { OV( 986),  20 },
   { OV(1000),  10 },
   { OV(1010),   0 }
};

/*
 *
 *  LOTUS by hadez@shackspace.de 2011
 *

                   GNU LESSER GENERAL PUBLIC LICENSE
                       Version 3, 29 June 2007

 Copyright (C) 2007 Free Software Foundation, Inc. <http://fsf.org/>
 Everyone is permitted to copy and distribute verbatim copies
 of this license document, but changing it is not allowed.


  This version of the GNU Lesser General Public License incorporates
the terms and conditions of version 3 of the GNU General Public
License, supplemented by the additional permissions listed below.

  0. Additional Definitions.

  As used herein, "this License" refers to version 3 of the GNU Lesser
General Public License, and the "GNU GPL" refers to version 3 of the GNU
General Public License.

  "The Library" refers to a covered work governed by this License,
other than an Application or a Combined Work as defined below.

  An "Application" is any work that makes use of an interface provided
by the Library, but which is not otherwise based on the Library.
Defining a subclass of a class defined by the Library is deemed a mode
of using an interface provided by the Library.

  A "Combined Work" is a work produced by combining or linking an
Application with the Library.  The particular version of the Library
with which the Combined Work was made is also called the "Linked
Version".

  The "Minimal Corresponding Source" for a Combined Work means the
Corresponding Source for the Combined Work, excluding any source code
for portions of the Combined Work that, considered in isolation, are
based on the Application, and not on the Linked Version.

  The "Corresponding Application Code" for a Combined Work means the
object code and/or source code for the Application, including any data
and utility programs needed for reproducing the Combined Work from the
Application, but excluding the System Libraries of the Combined Work.

  1. Exception to Section 3 of the GNU GPL.

  You may convey a covered work under sections 3 and 4 of this License
without being bound by section 3 of the GNU GPL.

  2. Conveying Modified Versions.

  If you modify a copy of the Library, and, in your modifications, a
facility refers to a function or data to be supplied by an Application
that uses the facility (other than as an argument passed when the
facility is invoked), then you may convey a copy of the modified
version:

   a) under this License, provided that you make a good faith effort to
   ensure that, in the event an Application does not supply the
   function or data, the facility still operates, and performs
   whatever part of its purpose remains meaningful, or

   b) under the GNU GPL, with none of the additional permissions of
   this License applicable to that copy.

  3. Object Code Incorporating Material from Library Header Files.

  The object code form of an Application may incorporate material from
a header file that is part of the Library.  You may convey such object
code under terms of your choice, provided that, if the incorporated
material is not limited to numerical parameters, data structure
layouts and accessors, or small macros, inline functions and templates
(ten or fewer lines in length), you do both of the following:

   a) Give prominent notice with each copy of the object code that the
   Library is used in it and that the Library and its use are
   covered by this License.

   b) Accompany the object code with a copy of the GNU GPL and this license
   document.

  4. Combined Works.

  You may convey a Combined Work under terms of your choice that,
taken together, effectively do not restrict modification of the
portions of the Library contained in the Combined Work and reverse
engineering for debugging such modifications, if you also do each of
the following:

   a) Give prominent notice with each copy of the Combined Work that
   the Library is used in it and that the Library and its use are
   covered by this License.

   b) Accompany the Combined Work with a copy of the GNU GPL and this license
   document.

   c) For a Combined Work that displays copyright notices during
   execution, include the copyright notice for the Library among
   these notices, as well as a reference directing the user to the
   copies of the GNU GPL and this license document.

   d) Do one of the following:

       0) Convey the Minimal Corresponding Source under the terms of this
       License, and the Corresponding Application Code in a form
       suitable for, and under terms that permit, the user to
       recombine or relink the Application with a modified version of
       the Linked Version to produce a modified Combined Work, in the
       manner specified by section 6 of the GNU GPL for conveying
       Corresponding Source.

       1) Use a suitable shared library mechanism for linking with the
       Library.  A suitable mechanism is one that (a) uses at run time
       a copy of the Library already present on the user's computer
       system, and (b) will operate properly with a modified version
       of the Library that is interface-compatible with the Linked
       Version.

   e) Provide Installation Information, but only if you would otherwise
   be required to provide such information under section 6 of the
   GNU GPL, and only to the extent that such information is
   necessary to install and execute a modified version of the
   Combined Work produced by recombining or relinking the
   Application with a modified version of the Linked Version. (If
   you use option 4d0, the Installation Information must accompany
   the Minimal Corresponding Source and Corresponding Application
   Code. If you use option 4d1, you must provide the Installation
   Information in the manner specified by section 6 of the GNU GPL
   for conveying Corresponding Source.)

  5. Combined Libraries.

  You may place library facilities that are a work based on the
Library side by side in a single library together with other library
facilities that are not Applications and are not covered by this
License, and convey such a combined library under terms of your
choice, if you do both of the following:

   a) Accompany the combined library with a copy of the same work based
   on the Library, uncombined with any other library facilities,
   conveyed under the terms of this License.

   b) Give prominent notice with the combined library that part of it
   is a work based on the Library, and explaining where to find the
   accompanying uncombined form of the same work.

  6. Revised Versions of the GNU Lesser General Public License.

  The Free Software Foundation may publish revised and/or new versions
of the GNU Lesser General Public License from time to time. Such new
versions will be similar in spirit to the present version, but may
differ in detail to address new problems or concerns.

  Each version is given a distinguishing version number. If the
Library as you received it specifies that a certain numbered version
of the GNU Lesser General Public License "or any later version"
applies to it, you have the option of following the terms and
conditions either of that published version or of any later version
published by the Free Software Foundation. If the Library as you
received it does not specify a version number of the GNU Lesser
General Public License, you may choose any version of the GNU Lesser
General Public License ever published by the Free Software Foundation.

  If the Library as you received it specifies that a proxy can decide
whether future versions of the GNU Lesser General Public License shall
apply, that proxy's public statement of acceptance of any version is
permanent authorization for you to choose that version for the
Library.
*
*/


#ifndef _OTUSHID_H_
#define _OTUSHID_H_

#include <stdio.h>

typedef struct OTUSMsg_ {
    unsigned short magic;           // 0x0035
    
    unsigned short jog0Rot;         // 0x0000..0xffff, rollover
      signed short jog0Speed;       // <0: CCW rotation, >0: CW rotation
    
    unsigned int timestamp;         // looks like unixtime, have to check details
    
    unsigned int _0a_0d_reserved;

    unsigned char jog2Rot;          // 0x0000..0x00ff, rollover
    unsigned char jog4Rot;          // 0x0000..0x00ff, rollover
    unsigned char jog3Rot;          // 0x0000..0x00ff, rollover
    unsigned char jog1Rot;          // 0x0000..0x00ff, rollover
    
    unsigned short rotAGain;        // 0x0000..0x7dc0, mask: 0xfff0
    unsigned short rotBGain;        // 0x0000..0x7dc0, mask: 0xfff0
    unsigned short rotAHigh;        // 0x0000..0x7dc0, mask: 0xfff0
    unsigned short rotBHigh;        // 0x0000..0x7dc0, mask: 0xfff0
    unsigned short rotAMid;         // 0x0000..0x7dc0, mask: 0xfff0
    unsigned short rotBMid;         // 0x0000..0x7dc0, mask: 0xfff0
    unsigned short rotALow;         // 0x0000..0x7dc0, mask: 0xfff0
    unsigned short rotBLow;         // 0x0000..0x7dc0, mask: 0xfff0

    unsigned short rotXFader;       // 0x0000..0x7dc0, mask: 0xfff0
    unsigned short rotMaster;       // 0x0000..0x7dc0, mask: 0xfff0
    
    unsigned short padY;            // 0x0000..0xffff, 0x0000:bottom 
    unsigned short padX;            // 0x0000..0xffff, 0x0000:left
    
    unsigned short pitchA;          // 0x0000..0xffff
    unsigned short pitchB;          // 0x0000..0xffff

    unsigned int buttons;           // one-hot bitmask for 32 button actions

    unsigned char filler;
    unsigned char msgCounter;      // 0x0000..0xff00, mask:0xff00, rollover
    unsigned short status;          // 0x0000: Deck A, 0x0001: Deck B
    
    unsigned char _36_reserved;
    unsigned char _37_reserved;
    unsigned int _38_3b_reserved;
    unsigned int _3c_3f_reserved;
} __attribute__((__packed__)) OTUSMsg;

/*
struct OTUSControl {
    unsigned int id;
    unsigned int mask;
    unsigned int shift;
};
*/

// button mapping for the OTUSMsg.buttons field
#define OTUS_BUTTON_PLAYPAUSE        0x00008000
#define OTUS_BUTTON_UNKNOWN3         0x00004000
#define OTUS_BUTTON_JOG3             0x00002000
#define OTUS_BUTTON_RETURNLEFT       0x00001000
#define OTUS_BUTTON_SHIFT            0x00000800
#define OTUS_BUTTON_RETURNRIGHT      0x00000400
#define OTUS_BUTTON_JOG4             0x00000200
#define OTUS_BUTTON_PITCH_SCALE      0x00000100
#define OTUS_BUTTON_LOOP             0x00000080
#define OTUS_BUTTON_LOOPOUT          0x00000040
#define OTUS_BUTTON_LOOPIN           0x00000020
#define OTUS_BUTTON_LOOPFULL         0x00000010
#define OTUS_BUTTON_LOOPHALF         0x00000008
#define OTUS_BUTTON_LOOPQUARTER      0x00000004
#define OTUS_BUTTON_LOOPEIGTH        0x00000002
#define OTUS_BUTTON_JOG2             0x00000001
#define OTUS_BUTTON_XYPAD            0x80000000
#define OTUS_BUTTON_PITCH            0x40000000
#define OTUS_BUTTON_USER5            0x20000000
#define OTUS_BUTTON_USER4            0x10000000
#define OTUS_BUTTON_USER3            0x08000000
#define OTUS_BUTTON_USER2            0x04000000
#define OTUS_BUTTON_USER1            0x02000000
#define OTUS_BUTTON_USER0            0x01000000
#define OTUS_BUTTON_MOUSERIGHT       0x00800000
#define OTUS_BUTTON_MOUSELEFT        0x00400000
#define OTUS_BUTTON_JOG0             0x00200000
#define OTUS_BUTTON_JOG1             0x00100000
#define OTUS_BUTTON_FASTFORWARD      0x00080000
#define OTUS_BUTTON_UNKNOWN1         0x00040000
#define OTUS_BUTTON_UNKNOWN2         0x00020000
#define OTUS_BUTTON_CUE              0x00010000

// IDs for value knobs
#define OTUS_VALUE_JOG0ROT          0   
#define OTUS_VALUE_JOG0SPEED        1   
#define OTUS_VALUE_JOG1ROT          2   
#define OTUS_VALUE_JOG2ROT          3   
#define OTUS_VALUE_JOG3ROT          4   
#define OTUS_VALUE_JOG4ROT          5   
#define OTUS_VALUE_GAINA            6   
#define OTUS_VALUE_GAINB            7   
#define OTUS_VALUE_GAINM            8   
#define OTUS_VALUE_HIGHA            9   
#define OTUS_VALUE_HIGHB            10  
#define OTUS_VALUE_MIDA             11  
#define OTUS_VALUE_MIDB             12  
#define OTUS_VALUE_LOWA             13  
#define OTUS_VALUE_LOWB             14  
#define OTUS_VALUE_XFADER           15  
#define OTUS_VALUE_PITCHA           16  
#define OTUS_VALUE_PITCHB           17  
#define OTUS_VALUE_PADX             18  
#define OTUS_VALUE_PADY             19  

// a single element of the button lookup table
typedef struct OTUSButton_ {
    unsigned int id;
    const char* name;
} OTUSButton; 

enum OTUS_ERROR {
    OTUS_ERROR_OK,
    OTUS_ERROR_NULL_POINTER_PARAM,
    OTUS_ERROR_FAILED_TO_SYNC_PACKET_STREAM,
    OTUS_ERROR_READ_ERROR,
    OTUS_ERROR_NOT_IMPLEMENTED,
};

int OTUS_readMessage(FILE* fh, OTUSMsg* msg);

int OTUS_dumpMessageToConsole(const OTUSMsg* msg);


#endif //_OTUSHID_H_

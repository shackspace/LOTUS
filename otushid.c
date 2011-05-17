/*
 * LOTUS by hadez@shackspace.de 2011
 *
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

#include <stdio.h>
#include <string.h>

#include "otushid.h"
#include <stdlib.h>

#define BUTTON_MAP(id) { id, #id },

const OTUSButton OTUSButtonMap[] = {
    BUTTON_MAP(OTUS_BUTTON_PLAYPAUSE)
    BUTTON_MAP(OTUS_BUTTON_UNKNOWN3)
    BUTTON_MAP(OTUS_BUTTON_JOG3)
    BUTTON_MAP(OTUS_BUTTON_RETURNLEFT)
    BUTTON_MAP(OTUS_BUTTON_SHIFT)
    BUTTON_MAP(OTUS_BUTTON_RETURNRIGHT)
    BUTTON_MAP(OTUS_BUTTON_JOG4)
    BUTTON_MAP(OTUS_BUTTON_PITCH_SCALE)
    BUTTON_MAP(OTUS_BUTTON_LOOP)
    BUTTON_MAP(OTUS_BUTTON_LOOPOUT) 
    BUTTON_MAP(OTUS_BUTTON_LOOPIN)
    BUTTON_MAP(OTUS_BUTTON_LOOPFULL)
    BUTTON_MAP(OTUS_BUTTON_LOOPHALF)
    BUTTON_MAP(OTUS_BUTTON_LOOPQUARTER)
    BUTTON_MAP(OTUS_BUTTON_LOOPEIGTH)
    BUTTON_MAP(OTUS_BUTTON_JOG2)
    BUTTON_MAP(OTUS_BUTTON_XYPAD)
    BUTTON_MAP(OTUS_BUTTON_PITCH)
    BUTTON_MAP(OTUS_BUTTON_USER5)
    BUTTON_MAP(OTUS_BUTTON_USER4)
    BUTTON_MAP(OTUS_BUTTON_USER3)
    BUTTON_MAP(OTUS_BUTTON_USER2)
    BUTTON_MAP(OTUS_BUTTON_USER1)
    BUTTON_MAP(OTUS_BUTTON_USER0)
    BUTTON_MAP(OTUS_BUTTON_MOUSERIGHT)
    BUTTON_MAP(OTUS_BUTTON_MOUSELEFT)
    BUTTON_MAP(OTUS_BUTTON_JOG0)
    BUTTON_MAP(OTUS_BUTTON_JOG1)
    BUTTON_MAP(OTUS_BUTTON_FASTFORWARD)
    BUTTON_MAP(OTUS_BUTTON_UNKNOWN1)
    BUTTON_MAP(OTUS_BUTTON_UNKNOWN2)
    BUTTON_MAP(OTUS_BUTTON_CUE)
    {0,NULL}
};

int OTUS_readMessage(FILE* fh, OTUSMsg* msg)
{
    if(msg == NULL)
        return -OTUS_ERROR_NULL_POINTER_PARAM;

    unsigned char* buf = (unsigned char*)msg;
    memset(buf,0x00,sizeof(OTUSMsg));

    // synchronize to the magic bytes which start the
    // otus message (0x00 0x35).
    // we'll try to synchronize for at most one
    // message length [sizeof(OTUSMsg)] to prevent
    // if we're reading from the wrong device.
    // 
    int iRead = 0;
    int iReadLimit = sizeof(OTUSMsg);
    do {
        iRead = fread(buf,1,1,fh);
        if(iRead != 1) 
            return -OTUS_ERROR_READ_ERROR;
    
        --iReadLimit;
    } while(buf[0] != 0x00 && iReadLimit);
    if(iReadLimit < 0)
        return -OTUS_ERROR_FAILED_TO_SYNC_PACKET_STREAM;

    iRead = fread(buf+1,1,1,fh);
    if(iRead != 1)
        return -OTUS_ERROR_READ_ERROR;

    if(buf[1] != 0x35)
        return -OTUS_ERROR_FAILED_TO_SYNC_PACKET_STREAM;

    // at this point we have the magic bytes
    // let's read the rest of the packet in
    // possibly one chunk
    iRead = fread(buf+2,sizeof(OTUSMsg)-2,1,fh);
    if(iRead != 1)
        return -OTUS_ERROR_READ_ERROR;

    return OTUS_ERROR_OK;
}

static int last=0;
int OTUS_dumpMessageToConsole(const OTUSMsg* msg)
{
    printf("\n\n\n");
    printf("MSG: %0.4x/%0.2x  TS:%0.8x\n",
            msg->magic,
            msg->msgCounter,
            msg->timestamp
            );

    printf("Jog0:%0.4x/%5d  Jog1:%0.2x Jog2:%0.2x Jog3:%0.2x Jog4:%0.2x\n",
            msg->jog0Rot,
            msg->jog0Speed,
            msg->jog1Rot,
            msg->jog2Rot,
            msg->jog3Rot,
            msg->jog4Rot
            );

    printf(" DeckA: G:%0.4x  H:%0.4x M:%0.4x L:%0.4x P:%0.4x  %s\n"
           " DeckB: G:%0.4x  H:%0.4x M:%0.4x L:%0.4x P:%0.4x  %s\n"
           "   XFader:%0.4x     Gain:%0.4x\n",

           msg->rotAGain,
           msg->rotAHigh,
           msg->rotAMid,
           msg->rotALow,
           msg->pitchA,
           msg->status == 0 ? "(active)" : "",

           msg->rotBGain,
           msg->rotBHigh,
           msg->rotBMid,
           msg->rotBLow,
           msg->pitchB,
           msg->status == 0 ? "" : "(active)",

           msg->rotXFader,
           msg->rotMaster
           );

    printf("PAD: X:%0.4x Y:%0.4x\n",
            msg->padX,
            msg->padY
            );

    printf("Buttons: %0.8x  Status: %0.4x\n",
            msg->buttons,
            msg->status
            );



    const int offset = strlen("OTUS_BUTTON_");
    for(OTUSButton* button = OTUSButtonMap; button->name != NULL; ++button)
    {
        if(msg->buttons & button->id)
            printf("%s ",button->name+offset);
    }
    printf("\n");
    return OTUS_ERROR_OK;
}

#ifdef TEST

int main(int argc, char** argv)
{
    int err=0;

    if(argc != 2)
    {
        printf( "Usage:\n"
                "\t%s <hidraw device>\n\n",
                argv[0]);
        return 1;
    }
    

#define PRINT_SIZEOF(x)  printf("sizeof(" #x ") == %d\n",sizeof(x));

    PRINT_SIZEOF(OTUSMsg);
    PRINT_SIZEOF(unsigned char);
    PRINT_SIZEOF(unsigned short);
    PRINT_SIZEOF(unsigned int);

    FILE* fh = fopen(argv[1],"r");
    if(fh != NULL)
    {
        OTUSMsg msg;
        while(1)
        {
            err = OTUS_readMessage(fh,&msg);
            if(err != OTUS_ERROR_OK)
            {
                printf("OTUS_readMessage error: %d\n",err);
            }
            else
            {
    if(msg.buttons & OTUS_BUTTON_JOG0)
    {
        if(last == 0)
        {
            char buf[100];
            sprintf(buf,"./zeitansage %d", msg.jog1Rot);
            system(buf);
        }
        last = 1;
    }
    else
    {
        last = 0;
    }
                OTUS_dumpMessageToConsole(&msg); 
            }
        }
        fclose(fh);
    }
    else
    {
        printf("fopen failed on \"%s\"\n",argv[1]);
        return 1;
    }
    return 0;
}

#endif //TEST

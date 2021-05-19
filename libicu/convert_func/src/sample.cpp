#include <cstdio>

// #define DEBUG_TMI 0  /* define to 1 to enable Too Much Information */

// #include <stdio.h>
// #include <ctype.h>            /* for isspace, etc.    */
// #include <assert.h>
// #include <string.h>
// #include <stdlib.h>  /* malloc */

#include "unicode/utypes.h"   /* Basic ICU data types */
#include "unicode/ucnv.h"     /* C   Converter API    */
// #include "unicode/ustring.h"  /* some more string fcns*/
// #include "unicode/uchar.h"    /* char names           */
// #include "unicode/uloc.h"
// #include "unicode/unistr.h"

// /* Some utility functions */
// #ifndef UPRV_LENGTHOF
// #define UPRV_LENGTHOF(array) (int32_t)(sizeof(array)/sizeof((array)[0]))
// #endif

// static const UChar kNone[] = { 0x0000 };

// #define U_ASSERT(x)  { if(U_FAILURE(x)) {fflush(stdout);fflush(stderr); fprintf(stderr, #x " == %s\n", u_errorName(x)); assert(U_SUCCESS(x)); }}

// /* Print a UChar if possible, in seven characters. */
// void prettyPrintUChar(UChar c)
// {
//   if(  (c <= 0x007F) &&
//        (isgraph(c))  ) {
//     printf(" '%c'   ", (char)(0x00FF&c));
//   } else if ( c > 0x007F ) {
//     char buf[1000];
//     UErrorCode status = U_ZERO_ERROR;
//     int32_t o;

//     o = u_charName(c, U_EXTENDED_CHAR_NAME, buf, 1000, &status);
//     if(U_SUCCESS(status) && (o>0) ) {
//       buf[6] = 0;
//       printf("%7s", buf);
//     } else {
//       printf(" ??????");
//     }
//   } else {
//     switch((char)(c & 0x007F)) {
//     case ' ':
//       printf(" ' '   ");
//       break;
//     case '\t':
//       printf(" \\t    ");
//       break;
//     case '\n':
//       printf(" \\n    ");
//       break;
//     default:
//       printf("  _    ");
//       break;
//     }
//   }
// }


// void printUChars(const char  *name = "?", 
//                  const UChar *uch  = kNone,
//                  int32_t     len   = -1 )
// {
//   int32_t i;

//   if( (len == -1) && (uch) ) {
//     len = u_strlen(uch);
//   }

//   printf("%5s: ", name);
//   for( i = 0; i <len; i++) {
//     printf("%-6d ", i);
//   }
//   printf("\n");

//   printf("%5s: ", "uni");
//   for( i = 0; i <len; i++) {
//     printf("\\u%04X ", (int)uch[i]);
//   }
//   printf("\n");

//   printf("%5s:", "ch");
//   for( i = 0; i <len; i++) {
//     prettyPrintUChar(uch[i]);
//   }
//   printf("\n");
// }

// void printBytes(const char  *name = "?", 
//                  const char *uch  = "",
//                  int32_t     len   = -1 )
// {
//   int32_t i;

//   if( (len == -1) && (uch) ) {
//     len = static_cast<int32_t>(strlen(uch));
//   }

//   printf("%5s: ", name);
//   for( i = 0; i <len; i++) {
//     printf("%-4d ", i);
//   }
//   printf("\n");

//   printf("%5s: ", "uni");
//   for( i = 0; i <len; i++) {
//     printf("\\x%02X ", 0x00FF & (int)uch[i]);
//   }
//   printf("\n");

//   printf("%5s:", "ch");
//   for( i = 0; i <len; i++) {
//     if(isgraph(0x00FF & (int)uch[i])) {
//       printf(" '%c' ", (char)uch[i]);
//     } else {
//       printf("     ");
//     }
//   }
//   printf("\n");
// }


int main(){

    UErrorCode status=U_ZERO_ERROR;
    UConverter *conv;
    int32_t len1,len2;

    conv=ucnv_open("UTF-8",&status);
    char source[]="훐컄";
    UChar target1[100];
    len1=ucnv_toUChars(conv,target1,100,source,6,&status);
    //close the converter
    ucnv_close(conv);
    printf("%d\n",len1);
    // printUChars("res",target1);


    // // UChar target2[]={0xD6D0,0xCEC4};
    // conv=ucnv_open("UTF-8",&status);
    // char res[100];
    // len2=ucnv_fromUChars(conv,res,100,target1,100,&status);
    // ucnv_close(conv);
    
    // printf("%s \n",res);
    // printBytes("res2",res);

    // UChar source[] = { 0xD6D0,0xCEC4 };
    // char target[100];
    // UErrorCode status = U_ZERO_ERROR;
    // UConverter *conv;
    // int32_t     len;

    // // set up the converter
    // //! [ucnv_open]
    // conv = ucnv_open("utf-8", &status);
    // //! [ucnv_open]
    // assert(U_SUCCESS(status));

    // // convert to koi8-r
    // len = ucnv_fromUChars(conv, target, 100, source,4, &status);
    // assert(U_SUCCESS(status));

    // // close the converter
    // ucnv_close(conv);

    // // ***************************** END SAMPLE ********************

    // // Print it out
    // printUChars("src", source);
    // printf("\n");
    // printBytes("targ", target, len);

    return 0;
}

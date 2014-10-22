#ifndef __OC_H
#define __OC_H

#include <vector>

#include <stdio.h>

extern char *progname;

#define oc_errprintf(str...) \
    do { \
        fprintf(stderr, "%s: ", progname); \
        fprintf(stderr, str); \
    } while(0);

FILE *oc_cpp_getfile(vector<string> *defines, char *filename);
void scanner_scan(FILE *outf);

#endif


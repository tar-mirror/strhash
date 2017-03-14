/*
 * reimplementation of Daniel Bernsteins unix library.
 * placed in the public domain by Uwe Ohse, uwe@ohse.de.
 * This file is automatically generated.
 */
/* @(#) $Id: s.error.c 1.7 03/03/03 07:11:30+00:00 uwe@ranan.ohse.de $ */

#include "error.h"
const int error_acces=
#ifdef EACCES
EACCES;
#else
-1;
#endif

const int error_again=
#ifdef EAGAIN
EAGAIN;
#else
-2;
#endif

const int error_connrefused=
#ifdef ECONNREFUSED
ECONNREFUSED;
#else
-3;
#endif

const int error_exist=
#ifdef EEXIST
EEXIST;
#else
-4;
#endif

const int error_inprogress=
#ifdef EINPROGRESS
EINPROGRESS;
#else
-5;
#endif

const int error_intr=
#ifdef EINTR
EINTR;
#else
-6;
#endif

const int error_io=
#ifdef EIO
EIO;
#else
-7;
#endif

const int error_isdir=
#ifdef EISDIR
EISDIR;
#else
-8;
#endif

const int error_mlink=
#ifdef EMLINK
EMLINK;
#else
-9;
#endif

const int error_nodevice=
#ifdef ENXIO
ENXIO;
#else
-10;
#endif

const int error_noent=
#ifdef ENOENT
ENOENT;
#else
-11;
#endif

const int error_nomem=
#ifdef ENOMEM
ENOMEM;
#else
-12;
#endif

const int error_perm=
#ifdef EPERM
EPERM;
#else
-13;
#endif

const int error_pipe=
#ifdef EPIPE
EPIPE;
#else
-14;
#endif

const int error_proto=
#ifdef EPROTO
EPROTO;
#else
-15;
#endif

const int error_timeout=
#ifdef ETIMEDOUT
ETIMEDOUT;
#else
-16;
#endif

const int error_txtbsy=
#ifdef ETXTBSY
ETXTBSY;
#else
-17;
#endif

const int error_wouldblock=
#ifdef EWOULDBLOCK
EWOULDBLOCK;
#else
-18;
#endif

const int error_afnosupport=
#ifdef EAFNOSUPPORT
EAFNOSUPPORT;
#else
-19;
#endif

const int error_connreset=
#ifdef ECONNRESET
ECONNRESET;
#else
-20;
#endif


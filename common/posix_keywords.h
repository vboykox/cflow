/*-
 * Copyright (c) 2007, Marcus von Appen
 * All rights reserved.
 * 
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer 
 *    in this position and unchanged.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 * OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 * IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
 * NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 * THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * $FreeBSD$
 *
 */

static const char* posix_keywords[] =
{
    "_exit",
    "_longjmp", "_setjmp",
    "_tolower", "_toupper",
    "FD_CLR", "FD_ISSET", "FD_SET", "FD_ZERO",

    "a64l", "l64a",
    "accept", "access",
    "aio_cancel", "aio_error", "aio_fsync", "aio_read", "aio_return",
    "aio_suspend", "aio_write",
    "alarm",
    "asctime_r",

    "basename",
    "bcmp",
    "bcopy",
    "bind",
    "bsd_signal",
    "bzero",
    
    "catclose", "catgets", "catopen",
    "cfgetispeed", "cfgetospeed", "cfsetispeed", "cfsetospeed",
    "chdir", "chmod", "chown",
    "clock_getcpuclockid", "clock_getres", "clock_gettime", "clock_settime",
    "clock_nanosleep",
    "close", "closedir",
    "closelog", "openlog", "setlogmask", "syslog",
    "confstr",
    "connect",
    "creat",
    "crypt",
    "ctermid",
    "ctime_r",
    
    "dbm_clearerr", "dbm_close", "dbm_delete", "dbm_error", "dbm_fetch",
    "dbm_firstkey", "dbm_nextkey", "dbm_open", "dbm_store",
    "dirname",
    "dlclose", "dlerror", "dlopen", "dlsym",
    "drand48", "erand48", "jrand48", "lcong48", "lrand48", "mrand48", "nrand48",
    "seed48", "srand48",
    "dup", "dup2",

    "ecvt", "fcvt", "gcvt",
    "encrypt",
    "endgrent", "getgrent", "setgrent",
    "endhostent", "gethostent", "sethostent",
    "endnetent", "getnetbyaddr", "getnetbyname", "getnetent", "setnetent",
    "endprotoent", "getprotobynumber", "getprotobyname",
    "getprotoent", "setprotoent",
    "endpwent", "getpwent", "setpwent",
    "endservent", "getservbyname", "getservbyport", "getservent", "setservent",
    "endutxent", "getutxent", "getutxid", "getutxline", "pututxline",
    "setutxent",
    "environ",
    "execl", "execv", "execle", "execve", "execlp", "execvp",

    "fattach",
    "fchdir", "fchown", "fchmod",
    "fcntl",
    "fdatasync",
    "fdetach",
    "fdopen",
    "ffs",
    "fileno",
    "flockfile", "ftrylockfile", "funlockfile",
    "fmtmsg",
    "fnmatch",
    "fork",
    "fpathconf", "pathconf",
    "freeaddrinfo", "getaddrinfo",
    "fseeko", "ftello",
    "fstatvfs", "statvfs",
    "fsync",
    "ftime",
    "ftok",
    "ftruncate",
    "ftw",

    "gai_strerror",
    "getc_unlocked", "getchar_unlocked", "putc_unlocked", "putchar_unlocked",
    "getcontext", "setcontext",
    "getcwd",
    "getdate", "getdate_err",
    "getegid", "geteuid", "getgid", "getuid",
    "getgrgid", "getgrgid_r", "getgrnam", "getgrnam_r", "getgroups",
    "gethostbyaddr", "gethostbyname",
    "gethostid", "gethostname",
    "getitimer", "setitimer",
    "getlogin", "getlogin_r",
    "getmsg", "getpmsg",
    "getnameinfo",
    "getopt", "optarg", "optind", "opterr", "optopt",
    "getpeername",
    "getpgid", "getpgrp", "getpid", "getppid",
    "getpriority", "setpriority",
    "getpwnam", "getpwnam_r",
    "getpwuid", "getpwuid_r",
    "getrlimit", "setrlimit",
    "getrusage",
    "getsid",
    "getsockname",
    "getsockopt",
    "getsubopt",
    "gettimeofday",
    "getwd",
    "glob", "globfree",
    "gmtime", "gmtime_r",
    "grantpt",

    "hcreate", "hdestroy", "hsearch",
    "htonl", "htons", "ntohl", "ntohs",

    "iconv", "iconv_close", "iconv_open",
    "if_freenameindex", "if_indextoname", "if_nameindex", "if_nametoindex",
    "index",
    "inet_addr", "inet_ntoa", "inet_ntop", "inet_pton",
    "initstate", "random", "setstate", "srandom",
    "insque", "remque",
    "ioctl",
    "isatty",
    
    "j0", "j1", "jn",

    "kill", "killpg",
    "lchown",
    "lsearch", "lfind",
    "link",
    "lio_listio",
    "listen",
    "localtime", "localtime_r",
    "lockf",
    "lsearch", "lfind", "lseek",
    "lstat",

    "makecontext", "swapcontext",
    "memccpy",
    "mkdir", "mkfifo", "mknod", "mkstemp", "mktemp", 
    "mlock", "munlock", "mlockall", "munlockall",
    "mmap",
    "mprotect",
    "mq_close", "mq_getattr", "mq_notify", "mq_open", "mq_receive", "mq_send",
    "mq_setattr", "mq_timedreceive", "mq_timedsend", "mq_unlink",
    "msgctrl", "msgget", "msgrcv", "msgsnd", 
    "msync",
    "munmap",

    "nanosleep",
    "nftw",
    "nice",
    "nl_langinfo",
    
    "open", "opendir",

    "pause",
    "pclose",
    "pipe",
    "poll",
    "popen",
    "posix_fadvise", "posix_fallocate", "posix_madvise", "posix_mem_offset",
    "posix_memalign", "posix_openpt", "posix_spawn",
    "posix_spawn_file_actions_addclose", "posix_spawn_file_actions_addopen",
    "posix_spawn_file_actions_adddup2", "posix_spawn_file_actions_destroy",
    "posix_spawn_file_actions_init",
    "posix_spawnattr_destroy", "posix_spawnattr_init",
    "posix_spawnattr_getflags", "posix_spawnattr_getpgroup",
    "posix_spawnattr_getschedparam", "posix_spawnattr_getschedpolicy",
    "posix_spawnattr_getsigdefault", "posix_spawnattr_getsigmask",
    "posix_spawnattr_setflags", "posix_spawnattr_setpgroup",
    "posix_spawnattr_setschedparam", "posix_spawnattr_setschedpolicy",
    "posix_spawnattr_setsigdefault", "posix_spawnattr_setsigmask",
    "posix_spawnp", "posix_trace_attr_destroy", "posix_trace_attr_getclockres",
    "posix_trace_attr_getcreatetime", "posix_trace_attr_getgenversion",
    "posix_trace_attr_getinherited", "posix_trace_attr_getlogfullpolicy",
    "posix_trace_attr_getlogsize", "posix_trace_attr_getmaxdatasize",
    "posix_trace_attr_getmaxsystemeventsize",
    "posix_trace_attr_getmaxusereventsize", "posix_trace_attr_getname",
    "posix_trace_attr_getstreamfullpolicy", "posix_trace_attr_getstreamsize",
    "posix_trace_attr_init", "posix_trace_attr_setinherited",
    "posix_trace_attr_setlogfullpolicy", "posix_trace_attr_setlogsize",
    "posix_trace_attr_setmaxdatasize", "posix_trace_attr_setname",
    "posix_trace_attr_setstreamfullpolicy", "posix_trace_attr_setstreamsize",
    "posix_trace_clear", "posix_trace_close", "posix_trace_create",
    "posix_trace_create_withlog", "posix_trace_event",
    "posix_trace_eventid_equal", "posix_trace_eventid_get_name",
    "posix_trace_eventid_open", "posix_trace_eventset_add",
    "posix_trace_eventset_del", "posix_trace_eventset_empty",
    "posix_trace_eventset_fill", "posix_trace_eventset_ismember",
    "posix_trace_eventtypelist_getnext_id", "posix_trace_eventtypelist_rewind",
    "posix_trace_flush", "posix_trace_get_attr", "posix_trace_get_filter",
    "posix_trace_get_status", "posix_trace_getnext_event", "posix_trace_open",
    "posix_trace_rewind", "posix_trace_set_filter", "posix_trace_shutdown",
    "posix_trace_start", "posix_trace_stop", "posix_trace_timedgetnext_event",
    "posix_trace_trid_eventid_open", "posix_trace_trygetnext_event",
    "posix_typed_mem_get_info", "posix_typed_mem_open",
    "pread", "read",
    "pselect", "select",
    "pthread_atfork", "pthread_attr_destroy", "pthread_attr_getdetachstate",
    "pthread_attr_getguardsize", "pthread_attr_getinheritsched",
    "pthread_attr_getschedparam", "pthread_attr_getschedpolicy",
    "pthread_attr_getscope", "pthread_attr_getstack",
    "pthread_attr_getstackaddr", "pthread_attr_getstacksize",
    "pthread_attr_init", "pthread_attr_setdetachstate",
    "pthread_attr_setguardsize", "pthread_attr_setinheritsched",
    "pthread_attr_setschedparam", "pthread_attr_setschedpolicy",
    "pthread_attr_setscope", "pthread_attr_setstack",
    "pthread_attr_setstackaddr", "pthread_attr_setstacksize",
    "pthread_barrier_destroy", "pthread_barrier_init", "pthread_barrier_wait",
    "pthread_barrierattr_destroy", "pthread_barrierattr_getpshared",
    "pthread_barrierattr_init", "pthread_barrierattr_setpshared",
    "pthread_cancel", "pthread_cleanup_pop", "pthread_cleanup_push",
    "pthread_cond_broadcast", "pthread_cond_destroy", "pthread_cond_init",
    "pthread_cond_signal", "pthread_cond_timedwait", "pthread_cond_wait",
    "pthread_condattr_destroy", "pthread_condattr_getclock",
    "pthread_condattr_getpshared", "pthread_condattr_init",
    "pthread_condattr_setclock", "pthread_condattr_setpshared",
    "pthread_create", "pthread_detach", "pthread_equal", "pthread_exit",
    "pthread_getconcurrency", "pthread_getcpuclockid", "pthread_getschedparam",
    "pthread_getspecific", "pthread_join", "pthread_key_create",
    "pthread_key_delete", "pthread_kill", "pthread_mutex_destroy",
    "pthread_mutex_getprioceiling", "pthread_mutex_init", "pthread_mutex_lock",
    "pthread_mutex_setprioceiling", "pthread_mutex_timedlock",
    "pthread_mutex_trylock", "pthread_mutex_unlock",
    "pthread_mutexattr_destroy", "pthread_mutexattr_getprioceiling",
    "pthread_mutexattr_getprotocol", "pthread_mutexattr_getpshared",
    "pthread_mutexattr_gettype", "pthread_mutexattr_init",
    "pthread_mutexattr_setprioceiling", "pthread_mutexattr_setprotocol",
    "pthread_mutexattr_setpshared", "pthread_mutexattr_settype", "pthread_once",
    "pthread_rwlock_destroy", "pthread_rwlock_init", "pthread_rwlock_rdlock",
    "pthread_rwlock_timedrdlock", "pthread_rwlock_timedwrlock",
    "pthread_rwlock_tryrdlock", "pthread_rwlock_trywrlock",
    "pthread_rwlock_unlock", "pthread_rwlock_wrlock",
    "pthread_rwlockattr_destroy", "pthread_rwlockattr_getpshared",
    "pthread_rwlockattr_init", "pthread_rwlockattr_setpshared", "pthread_self",
    "pthread_setcancelstate", "pthread_setcanceltype", "pthread_setconcurrency",
    "pthread_setschedparam", "pthread_setschedprio", "pthread_setspecific",
    "pthread_sigmask", "pthread_spin_destroy", "pthread_spin_init",
    "pthread_spin_lock", "pthread_spin_trylock", "pthread_spin_unlock",
    "pthread_testcancel",
    "ptsname", "putenv",
    "putmsg", "putpmsg",
    "pwrite", "write",

    "readdir", "readdir_r",
    "readlink", "readv",
    "realpath",
    "recv", "recvfrom", "recvmsg",
    "regcomp", "regerror", "regexec", "regfree",
    "rindex",
    "rmdir", 

    "scalb", 
    "sched_get_priority_max",
    "sched_get_priority_min",
    "sched_getparam",
    "sched_getscheduler",
    "sched_rr_get_interval",
    "sched_setparam",
    "sched_setscheduler",
    "sched_yield",
    "seekdir",
    "sem_close", "sem_destroy", "sem_getvalue", "sem_init", "sem_open",
    "sem_post", "sem_timedwait", "sem_trywait", "sem_unlink", "sem_wait",
    "semctl", "semget", "semop",
    "send", "sendmsg", "sendto",
    "setenv",
    "setegid", "seteuid", "setgid",
    "setkey",
    "setpgid", "setpgrp",
    "setregid", "setreuid",
    "setsid",
    "setsockopt",
    "setuid",
    "shm_open", "shm_unlink",
    "shmat", "shmctl", "shmdt", "shmget",
    "shutdown",
    "sigaction", "sigaddset", "sigaltstack", "sigdelset", "sigemptyset",
    "sigfillset", "sighold", "sigignore", "siginterrupt", "sigismember",
    "siglongjmp", "signal", "sigpause", "sigpending", "sigprocmask", "sigqueue",
    "sigrelse", "sigset", "sigsetjmp", "sigsuspend", "sigtimedwait", "sigwait",
    "sigwaitinfo",
    "sleep",
    "sockatmark",
    "socket", "socketpair",
    "stat",
    "strcasecmp", "strncasecmp", "strdup", "strerror_r", "strfmon", "strptime",
    "strtok_r",
    "swab",
    "symlink",
    "sync",
    "sysconf",

    "tcdrain", "tcflow", "tcflush", "tcgetattr", "tcgetpgrp", " tcgetsid",
    "tcsendbreak", "tcsetattr", "tcsetpgrp",
    "tdelete", "tfind", "tsearch", "twalk",
    "telldir",
    "tempnam",
    "timer_create", "timer_delete", "timer_getoverrun", "timer_gettime",
    "timer_settime",
    "times",
    "toascii",
    "truncate",
    "ttyname", "ttyname_r",
    "tzset",

    "ualarm",
    "ulimit",
    "umask",
    "uname",
    "unlink",
    "unlockpt",
    "unsetenv",
    "usleep",
    "utime", "utimes",

    "vfork",

    "wait", "waitpid", "waitid",
    "wcswcs", "wcswidth",
    "wordexp", "wordfree",
    
    "y0", "y1", "yn",
    NULL
};

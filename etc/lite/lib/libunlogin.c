#if 0
	shc Version 4.0.3, Generic Shell Script Compiler
	GNU GPL Version 3 Md Jahidul Hamid <jahidulhamid@yahoo.com>

	shc -f libunlogin -o libunlogin 
#endif

static  char data [] = 
#define      tst1_z	22
#define      tst1	((&data[0]))
	"\153\020\135\154\233\177\020\333\103\076\313\104\052\341\217\226"
	"\377\166\335\316\323\154"
#define      chk1_z	22
#define      chk1	((&data[26]))
	"\253\102\256\323\210\002\345\340\177\172\200\253\117\321\132\247"
	"\163\260\045\340\306\214\231\263\121\333\045"
#define      tst2_z	19
#define      tst2	((&data[51]))
	"\006\316\143\071\005\127\135\311\314\014\255\327\232\246\065\365"
	"\200\102\341\353\011\361\017\221\013"
#define      xecc_z	15
#define      xecc	((&data[76]))
	"\040\171\330\333\323\232\201\325\323\334\271\103\004\356\317\162"
	"\154\275"
#define      text_z	1454
#define      text	((&data[364]))
	"\123\136\030\134\202\245\025\263\120\127\141\044\175\112\260\127"
	"\120\177\110\140\021\124\272\246\254\332\037\152\250\337\002\374"
	"\075\033\131\300\300\157\163\021\306\324\065\104\037\346\234\157"
	"\146\344\320\167\071\213\035\345\146\075\120\016\034\122\013\132"
	"\156\144\032\056\323\215\100\232\142\166\336\201\135\172\361\303"
	"\137\301\072\231\115\127\176\263\224\317\302\261\042\315\013\220"
	"\062\046\277\006\263\377\241\026\165\200\230\322\373\212\226\133"
	"\113\320\364\231\050\163\114\275\102\016\156\144\333\172\364\016"
	"\240\263\025\124\263\266\153\050\066\003\373\061\215\221\215\331"
	"\142\201\162\212\364\276\107\066\314\266\232\250\060\216\267\321"
	"\102\314\045\365\202\220\036\271\224\032\353\041\254\170\373\016"
	"\371\155\230\355\054\340\043\370\226\276\241\307\115\131\230\217"
	"\045\276\204\250\117\242\142\343\274\115\005\150\306\000\167\300"
	"\155\017\255\232\360\321\223\206\220\064\116\335\215\346\154\263"
	"\244\360\133\363\223\275\327\120\013\334\271\321\334\060\221\112"
	"\100\077\344\061\021\167\267\241\254\005\176\072\354\352\355\221"
	"\333\111\205\157\006\134\300\022\071\171\343\025\252\165\140\353"
	"\331\024\377\025\321\343\155\131\170\250\032\040\077\315\355\012"
	"\065\165\144\366\344\025\271\351\255\114\347\234\001\025\112\323"
	"\126\163\050\041\267\271\375\362\266\130\061\246\267\330\346\245"
	"\030\002\107\201\226\010\064\014\137\133\163\137\100\260\104\037"
	"\127\066\007\251\064\166\072\035\350\041\076\335\111\333\333\346"
	"\377\306\160\016\354\346\264\365\245\352\266\243\174\311\316\253"
	"\276\177\071\034\017\020\014\376\012\262\214\266\134\235\317\071"
	"\346\074\361\214\370\360\135\304\135\061\206\121\245\205\162\356"
	"\060\134\344\301\103\075\147\216\151\354\341\062\022\246\347\162"
	"\057\007\176\032\370\317\324\012\065\014\131\105\361\126\326\044"
	"\244\300\065\246\210\271\340\325\375\245\137\023\231\357\326\151"
	"\053\214\141\326\073\225\027\243\312\203\044\335\246\163\012\247"
	"\344\167\377\076\027\360\153\355\017\375\007\243\256\301\224\264"
	"\056\213\220\055\245\330\144\031\110\017\153\343\276\320\016\365"
	"\143\100\141\253\350\316\055\311\370\302\310\247\175\132\305\273"
	"\055\017\330\024\375\114\250\020\260\321\216\232\245\354\140\102"
	"\027\120\137\270\171\237\375\057\166\260\250\143\135\267\002\121"
	"\106\232\162\133\023\132\242\041\016\207\037\356\020\232\064\204"
	"\336\217\266\313\106\344\123\100\362\237\205\122\060\063\156\262"
	"\114\121\374\110\153\016\155\375\004\077\143\202\024\342\377\137"
	"\125\135\355\376\340\126\016\336\131\312\304\153\167\044\174\217"
	"\142\324\067\055\236\076\106\115\075\173\020\307\225\003\030\205"
	"\114\012\262\044\171\223\165\256\056\020\272\363\363\152\251\017"
	"\330\277\234\105\237\200\231\373\360\213\305\201\326\206\247\054"
	"\052\217\306\245\040\124\117\115\070\204\147\117\057\051\110\151"
	"\101\327\135\211\305\173\176\023\246\046\100\104\060\200\006\153"
	"\254\355\133\123\377\373\071\150\252\032\025\340\015\053\333\271"
	"\277\327\175\372\133\065\322\160\101\070\042\224\372\320\303\375"
	"\343\226\076\144\267\000\314\122\363\131\134\204\340\324\260\264"
	"\221\145\012\361\077\155\143\214\223\371\364\310\345\001\007\205"
	"\101\375\102\011\377\131\016\130\334\272\202\246\221\343\255\327"
	"\336\372\077\176\351\060\057\211\134\316\053\353\217\231\045\044"
	"\327\020\121\151\136\266\374\360\230\113\244\074\000\307\251\352"
	"\342\361\156\057\321\150\354\357\002\277\037\134\066\125\347\354"
	"\044\263\371\365\175\057\020\152\351\157\101\017\351\224\122\306"
	"\043\324\236\113\102\066\367\255\053\122\054\244\213\174\335\051"
	"\303\000\021\342\167\364\124\024\224\310\355\002\320\332\257\300"
	"\327\376\350\146\130\135\130\223\313\360\007\062\167\113\301\010"
	"\106\112\317\324\243\146\256\360\250\211\162\147\216\140\076\112"
	"\345\170\235\124\007\073\075\145\026\072\121\365\050\337\135\077"
	"\236\343\207\204\102\322\005\165\105\351\017\377\266\361\045\302"
	"\257\145\223\142\041\134\036\314\216\023\071\000\053\011\000\046"
	"\345\244\130\227\037\374\361\234\057\174\271\060\112\075\141\021"
	"\326\132\330\145\011\214\157\204\136\112\032\017\066\323\056\256"
	"\037\026\150\201\342\364\240\061\167\331\140\002\363\226\104\022"
	"\017\057\367\046\174\305\163\115\324\073\250\112\056\057\255\247"
	"\151\005\016\000\213\311\151\132\365\174\030\152\177\137\073\231"
	"\140\305\237\214\231\255\230\151\327\157\115\135\121\011\227\341"
	"\205\216\144\156\250\215\013\212\054\060\211\314\032\237\167\376"
	"\227\201\266\375\233\313\062\217\225\051\321\263\343\174\050\327"
	"\171\147\337\204\360\302\106\073\154\102\007\242\144\012\176\201"
	"\216\160\077\242\226\055\006\127\053\103\334\332\044\331\036\125"
	"\255\261\153\101\125\222\330\233\147\153\072\026\361\032\015\100"
	"\046\203\056\274\065\012\227\100\220\062\273\214\034\126\174\152"
	"\300\114\374\313\151\012\132\307\313\204\273\172\272\316\275\354"
	"\053\063\111\362\004\147\322\023\313\066\346\141\257\375\022\001"
	"\343\243\117\052\237\061\377\052\147\361\063\116\015\077\114\135"
	"\253\050\216\154\126\372\220\044\150\362\224\055\336\131\110\336"
	"\001\347\312\316\023\243\320\231\335\310\041\023\162\330\101\213"
	"\140\013\247\076\144\070\015\123\024\317\274\150\116\160\025\166"
	"\020\212\134\231\342\053\120\050\006\040\131\036\165\256\336\104"
	"\164\310\114\313\052\003\316\210\123\370\034\224\024\104\167\247"
	"\074\327\360\141\161\203\261\302\162\274\165\201\352\271\207\072"
	"\374\276\203\207\047\071\010\243\342\177\246\304\006\056\257\054"
	"\273\065\344\011\262\145\075\056\333\001\052\121\054\122\351\216"
	"\132\054\271\113\362\012\200\066\145\103\365\273\275\025\264\263"
	"\255\326\221\033\300\057\155\234\360\167\101\115\330\172\256\276"
	"\074\271\326\353\247\301\327\203\066\345\215\151\352\201\043\361"
	"\301\125\372\155\362\374\321\063\215\336\164\211\015\217\250\241"
	"\047\016\262\247\045\352\303\123\366\062\122\324\131\370\352\221"
	"\131\114\171\105\171\126\353\355\031\071\343\323\215\300\046\331"
	"\147\020\075\054\342\062\061\161\140\215\355\340\121\042\002\052"
	"\265\266\031\273\367\074\161\237\177\263\046\350\144\043\130\276"
	"\255\205\361\277\074\322\343\144\345\110\064\314\102\346\004\051"
	"\067\214\116\016\016\013\223\056\120\207\164\201\011\333\120\036"
	"\054\101\012\077\220\134\120\320\271\333\143\010\161\223\022\253"
	"\144\071\216\316\345\153\015\132\277\133\356\350\051\333\053\046"
	"\040\027\320\076\343\112\000\110\364\064\007\046\025\336\354\217"
	"\276\345\337\276\000\031\373\154\213\311\377\213\326\034\247\103"
	"\176\056\157\022\163\001\052\030\165\241\255\211\267\043\334\335"
	"\164\007\044\154\141\074\267\207\137\047\321\324\105\221\020\354"
	"\046\074\050\170\000\071\227\234\043\332\232\323\070\034\201\167"
	"\265\155\176\111\274\043\347\320\020\364\022\150\075\051\346\377"
	"\070\357\125\265\144\235\122\330\104\272\277\341\202\366\021\145"
	"\013\075\206\050\165\212\062\144\017\216\312\047\374\327\225\265"
	"\173\072\012\120\312\113\031\326\104\301\207\064\220\172\005\235"
	"\166\150\136\246\157\166\130\207\313\244\300\237\277\132\375\364"
	"\372\201\175\152\025\246\324\000\055\312\340\224\270\023\344\071"
	"\041\122\104\100\204\331\161\101\147\021\237\154\306\271\217\100"
	"\151\031\175\107\073\265\160\234\106\015\040\375\033\134\244\210"
	"\234\136\236\351\207\125\351\146\240\052\350\117\161\271\265\105"
	"\034\306\274\324\150\151\332\346\243\306\321\221\130\255\332\335"
	"\034\341\072\335\363\163\126\327\211\001\115\351\354\002\057\010"
	"\311\353\334\061\125\266\027\370\175\351\211\325\226\144\263\263"
	"\105\355\220\071\141\347\020\353\350\135\324\325\140\004\336\051"
	"\357\272\132\104\161\162\075\357\133\307\305\362\053\170\245\161"
	"\146\066\252\307\036\273\262\006\031\207\334\171\213\272\242\173"
	"\165\375\300\347\157\376\326\312\306\233\274\362\024\142\143\172"
	"\231\016\102\267\311\365\276\342\175\232\134\010\124\376\204\312"
	"\373\105\261\152\103\207\065\011\043\362\373\067\125\137\262\356"
	"\155\364\246\067\352\145\032\147\377\166\160\124\164\364\036\160"
	"\072\320\333\176\127\020\207\173\003\203\263\130\343\145\107\121"
	"\132\356\210\104\123\242\253\123\031\033\250\215\020\307\376\113"
	"\227\331\311\357\352\121\152\355\325\035\106\270\203\215\011\335"
	"\174\222\042\317\065\316\043"
#define      inlo_z	3
#define      inlo	((&data[2035]))
	"\316\112\042"
#define      chk2_z	19
#define      chk2	((&data[2042]))
	"\332\105\051\264\122\066\062\261\230\041\122\370\012\225\064\142"
	"\364\025\221\351\122\363\257\017\030"
#define      msg2_z	19
#define      msg2	((&data[2064]))
	"\213\255\173\024\205\066\341\205\162\250\317\317\241\133\077\017"
	"\074\062\134\241\065\240"
#define      pswd_z	256
#define      pswd	((&data[2145]))
	"\140\367\001\334\212\043\254\277\361\317\016\333\232\353\326\054"
	"\305\034\126\172\053\157\030\214\362\244\301\223\166\257\266\326"
	"\247\270\262\061\334\136\361\316\056\000\252\310\353\201\365\261"
	"\235\114\053\311\273\103\126\255\350\027\100\136\016\145\160\310"
	"\162\137\376\027\120\335\170\144\037\331\365\175\076\207\054\147"
	"\172\322\002\332\127\233\306\067\351\141\366\370\306\146\300\071"
	"\306\277\121\027\234\311\173\273\243\160\070\341\367\144\111\161"
	"\067\113\114\216\347\022\306\321\163\274\312\072\043\213\163\351"
	"\112\305\000\347\217\174\242\062\355\333\023\345\100\135\127\170"
	"\251\243\006\220\265\315\141\051\211\054\143\254\267\327\226\001"
	"\234\227\350\053\023\213\136\000\147\161\345\250\317\074\040\170"
	"\337\046\010\225\363\152\276\175\226\042\052\116\371\300\120\226"
	"\127\071\302\153\304\040\154\054\222\121\324\141\216\364\331\156"
	"\033\342\004\017\115\302\215\344\344\267\062\336\170\202\165\317"
	"\273\067\073\200\130\247\254\352\371\201\114\207\166\045\366\221"
	"\010\372\241\125\275\056\072\241\345\154\200\136\357\366\056\253"
	"\055\151\054\206\020\331\161\011\132\275\221\320\343\207\142\353"
	"\202\003\101\077\062\173\341\030\350\141\166\327\130\244\203\205"
	"\015\257\014\036\211\175\047\343\072\271\264\035\101\026\011\303"
	"\032\112\003\114\305\344\145\255\106\333\205\236\307\367\065\156"
	"\260\350\240\214\107"
#define      rlax_z	1
#define      rlax	((&data[2410]))
	"\266"
#define      opts_z	1
#define      opts	((&data[2411]))
	"\004"
#define      msg1_z	65
#define      msg1	((&data[2420]))
	"\056\043\177\131\355\073\235\103\067\177\114\302\035\337\317\046"
	"\113\064\101\170\301\327\026\022\224\122\124\153\377\213\164\362"
	"\174\377\247\140\355\174\264\361\302\231\210\211\204\255\273\244"
	"\363\000\230\364\230\012\301\007\110\226\332\264\323\326\213\361"
	"\250\325\255\373\337\044\046\055\042\350\205\133"
#define      date_z	1
#define      date	((&data[2488]))
	"\124"
#define      shll_z	10
#define      shll	((&data[2489]))
	"\213\174\117\125\304\115\024\224\366\145\321"
#define      lsto_z	1
#define      lsto	((&data[2500]))
	"\341"/* End of data[] */;
#define      hide_z	4096
#define SETUID 0	/* Define as 1 to call setuid(0) at start of script */
#define DEBUGEXEC	0	/* Define as 1 to debug execvp calls */
#define TRACEABLE	1	/* Define as 1 to enable ptrace the executable */
#define HARDENING	0	/* Define as 1 to disable ptrace/dump the executable */
#define BUSYBOXON	0	/* Define as 1 to enable work with busybox */

#if HARDENING
static const char * shc_x[] = {
"/*",
" * Copyright 2019 - Intika <intika@librefox.org>",
" * Replace ******** with secret read from fd 21",
" * Also change arguments location of sub commands (sh script commands)",
" * gcc -Wall -fpic -shared -o shc_secret.so shc_secret.c -ldl",
" */",
"",
"#define _GNU_SOURCE /* needed to get RTLD_NEXT defined in dlfcn.h */",
"#define PLACEHOLDER \"********\"",
"#include <dlfcn.h>",
"#include <stdlib.h>",
"#include <string.h>",
"#include <unistd.h>",
"#include <stdio.h>",
"#include <signal.h>",
"",
"static char secret[128000]; //max size",
"typedef int (*pfi)(int, char **, char **);",
"static pfi real_main;",
"",
"// copy argv to new location",
"char **copyargs(int argc, char** argv){",
"    char **newargv = malloc((argc+1)*sizeof(*argv));",
"    char *from,*to;",
"    int i,len;",
"",
"    for(i = 0; i<argc; i++){",
"        from = argv[i];",
"        len = strlen(from)+1;",
"        to = malloc(len);",
"        memcpy(to,from,len);",
"        // zap old argv space",
"        memset(from,'\\0',len);",
"        newargv[i] = to;",
"        argv[i] = 0;",
"    }",
"    newargv[argc] = 0;",
"    return newargv;",
"}",
"",
"static int mymain(int argc, char** argv, char** env) {",
"    //fprintf(stderr, \"Inject main argc = %d\\n\", argc);",
"    return real_main(argc, copyargs(argc,argv), env);",
"}",
"",
"int __libc_start_main(int (*main) (int, char**, char**),",
"                      int argc,",
"                      char **argv,",
"                      void (*init) (void),",
"                      void (*fini)(void),",
"                      void (*rtld_fini)(void),",
"                      void (*stack_end)){",
"    static int (*real___libc_start_main)() = NULL;",
"    int n;",
"",
"    if (!real___libc_start_main) {",
"        real___libc_start_main = dlsym(RTLD_NEXT, \"__libc_start_main\");",
"        if (!real___libc_start_main) abort();",
"    }",
"",
"    n = read(21, secret, sizeof(secret));",
"    if (n > 0) {",
"      int i;",
"",
"    if (secret[n - 1] == '\\n') secret[--n] = '\\0';",
"    for (i = 1; i < argc; i++)",
"        if (strcmp(argv[i], PLACEHOLDER) == 0)",
"          argv[i] = secret;",
"    }",
"",
"    real_main = main;",
"",
"    return real___libc_start_main(mymain, argc, argv, init, fini, rtld_fini, stack_end);",
"}",
"",
0};
#endif /* HARDENING */

/* rtc.c */

#include <sys/stat.h>
#include <sys/types.h>

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

/* 'Alleged RC4' */

static unsigned char stte[256], indx, jndx, kndx;

/*
 * Reset arc4 stte. 
 */
void stte_0(void)
{
	indx = jndx = kndx = 0;
	do {
		stte[indx] = indx;
	} while (++indx);
}

/*
 * Set key. Can be used more than once. 
 */
void key(void * str, int len)
{
	unsigned char tmp, * ptr = (unsigned char *)str;
	while (len > 0) {
		do {
			tmp = stte[indx];
			kndx += tmp;
			kndx += ptr[(int)indx % len];
			stte[indx] = stte[kndx];
			stte[kndx] = tmp;
		} while (++indx);
		ptr += 256;
		len -= 256;
	}
}

/*
 * Crypt data. 
 */
void arc4(void * str, int len)
{
	unsigned char tmp, * ptr = (unsigned char *)str;
	while (len > 0) {
		indx++;
		tmp = stte[indx];
		jndx += tmp;
		stte[indx] = stte[jndx];
		stte[jndx] = tmp;
		tmp += stte[indx];
		*ptr ^= stte[tmp];
		ptr++;
		len--;
	}
}

/* End of ARC4 */

#if HARDENING

#include <sys/ptrace.h>
#include <sys/wait.h>
#include <signal.h>
#include <sys/prctl.h>
#define PR_SET_PTRACER 0x59616d61

/* Seccomp Sandboxing Init */
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>

#include <sys/types.h>
#include <sys/prctl.h>
#include <sys/syscall.h>
#include <sys/socket.h>

#include <linux/filter.h>
#include <linux/seccomp.h>
#include <linux/audit.h>

#define ArchField offsetof(struct seccomp_data, arch)

#define Allow(syscall) \
    BPF_JUMP(BPF_JMP+BPF_JEQ+BPF_K, SYS_##syscall, 0, 1), \
    BPF_STMT(BPF_RET+BPF_K, SECCOMP_RET_ALLOW)

struct sock_filter filter[] = {
    /* validate arch */
    BPF_STMT(BPF_LD+BPF_W+BPF_ABS, ArchField),
    BPF_JUMP( BPF_JMP+BPF_JEQ+BPF_K, AUDIT_ARCH_X86_64, 1, 0),
    BPF_STMT(BPF_RET+BPF_K, SECCOMP_RET_KILL),

    /* load syscall */
    BPF_STMT(BPF_LD+BPF_W+BPF_ABS, offsetof(struct seccomp_data, nr)),

    /* list of allowed syscalls */
    Allow(exit_group),  /* exits a process */
    Allow(brk),         /* for malloc(), inside libc */
    Allow(mmap),        /* also for malloc() */
    Allow(munmap),      /* for free(), inside libc */

    /* and if we don't match above, die */
    BPF_STMT(BPF_RET+BPF_K, SECCOMP_RET_KILL),
};
struct sock_fprog filterprog = {
    .len = sizeof(filter)/sizeof(filter[0]),
    .filter = filter
};

/* Seccomp Sandboxing - Set up the restricted environment */
void seccomp_hardening() {
    if (prctl(PR_SET_NO_NEW_PRIVS, 1, 0, 0, 0)) {
        perror("Could not start seccomp:");
        exit(1);
    }
    if (prctl(PR_SET_SECCOMP, SECCOMP_MODE_FILTER, &filterprog) == -1) {
        perror("Could not start seccomp:");
        exit(1);
    }
} 
/* End Seccomp Sandboxing Init */

void shc_x_file() {
    FILE *fp;
    int line = 0;

    if ((fp = fopen("/tmp/shc_x.c", "w")) == NULL ) {exit(1); exit(1);}
    for (line = 0; shc_x[line]; line++)	fprintf(fp, "%s\n", shc_x[line]);
    fflush(fp);fclose(fp);
}

int make() {
	char * cc, * cflags, * ldflags;
    char cmd[4096];

	cc = getenv("CC");
	if (!cc) cc = "cc";

	sprintf(cmd, "%s %s -o %s %s", cc, "-Wall -fpic -shared", "/tmp/shc_x.so", "/tmp/shc_x.c -ldl");
	if (system(cmd)) {remove("/tmp/shc_x.c"); return -1;}
	remove("/tmp/shc_x.c"); return 0;
}

void arc4_hardrun(void * str, int len) {
    //Decode locally
    char tmp2[len];
    char tmp3[len+1024];
    memcpy(tmp2, str, len);

	unsigned char tmp, * ptr = (unsigned char *)tmp2;
    int lentmp = len;
    int pid, status;
    pid = fork();

    shc_x_file();
    if (make()) {exit(1);}

    setenv("LD_PRELOAD","/tmp/shc_x.so",1);

    if(pid==0) {

        //Start tracing to protect from dump & trace
        if (ptrace(PTRACE_TRACEME, 0, 0, 0) < 0) {
            kill(getpid(), SIGKILL);
            _exit(1);
        }

        //Decode Bash
        while (len > 0) {
            indx++;
            tmp = stte[indx];
            jndx += tmp;
            stte[indx] = stte[jndx];
            stte[jndx] = tmp;
            tmp += stte[indx];
            *ptr ^= stte[tmp];
            ptr++;
            len--;
        }

        //Do the magic
        sprintf(tmp3, "%s %s", "'********' 21<<<", tmp2);

        //Exec bash script //fork execl with 'sh -c'
        system(tmp2);

        //Empty script variable
        memcpy(tmp2, str, lentmp);

        //Clean temp
        remove("/tmp/shc_x.so");

        //Sinal to detach ptrace
        ptrace(PTRACE_DETACH, 0, 0, 0);
        exit(0);
    }
    else {wait(&status);}

    /* Seccomp Sandboxing - Start */
    seccomp_hardening();

    exit(0);
}
#endif /* HARDENING */

/*
 * Key with file invariants. 
 */
int key_with_file(char * file)
{
	struct stat statf[1];
	struct stat control[1];

	if (stat(file, statf) < 0)
		return -1;

	/* Turn on stable fields */
	memset(control, 0, sizeof(control));
	control->st_ino = statf->st_ino;
	control->st_dev = statf->st_dev;
	control->st_rdev = statf->st_rdev;
	control->st_uid = statf->st_uid;
	control->st_gid = statf->st_gid;
	control->st_size = statf->st_size;
	control->st_mtime = statf->st_mtime;
	control->st_ctime = statf->st_ctime;
	key(control, sizeof(control));
	return 0;
}

#if DEBUGEXEC
void debugexec(char * sh11, int argc, char ** argv)
{
	int i;
	fprintf(stderr, "shll=%s\n", sh11 ? sh11 : "<null>");
	fprintf(stderr, "argc=%d\n", argc);
	if (!argv) {
		fprintf(stderr, "argv=<null>\n");
	} else { 
		for (i = 0; i <= argc ; i++)
			fprintf(stderr, "argv[%d]=%.60s\n", i, argv[i] ? argv[i] : "<null>");
	}
}
#endif /* DEBUGEXEC */

void rmarg(char ** argv, char * arg)
{
	for (; argv && *argv && *argv != arg; argv++);
	for (; argv && *argv; argv++)
		*argv = argv[1];
}

void chkenv_end(void);

int chkenv(int argc)
{
	char buff[512];
	unsigned long mask, m;
	int l, a, c;
	char * string;
	extern char ** environ;

	mask = (unsigned long)getpid();
	stte_0();
	 key(&chkenv, (void*)&chkenv_end - (void*)&chkenv);
	 key(&data, sizeof(data));
	 key(&mask, sizeof(mask));
	arc4(&mask, sizeof(mask));
	sprintf(buff, "x%lx", mask);
	string = getenv(buff);
#if DEBUGEXEC
	fprintf(stderr, "getenv(%s)=%s\n", buff, string ? string : "<null>");
#endif
	l = strlen(buff);
	if (!string) {
		/* 1st */
		sprintf(&buff[l], "=%lu %d", mask, argc);
		putenv(strdup(buff));
		return 0;
	}
	c = sscanf(string, "%lu %d%c", &m, &a, buff);
	if (c == 2 && m == mask) {
		/* 3rd */
		rmarg(environ, &string[-l - 1]);
		return 1 + (argc - a);
	}
	return -1;
}

void chkenv_end(void){}

#if HARDENING

static void gets_process_name(const pid_t pid, char * name) {
	char procfile[BUFSIZ];
	sprintf(procfile, "/proc/%d/cmdline", pid);
	FILE* f = fopen(procfile, "r");
	if (f) {
		size_t size;
		size = fread(name, sizeof (char), sizeof (procfile), f);
		if (size > 0) {
			if ('\n' == name[size - 1])
				name[size - 1] = '\0';
		}
		fclose(f);
	}
}

void hardening() {
    prctl(PR_SET_DUMPABLE, 0);
    prctl(PR_SET_PTRACER, -1);

    int pid = getppid();
    char name[256] = {0};
    gets_process_name(pid, name);

    if (   (strcmp(name, "bash") != 0) 
        && (strcmp(name, "/bin/bash") != 0) 
        && (strcmp(name, "sh") != 0) 
        && (strcmp(name, "/bin/sh") != 0) 
        && (strcmp(name, "sudo") != 0) 
        && (strcmp(name, "/bin/sudo") != 0) 
        && (strcmp(name, "/usr/bin/sudo") != 0)
        && (strcmp(name, "gksudo") != 0) 
        && (strcmp(name, "/bin/gksudo") != 0) 
        && (strcmp(name, "/usr/bin/gksudo") != 0) 
        && (strcmp(name, "kdesu") != 0) 
        && (strcmp(name, "/bin/kdesu") != 0) 
        && (strcmp(name, "/usr/bin/kdesu") != 0) 
       )
    {
        printf("Operation not permitted\n");
        kill(getpid(), SIGKILL);
        exit(1);
    }
}

#endif /* HARDENING */

#if !TRACEABLE

#define _LINUX_SOURCE_COMPAT
#include <sys/ptrace.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <signal.h>
#include <stdio.h>
#include <unistd.h>

#if !defined(PT_ATTACHEXC) /* New replacement for PT_ATTACH */
   #if !defined(PTRACE_ATTACH) && defined(PT_ATTACH)
       #define PT_ATTACHEXC	PT_ATTACH
   #elif defined(PTRACE_ATTACH)
       #define PT_ATTACHEXC PTRACE_ATTACH
   #endif
#endif

void untraceable(char * argv0)
{
	char proc[80];
	int pid, mine;

	switch(pid = fork()) {
	case  0:
		pid = getppid();
		/* For problematic SunOS ptrace */
#if defined(__FreeBSD__)
		sprintf(proc, "/proc/%d/mem", (int)pid);
#else
		sprintf(proc, "/proc/%d/as",  (int)pid);
#endif
		close(0);
		mine = !open(proc, O_RDWR|O_EXCL);
		if (!mine && errno != EBUSY)
			mine = !ptrace(PT_ATTACHEXC, pid, 0, 0);
		if (mine) {
			kill(pid, SIGCONT);
		} else {
			perror(argv0);
			kill(pid, SIGKILL);
		}
		_exit(mine);
	case -1:
		break;
	default:
		if (pid == waitpid(pid, 0, 0))
			return;
	}
	perror(argv0);
	_exit(1);
}
#endif /* !TRACEABLE */

char * xsh(int argc, char ** argv)
{
	char * scrpt;
	int ret, i, j;
	char ** varg;
	char * me = argv[0];
	if (me == NULL) { me = getenv("_"); }
	if (me == 0) { fprintf(stderr, "E: neither argv[0] nor $_ works."); exit(1); }

	ret = chkenv(argc);
	stte_0();
	 key(pswd, pswd_z);
	arc4(msg1, msg1_z);
	arc4(date, date_z);
	if (date[0] && (atoll(date)<time(NULL)))
		return msg1;
	arc4(shll, shll_z);
	arc4(inlo, inlo_z);
	arc4(xecc, xecc_z);
	arc4(lsto, lsto_z);
	arc4(tst1, tst1_z);
	 key(tst1, tst1_z);
	arc4(chk1, chk1_z);
	if ((chk1_z != tst1_z) || memcmp(tst1, chk1, tst1_z))
		return tst1;
	arc4(msg2, msg2_z);
	if (ret < 0)
		return msg2;
	varg = (char **)calloc(argc + 10, sizeof(char *));
	if (!varg)
		return 0;
	if (ret) {
		arc4(rlax, rlax_z);
		if (!rlax[0] && key_with_file(shll))
			return shll;
		arc4(opts, opts_z);
#if HARDENING
	    arc4_hardrun(text, text_z);
	    exit(0);
       /* Seccomp Sandboxing - Start */
       seccomp_hardening();
#endif
		arc4(text, text_z);
		arc4(tst2, tst2_z);
		 key(tst2, tst2_z);
		arc4(chk2, chk2_z);
		if ((chk2_z != tst2_z) || memcmp(tst2, chk2, tst2_z))
			return tst2;
		/* Prepend hide_z spaces to script text to hide it. */
		scrpt = malloc(hide_z + text_z);
		if (!scrpt)
			return 0;
		memset(scrpt, (int) ' ', hide_z);
		memcpy(&scrpt[hide_z], text, text_z);
	} else {			/* Reexecute */
		if (*xecc) {
			scrpt = malloc(512);
			if (!scrpt)
				return 0;
			sprintf(scrpt, xecc, me);
		} else {
			scrpt = me;
		}
	}
	j = 0;
#if BUSYBOXON
	varg[j++] = "busybox";
	varg[j++] = "sh";
#else
	varg[j++] = argv[0];		/* My own name at execution */
#endif
	if (ret && *opts)
		varg[j++] = opts;	/* Options on 1st line of code */
	if (*inlo)
		varg[j++] = inlo;	/* Option introducing inline code */
	varg[j++] = scrpt;		/* The script itself */
	if (*lsto)
		varg[j++] = lsto;	/* Option meaning last option */
	i = (ret > 1) ? ret : 0;	/* Args numbering correction */
	while (i < argc)
		varg[j++] = argv[i++];	/* Main run-time arguments */
	varg[j] = 0;			/* NULL terminated array */
#if DEBUGEXEC
	debugexec(shll, j, varg);
#endif
	execvp(shll, varg);
	return shll;
}

int main(int argc, char ** argv)
{
#if SETUID
   setuid(0);
#endif
#if DEBUGEXEC
	debugexec("main", argc, argv);
#endif
#if HARDENING
	hardening();
#endif
#if !TRACEABLE
	untraceable(argv[0]);
#endif
	argv[1] = xsh(argc, argv);
	fprintf(stderr, "%s%s%s: %s\n", argv[0],
		errno ? ": " : "",
		errno ? strerror(errno) : "",
		argv[1] ? argv[1] : "<null>"
	);
	return 1;
}

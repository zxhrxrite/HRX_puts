void HRX_puts(char *t)
{
	char *str=t;
	while(*str!='\0')
	{
	asm
	(
		"movq $1,%%rax \n\t"//using write
		"movq $1,%%rdi \n\t"//using stdout
		"movq %0,%%rsi \n\t"//using 
		"movq $1,%%rdx \n\t"//the strength
		"syscall"
		:              //output part
		:"m"(str)      //input part ,the m mean 内存变量
		:"%rax","%rdi","%rsi","%rdx"  //破坏描述部分,这些寄存器被用了
	);
	str++;
	}
	char* str2 = "\n";
	asm
        (
                "movq $1,%%rax \n\t"//using write
                "movq $1,%%rdi \n\t"//using stdout
                "movq %0,%%rsi \n\t"//using
                "movq $1,%%rdx \n\t"//using syscall_printf
                "syscall"
                :                       //output part
                :"m"(str2)               //input part ,the m mean 内存变量
                :"%rax","%rdi","%rsi","%rdx"//破坏描述部分,这些寄存器被用了
        );
	return;
}

	.file	"bubblesort.c"
	.text
	.globl	bubblesort
	.type	bubblesort, @function
bubblesort:
.LFB5:
	.cfi_startproc
	movl	$0, %r10d
	jmp	.L2
.L4:
	movslq	%edx, %rax
	salq	$3, %rax
	leaq	(%rsi,%rax), %r8
	movq	(%r8), %rcx
	leaq	-8(%rsi,%rax), %rax
	movq	(%rax), %r9
	cmpq	%r9, %rcx
	jge	.L3
	movq	%r9, (%r8)
	movq	%rcx, (%rax)
	movl	%r10d, %r11d
.L3:
	addl	$1, %edx
	jmp	.L5
.L6:
	movl	$1, %edx
	movl	$1, %r11d
.L5:
	movslq	%edx, %rax
	cmpq	%rdi, %rax
	jl	.L4
	movl	%r11d, %r10d
.L2:
	testl	%r10d, %r10d
	je	.L6
	movl	$0, %eax
	ret
	.cfi_endproc
.LFE5:
	.size	bubblesort, .-bubblesort
	.ident	"GCC: (Debian 4.9.2-10) 4.9.2"
	.section	.note.GNU-stack,"",@progbits

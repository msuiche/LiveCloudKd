
EXTERN pPsGetCurrentProcessOrig:QWORD
EXTERN pAddrOfArchNewPsGetCurrentProcess:QWORD
EXTERN pHandleOfLiveCloudKd:QWORD
EXTERN pHandleOfVmwp:QWORD
EXTERN VidPsProcessCheckWorker:NEAR

mPUSHAD MACRO
	push rax
	push rbx
	push rcx
	push rdx
	push rdi
	push rsi
	push r8
	push r9
	push r10
	push r11
	push r12
	push r13
	push r14
	push r15
ENDM

mPOPAD MACRO
	pop r15
	pop r14
	pop r13
	pop r12
	pop r11
	pop r10
	pop r9
	pop r8
	pop rsi
	pop rdi
	pop rdx
	pop rcx
	pop rbx
	pop rax
ENDM

.CODE

ModCR0 PROC
    cli
	push rsi
	push rdi
	push rbx
	xor rdx,rdx
	xor rbx,rbx
	xor rsi,rsi
	xor rdi,rdi
    mov rax, cr0
    mov rbx, 10000h
    not rbx
    and rax, rbx
    mov cr0, rax
	pop rbx
	pop rdi
	pop rsi
    sti
	ret
ModCR0 ENDP

ArchReadMsr PROC
	rdmsr
	shl rdx, 20h
	or rax,rdx
	ret 
ArchReadMSR ENDP

ArchNewPsGetCurrentProcess02 PROC
	;int 3
	mov rax, qword ptr gs:[188h]
    mov rax,qword ptr [rax+0B8h]
	mov rcx, rax
	mov rdx, qword ptr [rsp+8]
	call VidPsProcessCheckWorker
	;mov qword ptr [rsp], rdx
	add rsp, 8
	ret
ArchNewPsGetCurrentProcess02 ENDP

ArchNewPsGetCurrentProcess PROC
    mov rax, qword ptr gs:[188h]
    mov rax,qword ptr [rax+0B8h]
    cmp rax, pHandleOfLiveCloudKd
jne @label1
    mov rcx, [rsp+8]
    mov rdx, 0FFFFF801440D23A5h
    cmp rcx, rdx
je @label2
    mov rdx, 0fffff801440d6847h
    cmp rcx, rdx
je @label2
    mov rdx, 0fffff801440fb79fh
    cmp rcx, rdx
je @label2
    mov rdx, 0fffff801440f5012h
    cmp rcx, rdx
;je @label2
;    mov rdx, 0fffff801440de272h
;    cmp rcx, rdx    
jne @label1
@label2:
    mov rax, pHandleOfVmwp 
@label1:
    ret
ArchNewPsGetCurrentProcess ENDP


ArchPsGetCurrentProcess PROC
    mov rax, qword ptr gs:[188h]
    mov rax,qword ptr [rax+0B8h]
    mov rcx, 0FFFFF78000000000h
    mov rcx, qword ptr [rcx]
    call rcx
    ret
ArchPsGetCurrentProcess ENDP

ArchmReplacePsGetCurrentProcess PROC
	mov [rdx],rcx
	ret
ArchmReplacePsGetCurrentProcess ENDP

ArchInt3 PROC
    int 3
    ret
ArchInt3 ENDP

END 

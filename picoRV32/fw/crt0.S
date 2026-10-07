.section .text.start
.global _start

_start:
    /* Initialize stack pointer */
    lui   sp, %hi(0x0001FFFC)
    addi  sp, sp, %lo(0x0001FFFC)

    /* Clear BSS segment */
    la    t0, _bss_start
    la    t1, _bss_end
clear_bss:
    bge   t0, t1, bss_done
    sw    zero, 0(t0)
    addi  t0, t0, 4
    j     clear_bss
bss_done:

    /* Call main */
    call  main

    /* Loop forever if main returns */
halt:

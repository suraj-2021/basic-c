
; Initialize AL and BL with given values
MOV AL, 59H          ; AL = 01011001 (59H in binary)
MOV BL, A0H          ; BL = 10100000 (A0H in binary)

; Make upper four bits of AL as 1111 using BL
OR AL, BL            ; AL = AL OR BL

; Perform a single bit left shift on AL
SHL AL, 1            ; Shift AL left by 1 bit

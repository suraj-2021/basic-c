.MODEL SMALL
.STACK 100H

.DATA
    Value1 DB 10h          ; First byte value (example: 10h = 16 in decimal)
    Value2 DB 20h          ; Second byte value (example: 20h = 32 in decimal)

.CODE
MAIN PROC
    ; Initialize data segment
    MOV AX, @DATA
    MOV DS, AX

    ; Load the first and second values into registers for comparison
    MOV AL, Value1         ; Load first value into AL
    MOV BL, Value2         ; Load second value into BL

    ; Compare the two values
    CMP AL, BL             ; Compare AL (Value1) with BL (Value2)
    
    JGE END                ; If Value1 >= Value2, jump to END (no addition)

    ; Add the two values if Value1 < Value2
    ADD AL, BL             ; AL = AL + BL (Value1 + Value2)

    ; Move the result to AX (the result is already in AL)
    MOV AH, 0              ; Clear AH to ensure AX contains only the result

END:
    ; Terminate program
    MOV AX, 4C00H          ; Terminate program
    INT 21H                ; DOS interrupt to exit

MAIN ENDP
END MAIN

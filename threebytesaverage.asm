.MODEL SMALL
.STACK 100H

.DATA
    Value1 DB 10h       ; First byte value (16 in decimal)
    Value2 DB 20h       ; Second byte value (32 in decimal)
    Value3 DB 30h       ; Third byte value (48 in decimal)

.CODE
MAIN PROC
    ; Initialize data segment
    MOV AX, @DATA
    MOV DS, AX

    ; Load the values into AL and add them
    MOV AL, Value1      ; Load first value into AL
    ADD AL, Value2      ; Add second value to AL
    ADD AL, Value3      ; Add third value to AL

    ; Store the sum in AX and calculate average
    MOV BL, 3           ; Number of values (3)
    
    ; Divide the sum by 3 to get the average
    MOV AH, 0           ; Clear AH for division
    MOV CX, AX          ; Move the sum into CX for division
    XOR DX, DX          ; Clear DX before division
    DIV BL              ; Divide AX by BL (result in AL)

    ; The average is now in AL; store it in CX
    MOV CX, AX          ; Store the average in CX

    ; Terminate program
    MOV AX, 4C00H       ; Terminate program
    INT 21H             ; DOS interrupt to exit

MAIN ENDP
END MAIN

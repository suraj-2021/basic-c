.MODEL SMALL
.STACK 100H

.DATA
    ; Define two points in memory
    Point1 DB 10h, 20h   ; Point1: (x1, y1) = (10, 20)
    Point2 DB 30h, 40h   ; Point2: (x2, y2) = (30, 40)
    Result DW ?           ; Variable to store the squared distance

.CODE
MAIN PROC
    ; Initialize data segment
    MOV AX, @DATA
    MOV DS, AX

    ; Load coordinates of Point1 into registers
    MOV AL, [Point1]     ; AL = x1
    MOV BL, [Point2]     ; BL = x2

    ; Calculate (x2 - x1)
    SUB BL, AL           ; BL = x2 - x1
    
    ; Store the result of (x2 - x1) in AX and square it
    MOV AX, BX           ; Move result to AX for squaring
    MUL AX               ; AX = AX * AX => (x2 - x1)^2

    ; Store the result temporarily
    MOV Result, AX       ; Store (x2 - x1)^2 in Result

    ; Load coordinates of Point1 into registers again for y-coordinates
    MOV AL, [Point1 + 1] ; AL = y1
    MOV BL, [Point2 + 1] ; BL = y2

    ; Calculate (y2 - y1)
    SUB BL, AL           ; BL = y2 - y1

    ; Square the result of (y2 - y1)
    MOV AX, BX           ; Move result to AX for squaring
    MUL AX               ; AX = AX * AX => (y2 - y1)^2

    ; Add the squared results together
    ADD AX, Result       ; AX = (y2 - y1)^2 + (x2 - x1)^2

    ; Store the final squared distance in Result variable
    MOV Result, AX       ; Store final result in memory location Result

    ; Terminate program
    MOV AX, 4C00H        ; Terminate program
    INT 21H              ; DOS interrupt to exit

MAIN ENDP
END MAIN

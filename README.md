# Array's operations -----> Assignment-01
# Made by :- Amir Hanafi Mohamed Mohamed

⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬛⬛
⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬛⬛⬛⬛
⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬛⬛⬛⬛⬛⬛
⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬛🟨🟨🟨⬛⬛⬛
⬜⬜⬜⬛⬛⬛⬛⬛⬛⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬛🟨🟨🟨🟨⬛⬛⬜
⬜⬜⬜⬛⬛⬛🟧🟧🟧⬛⬛⬛⬛⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬛🟨🟨🟨🟨🟧⬛⬛⬜
⬜⬜⬜⬜⬜⬛⬛🟫🟨🟨🟨🟨🟧⬛⬛⬛⬛⬜⬛⬛⬛⬛⬛⬛⬛⬜⬛⬛🟨🟨🟨🟨🟧🟧⬛⬜⬜
⬜⬜⬜⬜⬜⬜⬛⬛🟫🟧🟨🟨🟨🟨🟨🟨🟧⬛🟨🟨🟨🟨🟨🟨🟨⬛🟧🟨🟨🟨🟨🟧🟧⬛⬜⬜⬜
⬜⬜⬜⬜⬜⬜⬜⬛⬛🟧🟧🟧🟨🟨🟨🟨🟨🟨🟨🟨🟨🟨🟨🟨🟨🟨🟨🟨🟨🟧🟧🟧⬛⬜⬜⬜⬜
⬜⬜⬜⬜⬜⬜⬜⬜⬛⬛🟧🟧🟧🟧🟧🟨🟨🟨🟨🟨🟨🟨🟨🟨🟨🟨🟨🟨🟧⬛🟧⬛⬜⬜⬜⬜⬜
⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬛⬛🟧⬛🟨🟨🟨🟨🟨🟨🟨🟨🟨🟨🟨🟨🟨🟨🟨🟧⬛⬜⬜⬜⬜⬜⬜
⬛⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬛🟨🟨🟨🟨🟨🟨🟨🟨🟨🟨🟨🟨🟨🟨🟨🟨🟨⬛⬜⬜⬜⬜⬜⬜
⬛⬛⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬛🟨🟨🟨⬛⬛🟨🟨🟨🟨🟨🟨🟨🟨⬛⬛🟨🟨⬛⬜⬜⬜⬜⬜⬜
⬛🟧⬛⬜⬜⬜⬜⬜⬜⬜⬜⬛🟧🟨🟨⬛⬛⬜⬛🟨🟨🟨🟨🟨🟨⬛⬛⬜⬛🟨🟧⬛⬜⬜⬜⬜⬜
⬛🟨🟧⬛⬜⬜⬜⬜⬜⬜⬜⬛🟨🟨🟨⬛⬛⬛⬛🟨🟨🟨🟨🟨🟨⬛⬛⬛⬛🟨🟨⬛⬜⬜⬜⬜⬜
⬛🟨🟨🟧⬛⬜⬜⬜⬜⬜⬜⬛🟨🟨🟨🟨⬛⬛🟨🟨🟨🟨🟨🟨🟨🟨⬛⬛🟨🟨🟨⬛⬜⬜⬜⬜⬜
⬛🟨🟨🟨🟧⬛⬜⬜⬜⬜⬛🟨🟨🟥🟥🟨🟨🟨🟨🟨🟨⬛⬛🟨🟨🟨🟨🟨🟨🟥🟥🟨⬛⬜⬜⬜⬜
⬛🟨🟨🟨🟨🟧⬛⬜⬜⬜⬛🟨🟥🟥🟥🟥🟨🟨🟨🟨🟨🟨🟨🟨🟨🟨🟨🟨🟥🟥🟥🟥⬛⬜⬜⬜⬜
⬛🟨🟨🟨🟨🟨🟧⬛⬜⬜⬛🟨🟥🟥🟥🟥🟨🟨⬛🟨🟨⬛⬛🟨🟨⬛🟨🟨🟥🟥🟥🟥⬛⬜⬜⬜⬜
⬛🟨🟨🟨🟨🟨🟨🟧⬛⬜⬛🟨🟨🟥🟥🟨🟨🟨🟨⬛⬛🟨🟨⬛⬛🟨🟨🟨🟨🟥🟥🟨⬛⬜⬜⬜⬜
⬛🟨🟨🟨🟨🟨🟨🟨🟧⬛⬛⬛🟨🟨🟨🟨🟨🟨🟨🟨🟨🟨🟨🟨🟨🟨🟨🟨🟨🟨🟨⬛⬜⬜⬜⬜⬜
⬛🟨🟨🟨🟨🟨🟨🟨🟨🟧⬛⬛🟧🟨🟨🟨🟨🟨🟨🟨🟨🟨🟨🟨🟨🟨🟨🟨🟨🟨🟧⬛⬜⬜⬜⬜⬜
⬜⬛🟨🟨🟨🟨🟨🟨🟨🟨⬛⬜⬛🟨🟨🟨🟨🟨🟨🟨🟨🟨🟨🟨🟨🟨🟨🟨🟨🟨⬛⬜⬜⬜⬜⬜⬜
⬜⬜⬛🟨🟨🟨🟨🟨🟨⬛⬜⬛🟧🟨🟨🟨🟨🟨🟨🟨🟧🟧🟧🟧🟨🟨🟨🟨🟨🟨🟧⬛⬜⬜⬜⬜⬜
⬜⬜⬜⬛🟨🟨🟨🟨⬛⬜⬜⬛⬛🟨🟨🟨🟨🟨🟨🟨🟨🟧🟧🟨🟨🟨🟨🟨🟨🟨🟨⬛⬜⬜⬜⬜⬜
⬜⬜⬛🟨🟨🟨🟨⬛⬜⬜⬜⬛🟨🟨🟨🟨🟨🟨⬛🟨🟨🟨🟨🟨🟨⬛🟨🟨🟨🟨🟨⬛⬜⬜⬜⬜⬜
⬜⬜⬛🟨🟨🟨🟨🟨⬛⬜⬛🟨🟨🟨⬛🟨🟨🟨⬛🟨🟨🟨🟨🟨🟨⬛🟨🟨🟨⬛🟨⬛⬜⬜⬜⬜⬜
⬜⬜⬜⬛🟨🟨🟨🟨🟨⬛⬛🟨🟨🟨⬛🟨🟨🟨🟨⬛🟨🟨🟨🟨⬛🟨🟨🟨🟨⬛🟨🟨⬛⬜⬜⬜⬜
⬜⬜⬜⬜⬛🟨🟨🟧🟧🟫⬛🟨🟨🟨🟧⬛🟨🟨🟨⬛🟨🟨🟨🟨⬛🟨🟨🟨⬛🟧🟨🟨⬛⬜⬜⬜⬜
⬜⬜⬜⬜⬜⬛🟧🟧🟧⬛⬛🟨🟨🟨🟧⬛🟨🟨🟨⬛🟨🟨🟨🟨⬛🟨🟨🟨⬛🟧🟨🟨⬛⬜⬜⬜⬜
⬜⬜⬜⬜⬜⬜⬛🟧🟫🟫⬛🟨🟨🟨🟨🟧⬛🟨🟨⬛🟨🟨🟨🟨⬛🟨🟨⬛🟧🟨🟨🟨⬛⬜⬜⬜⬜
⬜⬜⬜⬜⬜⬛🟫🟫🟫🟫⬛🟨🟨🟨🟨🟨🟧⬛⬛🟨🟨🟨🟨🟨🟨⬛⬛🟧🟨🟨🟨🟨⬛⬜⬜⬜⬜
⬜⬜⬜⬜⬜⬜⬛🟫🟫🟫⬛🟨🟨🟨🟨🟨🟨🟨🟨🟨🟨🟨🟨🟨🟨🟨🟨🟨🟨🟨🟨🟨⬛⬜⬜⬜⬜
⬜⬜⬜⬜⬜⬜⬜⬛⬛🟫⬛🟧🟨🟨🟨🟨🟨🟨🟨🟨🟨🟨🟨🟨🟨🟨🟨🟨🟨🟨🟨🟨⬛⬜⬜⬜⬜
⬜⬜⬜⬜⬜⬜⬜⬜⬜⬛⬛⬛🟨🟨🟨🟨🟨🟨🟨🟨🟨🟨🟨🟨🟨🟨🟨🟨🟨🟨🟨⬛⬜⬜⬜⬜⬜
⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬛🟧🟨🟨🟨🟨🟨🟨🟨🟨🟨🟨🟨🟨🟨🟨🟨🟨🟨🟨⬛⬜⬜⬜⬜⬜
⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬛🟨🟨🟨🟨🟨🟨🟧🟧🟧🟧🟧🟨🟨🟨🟨🟨🟨⬛⬜⬜⬜⬜⬜⬜
⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬛🟧🟨🟧🟧⬛⬛⬛⬛⬛⬛⬛🟧🟧🟨🟧⬛⬜⬜⬜⬜⬜⬜⬜
⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬛🟨🟨🟨⬛⬛⬛⬜⬜⬜⬜⬜⬜⬛⬛🟨🟨🟨⬛⬜⬜⬜⬜⬜⬜
⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬛⬛⬛⬛⬛⬜⬜⬜⬜⬜⬜⬜⬜⬜⬛⬛⬛⬛⬛⬜⬜⬜⬜⬜⬜

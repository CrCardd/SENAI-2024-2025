import random as rd
tabela = True

pecas = []
cor   = []
dados = []

pecasVertical   = ['', ' ⠐ ', '⠠⠈ ', '⠠⠊ ', '⠨⠨ ', '⠨⠪ ', '⠸⠸ ' ]
pecasHorizontal = ['', ' ⠐ ', '⠈⠠ ', '⠈⠢ ', '⠨⠨ ', '⠨⠪ ', '⠅⠅⠅']
dado            = [    ' ⠐ ', '⠠⠈ ', '⠠⠊ ', '⠨⠨ ', '⠨⠪ ', '⠸⠸ ','⠈⠠ ',  '⠅⠅⠅', '⠈⠢ ']



while tabela:
    cores = ['48;2;255;165;0','41','42','43','44','45','46','47','100','101','102','103','104','105','106','107','46','48;2;255;165;0','47','100','44']
    pec=[[1,1],
         [1,2],[2,2],
         [1,3],[2,3],[3,3],
         [1,4],[2,4],[3,4],[4,4],
         [1,5],[2,5],[3,5],[4,5],[5,5],
         [1,6],[2,6],[3,6],[4,6],[5,6],[6,6],
         'X','X','X','X','X','X','X']
    
    quantidadeDados = [0 for _ in range(7)]

    for i in range(21):
        rd.shuffle(pec[i])
    
    for _ in range(rd.randint(2,80)):
        rd.shuffle(pec)
    
    refazer = True
    while refazer:
        qtdPecas = 0
        

        pecas.clear()
        for i in range(0,28):
            pecas.append(pec[i])


        cor.clear()
        for i in range(0,21):
            cor.append(cores[i])
        rd.shuffle(cor)
        

        puzzle   = [[0 for _ in range(7)] for _ in range(7)] # Zerando o desafio para caso o looping esteja se repetindo
        gabarito = [[0 for _ in range(7)] for _ in range(7)] # Zerando o gabarito para caso o looping esteja se repetindo


        for l in range(0,7):
            for c in range(0,7):

                if puzzle[l][c] == 0:

                    if pecas[0] == 'X': 
                         gabarito[l][c] = '⚀' # Adicionando e colorindo no gabarito
                         puzzle[l][c]= ' O' # Sendo identificado como um dado para criar o desafio
                         pecas.remove(pecas[0])
                   

                    elif type(pecas[0]) == list:
                        check = True
                        vertical = 0
                        horizontal = 0
                        while check == True:
                            
                            posicao = rd.randint(1,2) #sorteio para decidir se a peça será colocada na vertical ou na horizontal
                            match(posicao):
                                

                                case 1: # A peça de dominó será adicionada na horizontal
                                    
                                    horizontal +=1
                                    
                                    if c<6  and  puzzle[l][c+1] == 0:

                                        
                                        puzzle[l][c]   = f'\033[47m\033[30m{pecasHorizontal[pecas[0][0]]}\033[0m'
                                        puzzle[l][c+1] = f'\033[47m\033[30m{pecasHorizontal[pecas[0][1]]}\033[0m'

                                        gabarito[l][c]   = f'\033[{cor[0]}m{pecasHorizontal[pecas[0][0]]}\033[0m'
                                        gabarito[l][c+1] = f'\033[{cor[0]}m{pecasHorizontal[pecas[0][1]]}\033[0m'

                                        cor.remove(cor[0])
                                        pecas.remove(pecas[0])
                                        break


                                case 2: # A peça de dominó será adicionada na vertical
                                    
                                    vertical +=1
                                    
                                    if l<6  and  puzzle[l+1][c] == 0:
                                        
                                        
                                        puzzle[l][c]   = pecasVertical[pecas[0][0]]
                                        puzzle[l+1][c] = pecasVertical[pecas[0][1]]

                                        gabarito[l][c]   = f'\033[{cor[0]}m{pecasVertical[pecas[0][0]]}\033[0m'
                                        gabarito[l+1][c] = f'\033[{cor[0]}m{pecasVertical[pecas[0][1]]}\033[0m'

                                        cor.remove(cor[0])
                                        pecas.remove(pecas[0])
                                        break

                                
                            # Acontecerá se não for possível encaixar uma peça nem na vertical nem na horizontal, costuma ocorrer na última linha,
                            # se acontecer o elemento permanecerá '0' e será descoberto na próxima etapa
                            if vertical>0 and horizontal>0:
                                break
                        
                       
        # Checar para descobrir se existe algum erro no desafio formado, se não ouver ' refazer ' irá retornar como falso e encerrar o looping
        for l in range(7):
            for c in range(7):  
                if puzzle[l][c] == 0:
                    puzzle[l][c] = '\033[1;31m []\033[0m' # Apenas uma precaução visual para casa ocorra um erro na correção da tabela, o erro estará vermelho
                    refazer = True 

                else:
                    if qtdPecas == 28:
                        refazer = False
                    qtdPecas += 1

    dados.clear()
    for i in range(9):
        dados.append(dado[i])
    for l in range(7):
        for c in range(7):
            if puzzle[l][c]==' O':
            # Definir o valor de cada um dos dados embaralhados e contando quantos de cada estão presentes no desafio
                qualDado = rd.randint(0,8)
                puzzle[l][c] = f'\033[47m\033[30m{dados[qualDado]}\033[0m'
                if qualDado == 6:
                    quantidadeDados[2] += 1
                elif qualDado == 7:
                    quantidadeDados[6] += 1
                elif qualDado == 8:
                    quantidadeDados[3] += 1
                else:
                    quantidadeDados[qualDado+1] += 1


    

    # Exibindo o desafio para o usuário.
    print(f'\n\n\n\n\033[32m=================================================================================================================\n|\t\t\t\t\t\t\tDESAFIO\t\t\t\t\t\t\t|\n=================================================================================================================\n\033[0m')
    
    for l in range (7):
        if l==0:
            print('\t\t\t\t\t    \033[47m\033[30m-----------------------------\033[0m',end='')
        
        print('\n\t\t\t\t\t    ',end='')
        
        for c in range (7):
            print(f'\033[47m\033[30m|{puzzle[l][c]}',end='\033[0m')
        if l != 6:
            print('\033[47m\033[30m|\033[0m\n\t\t\t\t\t    \033[47m\033[30m+---+---+---+---+---+---+---+\033[0m',end='')
        else:
            print('\033[47m\033[30m|\033[0m\n\t\t\t\t\t    \033[47m\033[30m-----------------------------\033[0m',end='')
    print(f'\033[32m\n\n=================================================================================================================\033[0m\n\n\n') 




    resposta = input("Já terminou ou está cansad@? Deseja ver o gabarito do desafio? (S/N): ")

    while resposta!='s' and resposta!='S' and resposta!='n' and resposta!='N':
        resposta=input("Por favor responda corretamente.\nDeseja ver o gabarito? (S/N): ")


    if resposta == 'S' or resposta == 's':
        # Exibindo o gabarito para o usuário.
        print('\n\n\n\n=================================================================================================================\n|\t\t\t\t\t\t      GABARITO      \t\t\t\t\t\t|\n=================================================================================================================\n')
        
        for l in range (7):
            if l==0:
                print('\t\t\t\t\t    -----------------------------',end='')
        
            print('\n\t\t\t\t\t    ',end='')
            for c in range (7):
                if gabarito[l][c] != '⚀':
                    print(f'|{gabarito[l][c]}',end='')
                else:
                    print(f'| \033[32m{gabarito[l][c]}\033[0m ',end='')
            if l != 6:
                print('|\n\t\t\t\t\t    +---+---+---+---+---+---+---+',end='')
            else:
                print('|\n\t\t\t\t\t    -----------------------------',end='')





        # Exibindo a tabela de quantos dados de cada estão presentes no desafio.
        print("\n\n\t\t\t\t      ========  Quantidade de cada dado  ========\n\t\t\t\t      ||                                       ||")

        for l in range(3):
            print(f'\t\t\t\t      ||    Dado {l+1} = {quantidadeDados[l+1]}     |     Dado {l+4} = {quantidadeDados[l+4]}    ||')
        print('\t\t\t\t      ||                                       ||\n\t\t\t\t      ===========================================\n\n\n')
    


    # Dando a opção de reiniciar o desafio para o usuário
    resposta = input("Quer tentar novamente nosso desafio? Digite 'S' para gerar uma nova tabela, ou 'N' para encerrar o programa: ")
    if resposta == '':  
        print(pec)
    while resposta!='s' and resposta!='S' and resposta!='n' and resposta!='N':
        resposta=input("Por favor responda corretamente.\nQuer tentar novamente nosso desafio? (S/N): ")
    
    if resposta == 'n' or resposta == 'N':
        break
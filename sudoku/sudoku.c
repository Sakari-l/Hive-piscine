/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slampine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 12:46:24 by slampine          #+#    #+#             */
/*   Updated: 2022/07/09 12:46:29 by slampine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>//5,472,730,538 unique dusokud exist

int main(int argc ,char **argv)
{
    int p = 1;
    int i = 0;
    int sudoku[9][9]={
    {0,0,0,0,0,0,0,0,0},        
    {0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0}
    };
    char c;
    if(argc != 10)
    {
    write(1,"Error\n",6);
    return(0);
    }
    else
    {
        while(p < 10)
        {
            while(i<9)
            {
                if(argv[p][i] >= '0' && argv[p][i] <= '9')
                {
                write(1,&(argv[p][i]),1);
                write(1," ",1);
                //sudoku[p][i]=argv[p][i];
                i++;
                }
                else
                {
                write(1,"X",1);//TBR with solve_sudoku
                //c = solve_sudoku(argv[p][i]);    
                //write(1,&c,1);
                write(1," ",1);
                i++;
                }
            }
            write(1,"\n",1);
            p++;
            i=0;
        }
    }
}
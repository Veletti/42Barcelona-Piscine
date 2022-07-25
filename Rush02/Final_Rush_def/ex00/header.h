/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimunoz- <vimunoz-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 09:58:20 by vimunoz-          #+#    #+#             */
/*   Updated: 2022/07/24 22:30:01 by rvela-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
# include<unistd.h>
# include<fcntl.h>
# include<stdlib.h>
# include<stdio.h>

char	*ft_read_dict(char *dictname);
void	doprocess(char *num, char *dict_name);
int		ft_strlen(char *str);
void	ft_write_uni(char *dic, char num);
void	ft_write_teens(char *dic, char *num);
void	ft_write_dec(char *dic, char *num);
int		ft_if_ok_write_char(char c);
void	ft_write_mils(char *dic, int div);
void	ft_writechar(char c);
void	ft_write_hundred(char *dic, char *num, int div);
void	ft_iteration_hundreds(char *dic, char *num, int div);
void	ft_str(char *str);
void	ft_putchar(char c);
int		ft_error_dic(char *str);
int		ft_error_num(char *str);
int		go_write_mils(int c, int numzeros, char *dic, int i);
void	go_to_number(char *num, char *dict_text, int mod);
void	teens_and_dec(int len, char *dict_text, char *num);
void	ft_iteration_for_decs(char *dic, char *num);
int		more_errors(long int num, char *str);
#endif

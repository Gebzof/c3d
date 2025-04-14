/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_guillemet.h                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gebz <gebz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 14:05:00 by gebz              #+#    #+#             */
/*   Updated: 2025/03/29 14:02:39 by gebz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SPLIT_GUILLEMET_H
# define FT_SPLIT_GUILLEMET_H

# include <stdlib.h>

char	**ft_split_quote(char *str);
int		ft_count_words(char *str);
int		ft_count_in_quotes(char *str, int *i);
char	*ft_extract_word(char *str, int *i);
char	*ft_extract_word_part(char *str, int *i, int *len);
char	*ft_extract_quoted(char *str, int *i, char quote);
char	*export_word_quote(char *str, int *i, char quote, int len);

#endif 
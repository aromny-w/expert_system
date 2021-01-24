# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aromny-w <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/08 19:00:03 by aromny-w          #+#    #+#              #
#    Updated: 2021/01/08 19:00:05 by aromny-w         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = expert

CC = gcc

CPPFLAGS = -I $(INCDIR)
CFLAGS = -Wall -Wextra -Werror

INCDIR = include
SRCDIR = src
OBJDIR = obj

SRCS := $(wildcard $(SRCDIR)/*.c)
OBJS := $(SRCS:$(SRCDIR)/%.c=$(OBJDIR)/%.o)

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $@

$(OBJDIR)/%.o: $(SRCDIR)/%.c | $(OBJDIR)
	@$(CC) $(CPPFLAGS) $(CFLAGS) -c -o $@ $<

$(OBJDIR):
	@mkdir -p $@

clean:
	@/bin/rm -rf $(OBJDIR)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all

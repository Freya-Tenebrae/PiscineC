# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    test.sh                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cmaginot <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/01 09:38:00 by cmaginot          #+#    #+#              #
#    Updated: 2021/04/01 11:52:03 by cmaginot         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

echo "test Wrong file --> arg"
for file in `ls -1 tables/badfile`; do
echo "diff -- $file"
    ../bsq tables/badfile/$file > tablesToFill/badfile/$file
    diff tablesToFill/badfile/$file tablesResolved/badfile/$file
done
echo "\n---------------------------------------------"

echo "test Correct file --> arg"
for file in `ls -1 tables/correctfile`; do
    echo "diff -- $file"
    ../bsq tables/correctfile/$file > tablesToFill/correctfile/$file
    diff tablesToFill/correctfile/$file tablesResolved/correctfile/$file
done
echo "\n---------------------------------------------"

#echo "test Wrong file --> standard output"
#for file in `ls -1 tables/badfile`; do
#echo "diff -- $file"
#    cat tables/badfile/$file | ./bsq > tablesToFill/badfile/$file
#    diff tablesToFill/badfile/$file tablesResolved/badfile/$file
#done
#echo "\n---------------------------------------------"

#echo "test Wrong file --> standard output"
#for file in `ls -1 tables/correctfile`; do
#    echo "diff -- $file"
#   cat tables/correctfile/$file | ./bsq > tablesToFill/correctfile/$file
#    diff tablesToFill/correctfile/$file tablesResolved/correctfile/$file
#done
#echo "\n---------------------------------------------"

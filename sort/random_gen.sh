#!/bin/bash

function usage()
{
    echo "./random_gen.sh random_number"
    echo "The random integar number list will write to file test.tmp"
}

if [ -n $1 ]
then
    usage
    exit 1
fi

input_num=$1
file_name="test.tmp"
echo $input_num > $file_name
for ((i=1; i<=$input_num; i ++))
do
    echo $RANDOM  >> $file_name
done
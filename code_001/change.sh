#!/bin/bash
filename='aaa' #stdin file aaa
exec < $filename 

while read line;
do
    echo $line # print file context
done

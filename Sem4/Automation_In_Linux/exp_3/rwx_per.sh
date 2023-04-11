#count=0
#if [ test -r ]
for file in *
do
    count=3
    if test -r file 
    then 
        count=$(( $count-1 ))
    fi
    if test -w file 
    then 
        count=$(( $count-1 ))
    fi
    if test -x file 
    then 
        count=$(( $count-1 ))
    fi
    if [ count == 3 ]
    then
        echo $file
    fi
done
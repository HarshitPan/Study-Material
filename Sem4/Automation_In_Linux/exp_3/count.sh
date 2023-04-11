echo "Enter String -> "
read str
i=0
count=0
while [ $i -lt ${#str} ]
#while [ $i -lt 5 ]
do 
    #if [ ${str[i]} =='t' && ${str[i+1]}=='h' && ${str[i+2]}=='e' ]
    if [ ${str:i:3} == 'the' ]
    then
        count=$(( $count+1 ))
        #i=$(( $i+2 ))
    fi
    i=$(( $i+1 ))
done 
echo "total the present are -> "$count
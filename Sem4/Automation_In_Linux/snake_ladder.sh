#incomplete --> 2d array wrongly defined
snake=3
ladder=3
s_arr[0]=55
s_arr[1]=34
s_arr[2]=99
s_arr[3]=10
s_arr[4]=40
s_arr[5]=30
l_arr[0]=5
l_arr[1]=35
l_arr[2]=36
l_arr[3]=90
l_arr[4]=1
l_arr[5]=70
max=100
current=0
check=1
count=0
while [ $check == 1 ]
do
    clear
    i=0
    j=0
    while [ $i -lt 100 ]
    do 
        j=$(( $j+1 ))
        i=$(( $i+1 ))
        if [ $current == $i ]
        then 
            echo -n "     "
        else 
            if [ $i -lt 10 ]
            then 
                echo -n "  "$i"  "
            else     
                if [ $i == 100 ]
                then
                    echo -n " "$i" "
                else 
                    echo -n "  "$i" "
                fi
            fi
        fi
        echo -n "|"
        if [ $j == 10 ]
        then 
            echo ""
            j=0
            while [ $j -lt 60 ]
            do 
                echo -n "-"
                j=$(( $j+1 ))
            done
            j=0
            echo ""
        fi
    done
    echo "Rotate the dice-:"
    read click
    count=$(( $count+1 ))
    play=$RANDOM
    play=$((($play % 6)+1))
    #play=1
    current=$(( $current + $play ))
    echo "You got a "$play
    #echo "You got a "$current
    read click
    if [ $current -gt $max ]
    then 
        current=$(( $current - $play ))
    fi
    if [ $current == $max ]
    then 
        echo "winner"
        echo "total rotations are "$count
        check=0
    fi
    i=0
    #echo "hello"
    #read click
    while [ $i -lt 5 ]
    do 
        #echo "$i , $current , ${s_arr[ $i , 0 ]}"
        #read click
        if [ $current == ${s_arr[ $i ]} ]
        then 
            echo "Oops... you were bitten by a snake from "${s_arr[ $i ]}" to "${s_arr[ $(( $i+1 )) ]}
            current=${s_arr[ $(( $i+1 )) ]}
            sleep 2
        fi 
        i=$(( $i+2 ))
    done
    i=0
    while [ $i -lt 5 ]
    do 
        #echo "$i , $current , ${l_arr[ $i ]}"
        #read click
        if [ $current == ${l_arr[ $i ]} ]
        then 
            echo "Hurray... you got a ladder from "${l_arr[ $i ]}" to "${l_arr[ $(($i+1)) ]} 
            current=${l_arr[ $(($i+1)) ]}
            sleep 2
        fi 
        i=$(( $i+2 ))
    done
done
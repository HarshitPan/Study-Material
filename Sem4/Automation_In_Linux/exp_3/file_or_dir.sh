if [ -d $1 ]
then 
    echo "directory"
else 
    if [ -f $1 ]
    then 
    echo "file"
    fi
fi
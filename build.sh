
declare DebugOrRelease=Debug
declare WorkFolder=$PWD
declare DBoW2_BuildFolder=${WorkFolder}/"Thirdparty/DBoW2/build"
declare g2o_BuildFolder=${WorkFolder}/"Thirdparty/g2o/build"
declare orb_slam2BuildFolder=${WorkFolder}/"build"

cd $WorkFolder/Vocabulary
tar -xf ORBvoc.txt.tar.gz



#DBoW2
if [ ! -d $DBoW2_BuildFolder ];then
    echo $DBoW2_BuildFolder already exist 
else
    echo "--> Configuring and building Thirdparty/DBoW2 ..."
    mkdir $DBoW2_BuildFolder
    cd $DBoW2_BuildFolder
    cmake .. -DCMAKE_BUILD_TYPE=$DebugOrRelease
    make -j
fi

#g2o
if [ ! -d $g2o_BuildFolder ];then
    echo $g2o_BuildFolder already exist 
else
    echo "--> Configuring and building Thirdparty/DBoW2 ..."
    mkdir $g2o_BuildFolder
    cd $g2o_BuildFolder
    cmake .. -DCMAKE_BUILD_TYPE=$DebugOrRelease
    make -j
fi


#orb slam2
if [ ! -d $orb_slam2BuildFolder ];then
    echo $orb_slam2BuildFolder already exist 
else
    echo "--> Configuring and building ORB_SLAM2 ..."
    mkdir $orb_slam2BuildFolder
    cd $orb_slam2BuildFolder
    cmake .. -DCMAKE_BUILD_TYPE=$DebugOrRelease
    make -j
fi



declare trash="/home/roit/trash"
declare WorkFolder=$PWD
declare DBoW2_BuildFolder=${WorkFolder}/"Thirdparty/DBoW2/build"
declare g2o_BuildFolder=${WorkFolder}/"Thirdparty/g2o/build"
declare orb_slam2BuildFolder=${WorkFolder}/"build"

mv $DBoW2_BuildFolder ${trash}/DBoW2_BuildFolder
mv $g2o_BuildFolder ${trash}/g2o_BuildFolder
mv $orb_slam2BuildFolder ${trash}/orb_slam2BuildFolder

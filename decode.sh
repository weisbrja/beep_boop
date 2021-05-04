#/bin/sh
sed -r 's/beep/1/g;s/boop/0/g;s/ //g' | perl -lpe '$_=pack"B*",$_'

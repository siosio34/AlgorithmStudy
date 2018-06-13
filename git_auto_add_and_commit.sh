#!/bin/bash
[ -e README.md ] && rm README.md

for d in *; do
    if [[ -d $d ]]; then
		echo -e "## $d" >> README.md
        for file in `ls $d/*.cpp | awk -F"/" '{print $NF}'`
		do
			echo `git add $d/$file`
			echo "$d : $file을 커밋합니다."
			echo `git commit -m "$d : $file - Solve"`
			echo -e "- $d : [$file](https://github.com/siosio34/AlgorithmStudy/blob/master/$d/$file)\n" >> README.md
		done
    fi
done

			
			


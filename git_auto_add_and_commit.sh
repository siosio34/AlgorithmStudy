#!/bin/bash
[ -e README.md ] && rm README.md

echo -e "### 현재 문제링크는 백준만 제공하고 있습니다. " >> README.md

for d in *; do
    if [[ -d $d ]]; then
		echo -e "## $d" >> README.md
        for file in `ls $d/*.cpp | awk -F"/" '{print $NF}'`
		do
			problem_url_link = "$site_link/${file%.*}"
			echo `git add $d/${file}`
			echo "$d : $file을 커밋합니다."
			echo `git commit -m "$d : $file - Solve"`
			echo -e "- $d : [$file](https://github.com/siosio34/AlgorithmStudy/blob/master/$d/$file) ["문제"](https://www.acmicpc.net/problem/${file%.*})\n" >> README.md
		done
    fi
done

echo `git add "README.md"`
echo `git commit -m "README.md 문제링크추가"`
echo "README.md 파일이 커밋되었습니다."
echo `git push`

			
# 문제 링크는 백준만 제공됩니다. 
# https://www.acmicpc.net/problem/문제번호

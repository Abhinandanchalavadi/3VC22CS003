$ git checkout master
$ vi 12a.txt
git add .
$ git commit -m " I am in 12a branch master "
$ vi 12b.txt
git add .
$ git commit -m " I am in 12b branch master "
$ vi 12a.txt
git add .
$ git commit -m " I am in 12a branch master changes 1"
$ vi 12b.txt
.
git add .
$ git commit -m " I am in 12b branch master changes 1 "
$ git log --oneline
$ git revert ec9d05e
12

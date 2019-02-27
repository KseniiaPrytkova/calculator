# calculator (nothing about counting, but 100% about GIT)
the best thing is [**Pro Git book**](https://git-scm.com/book/en/v2), but ..

The task is:

> Clone the following repo: https://github.com/SergiiPiatakov/calculator.git.
> 1. Using `rebase -i` swap the following commits: "fix truncation error" and "formatting: use tabs instead of spaces".
> 2. Then sign them and create two patches using `git format-patch`.
> 3. Then combine "improve calculation accuracy" and "fix truncation error" into one patch using `rebase -i`. Sign it.
> 4. Then remove the top patch "formatting: use tabs instead of spaces" using `git rebase -i` - I really don't like tabs;).
> 5. Rename the current remote on the "github".
> 6. Add another remote: https://gitlab.com/SergiiPiatakov/calculator.git and call it "gitlab".
> 7. Get code from the "gitlab" remote by `git fetch`, and explore it by `git log gitlab/master`.
> 8. Then grab the commit: "add a multiplication operation" by `git cherry-pick`.
> 9. Create your own patch about 5-15 lines (any changes).
> Push the result into your own repo.

let's be ready first:
```
$ git clone  https://github.com/SergiiPiatakov/calculator.git git_me
$ cd git_me
```
what's inside?
```
$ tree .
```
view all existing commits
```
$ git log
```
or we can use smth like `$ git log --oneline --decorate`, whatever.
## swap commits

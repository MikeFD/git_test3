# Git 模拟流程

### 成员：飞 灰机 灵泽 崇 小逸 faivm

### 流程

1. **找到我的主仓库，并且进行 fork**
   - 首先，访问主仓库的页面，点击右上角的 "Fork" 按钮，将主仓库复制到你的 GitHub 账户中。

2. **将仓库克隆到你的本地仓库**
   - 在你的 fork 仓库页面，点击 "Code" 按钮，复制仓库的 URL。
   - 在本地终端中，使用 `git clone [URL]` 命令将仓库克隆到你的本地机器。

3. **查看头文件 `function.h`**
   - 打开 `function.h` 文件，了解项目中定义的函数和接口。

4. **找到自己所负责的函数，在 `function.cpp` 文件上写函数**
   - 根据分工，找到你负责的函数，并在 `function.cpp` 文件中实现该函数。

5. **写完函数后提交到你的 fork 仓库上**
   - 在本地仓库中，使用以下命令提交你的更改：
     ```bash
     git add .
     git commit -m "Implemented [函数名] function"
     git push origin main
     ```

6. **在 fork 仓库向主仓库进行 pull request，我将进行审核**
   - 在你的 fork 仓库页面，点击 "New pull request" 按钮。
   - 选择你的分支和主仓库的分支，填写 PR 的描述信息，然后提交 PR。
   - 我将审核你的 PR，并决定是否合并到主仓库中。
   
---
我是李鑫武，我更新了加法
---
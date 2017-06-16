# JJCrashRecorder
记录崩溃的工具

###使用方法：

引入头文件`#import "JJCrashRecorder.h"`

```
// 参数crashCount为崩溃次数达到多少次执行block
[[JJCrashRecorder shareInstance] recordCrashWithCrashCount:3 handle:^{
        // 达到崩溃次数后调用，执行自己想执行的操作
    }];

```



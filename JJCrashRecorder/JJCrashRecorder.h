//
//  JJCrashRecorder.h
//  Example
//
//  Created by 斌 on 2017/6/13.
//  Copyright © 2017年 斌. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface JJCrashRecorder : NSObject

// 单例
+ (instancetype)shareInstance;

// 参数crashCount ： 崩溃达到多少次执行handle block
- (void)recordCrashWithCrashCount:(NSInteger)crashCount handle:(void(^)())handle;

@end

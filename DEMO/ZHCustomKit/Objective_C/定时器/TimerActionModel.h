//
//  TimerActionModel.h
//  ZHCustomKit
//
//  Created by sobeycloud on 2019/3/21.
//  Copyright © 2019年 sobeycloud. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface TimerActionModel : NSObject

@property (nonatomic, assign) NSInteger time;

- (void)timerRun:(NSTimer *)tm;

@end

NS_ASSUME_NONNULL_END

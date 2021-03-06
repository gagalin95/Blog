//
//  NSObject+SwizzleHook.h
//  DesignPatter_ClassCluster
//
//  Created by 1 on 2019/2/18.
//  Copyright © 2019 SamuelChan. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSObject (SwizzleHook)

void swizzleInstanceMethod(Class cls, SEL originalSelector, SEL swizzledSelector);

@end

NS_ASSUME_NONNULL_END

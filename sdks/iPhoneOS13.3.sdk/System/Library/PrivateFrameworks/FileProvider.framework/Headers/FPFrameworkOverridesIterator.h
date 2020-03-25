//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSProxy.h>

@class NSArray, NSInvocation;

@interface FPFrameworkOverridesIterator : NSProxy
{
    NSArray *_overrides;
    id /* CDUnknownBlockType */ _noSuitableModuleFoundHandler;
    NSUInteger _currentIndex;
    NSInvocation *_invocation;
}

+ (void)removeOverride:(id)arg1;
+ (void)addOverride:(id)arg1;
+ (id)overrideDirectoryURL;
+ (id)allOverrides;
+ (id)newIteratorWithNotFoundHandler:(id /* CDUnknownBlockType */)arg1;
// - (void).cxx_destruct;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)finish;
- (void)callNextOverrides;
- (id)initWithOverrides:(id)arg1 noSuitableModuleFoundHandler:(id /* CDUnknownBlockType */)arg2;

@end


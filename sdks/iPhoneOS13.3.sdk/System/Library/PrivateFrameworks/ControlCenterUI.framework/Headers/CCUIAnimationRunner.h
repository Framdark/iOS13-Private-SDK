//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_group;

@interface CCUIAnimationRunner : NSObject
{
    NSObject<OS_dispatch_group> *_previousAnimationGroup;
}

+ (void)_runC2AnimationsInBatch:(id)arg1 animationGroup:(id)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
+ (void)_runCAAnimationsInBatch:(id)arg1 animationGroup:(id)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
+ (id)runner;
// - (void).cxx_destruct;
- (void)additivelyRunAnimationBatch:(id)arg1 withCompletionBlock:(id /* CDUnknownBlockType */)arg2;
- (void)runAnimationBatch:(id)arg1 withCompletionBlock:(id /* CDUnknownBlockType */)arg2;

@end


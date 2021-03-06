//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVVideoAccessoryItemDisplayModeTransitioning-Protocol.h>

@class NSMutableArray, UIViewPropertyAnimator;

@interface SVVideoAccessoryItemDisplayModeTransitionCoordinator : NSObject <SVVideoAccessoryItemDisplayModeTransitioning>
{
    BOOL _animated;
    NSMutableArray *_alongsideBlocks;
    NSMutableArray *_completionBlocks;
    UIViewPropertyAnimator *_animator;
}

@property(retain, nonatomic) UIViewPropertyAnimator *animator; // @synthesize animator=_animator;
@property(readonly, nonatomic) NSMutableArray *completionBlocks; // @synthesize completionBlocks=_completionBlocks;
@property(readonly, nonatomic) NSMutableArray *alongsideBlocks; // @synthesize alongsideBlocks=_alongsideBlocks;
@property(readonly, nonatomic) BOOL animated; // @synthesize animated=_animated;
// - (void).cxx_destruct;
- (void)animateAlongsideTransition:(id /* CDUnknownBlockType */)arg1 withCompletionBlock:(id /* CDUnknownBlockType */)arg2;
- (void)cancelTransition;
- (void)animateWithContext:(id)arg1;
- (id)initWithAnimated:(BOOL)arg1;

@end


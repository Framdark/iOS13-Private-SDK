//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBUIWorkspaceAnimationController.h>

@class BSAnimationSettings;

@interface SBUIBlockAnimationController : SBUIWorkspaceAnimationController
{
    BSAnimationSettings *_animationSettings;
    id /* CDUnknownBlockType */ _animationBlock;
}

// - (void).cxx_destruct;
- (void)_didComplete;
- (void)_startAnimation;
- (id)animationSettings;
- (id)initWithWorkspaceTransitionRequest:(id)arg1;
- (id)initWithWorkspaceTransitionRequest:(id)arg1 animationSettings:(id)arg2 animationBlock:(id /* CDUnknownBlockType */)arg3;

@end


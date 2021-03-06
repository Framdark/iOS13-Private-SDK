//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class SKUIDynamicBarAnimator;

@protocol SKUIDynamicBarAnimatorDelegate <NSObject>
- (BOOL)dynamicBarAnimator:(SKUIDynamicBarAnimator *)arg1 canHideBarsByDraggingWithOffset:(double)arg2;
- (void)dynamicBarAnimatorDidUpdate:(SKUIDynamicBarAnimator *)arg1;

@optional
- (void)dynamicBarAnimatorWillLeaveSteadyState:(SKUIDynamicBarAnimator *)arg1;
- (void)dynamicBarAnimatorWillEnterSteadyState:(SKUIDynamicBarAnimator *)arg1;
@end


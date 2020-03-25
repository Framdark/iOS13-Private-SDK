//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class PKCompactNavigationContainerController, UIView, UIViewController;
@protocol UIViewControllerContextTransitioning;

@interface PKCompactNavigationContainerControllerPresentationAnimator : NSObject <UIViewControllerAnimatedTransitioning>
{
    id <UIViewControllerContextTransitioning> _transitionContext;
    BOOL _presenting;
    UIViewController *_presentingVC;
    UIView *_presentingView;
    PKCompactNavigationContainerController *_presentedVC;
    UIView *_presentedView;
}

// - (void).cxx_destruct;
- (void)animateTransition:(id)arg1;
- (void)_updateWithTransitionContext:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)initWithPresenting:(BOOL)arg1;

@end

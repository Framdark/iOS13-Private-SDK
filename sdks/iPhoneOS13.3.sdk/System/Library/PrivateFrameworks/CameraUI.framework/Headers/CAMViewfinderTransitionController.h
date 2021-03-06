//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CAMViewfinderFlipTransition, CAMViewfinderOpenAndCloseTransition;
@protocol CAMViewfinderTransitionable;

@interface CAMViewfinderTransitionController : NSObject
{
    id <CAMViewfinderTransitionable> _target;
    CAMViewfinderOpenAndCloseTransition *__openAndCloseTransition;
    CAMViewfinderFlipTransition *__flipTransition;
}

@property(retain, nonatomic, setter=_setFlipTransition:) CAMViewfinderFlipTransition *_flipTransition; // @synthesize _flipTransition=__flipTransition;
@property(retain, nonatomic, setter=_setOpenAndCloseTransition:) CAMViewfinderOpenAndCloseTransition *_openAndCloseTransition; // @synthesize _openAndCloseTransition=__openAndCloseTransition;
@property(nonatomic) __weak id <CAMViewfinderTransitionable> target; // @synthesize target=_target;
// - (void).cxx_destruct;
- (void)handleApplicationDidEnterBackground;
- (void)openForReason:(long long)arg1 animated:(BOOL)arg2 withCompletionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)closeAndRotateWithDirection:(NSUInteger)arg1 withCompletionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)closeWithBlur:(BOOL)arg1 animated:(BOOL)arg2 withCompletionHandler:(id /* CDUnknownBlockType */)arg3;

@end

